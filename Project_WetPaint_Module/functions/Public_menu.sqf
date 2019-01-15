switch ((_this select 0)) do {

	case 0: {
		if ((_this select 2) == "Yes") then {
			player setVariable ["JIP",true,true];
		}else {player setVariable ["JIP",false,true];};

		player setVariable ["Pass",(_this select 1),true];
		player setVariable ["session",true,true];
	};
	case 1:{
		player setVariable ["PassTyped",(_this select 1),true];
		if (player getVariable "Pass" != (_this select 1)) then {
			ctrlSetText [1001,"Wrong Password!"];
		}else {closeDialog 0;};
	};
};

