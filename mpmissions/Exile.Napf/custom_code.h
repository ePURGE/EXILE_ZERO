class exile_client_system
{
	tag = "exsys";
	class system
	{
		file = "system";
	};
	class functions
	{
		file = "system\functions";
		class fetchCfgDetails {};
		class handleItem {};
		class accType {};
		class checkBuild {};
		class checkVehicleCount {};
		class findString {};
		class dialog_repair_action {};
		class dialog_repair_menu {};
	};
	/*
	class network
	{
		file = "system\network";
		class dayzClientInit { postInit = 1; };
	};
	*/
};