//created by Rexi
Droideka={
	params["_obj"];
	
	[_obj, false, [0, 3, 1], 10] call ace_dragging_fnc_setCarryable;
	[_obj, false, [0, 3, 1], 10] call ace_dragging_fnc_setdraggable;
	_obj addAction ["<t color='#00FF00'>Convert to moveable</t>", {
    Dspawner = _this select 0;

    [Dspawner] execVM (cisQuick+droidekaPath+droidekaDriver);
	removeallactions dspawner
	
	},[1],0,false,true,""," gunner  _target == _this "];
};

["SWOP_Droideka", "init",Droideka, false, [], false] call CBA_fnc_addClassEventHandler; 
["SWOP_DroidekaSupport", "init",Droideka, false, [], false] call CBA_fnc_addClassEventHandler; 
["SWOP_DroidekaCamo", "init",Droideka, false, [], false] call CBA_fnc_addClassEventHandler; 



