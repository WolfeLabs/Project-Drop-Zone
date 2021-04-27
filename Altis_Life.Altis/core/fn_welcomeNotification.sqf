/*
    File: fn_welcomeNotification.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='6' shadow='0'>Project Drop Zone</t><br /><br />";
_message = _message + "<t align='center' size='6' shadow='0'><img image='textures\advert_images\DropZone.jpg' /></t><br /><br />";
_message = _message + "Useful links if you're new:<br /><br />";
_message = _message + "<a color='#00DFFF'>•</a> Discord: <a href='https://discord.gg/Qdp5VywJXs' color='#56BDD6'>https://discord.gg/Qdp5VywJXs</a><br />";
_message = _message + "<a color='#00DFFF'>•</a> Teamspeak: <a href='placeholder' color='#56BDD6'> Link Placeholder</a><br />";
_message = _message + "<a color='#00DFFF'>•</a> Website (WIP): <a href='placeholder' color='#56BDD6'> Link Placeholder</a><br />";
_message = _message + "IF YOU'RE INTERESTED IN APPLYING FOR PD, EMS, OR STAFF, JOIN DISCORD!<br />";
_message = _message + "Thanks for joining and enjoy your stay, <a color='#B000FF'>Project Drop Zone</a> Staff Team.<br />";
//_message = _message + "You can edit the text displayed in this box by modifying Altis_Life.Altis/core/fn_welcomeNotification.sqf";

//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
