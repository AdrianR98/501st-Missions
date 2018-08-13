unitcap = 0;
IA_liberation_heli_count = 0;
IA_liberation_plane_count = 0;

private ["_local_unitcap","_local_heli_count","_local_plane_count"];

if (IA_liberation_debug) then {private _text = format ["[IA LIBERATION] [DEBUG] Unitcap calculation started on: %1", (name player)];_text remoteExec ["diag_log",2];};

while { true } do {
	_local_unitcap = 0;
	_local_heli_count = 0;
	_local_plane_count = 0;
	{
		if ( (side group _x == GRLIB_side_friendly) && (alive _x) && ((_x distance startbase) > 250 || (isPlayer _x)) ) then {
			_local_unitcap = _local_unitcap + 1;
		};
	} forEach allUnits;
	{
		if (((typeOf _x) in IA_liberation_friendly_air_classnames) && (alive _x) && !(_x getVariable ["IA_liberation_preplaced", false])) then {
			if (_x isKindOf "Helicopter") then {
				_local_heli_count = _local_heli_count + 1;
			};
			if (_x isKindOf "Plane") then {
				_local_plane_count = _local_plane_count + 1;
			};
		};
	} forEach vehicles;
	unitcap = _local_unitcap;
	IA_liberation_heli_count = _local_heli_count;
	IA_liberation_plane_count = _local_plane_count;
	sleep 1;
};