# Highway cross section profile
#
# brakedown lane | lane  | lane  | median strip | lane  | lane  | breakdown lane
#      2.5m      | 3.75m | 3.75m |     3.0m     | 3.75m | 3.75m |      2.5m
#
CrossSection HighwayCrossSection
{
	ve = 150.0;
    Shoulder = {1.0, 2.4, -0.7, Shoulder1};
    Overlay = {TarNew1, 1.0};
	LaneInfos =
	{
		(0, 2.5, 0.0, Towards, Tar, 1.0, 0.0, { (None, 0.0) } ),
		(1, 3.75, 0.0, Towards, Tar, 1.0, 0.0, { (None, 0.0) } ),
		(2, 3.75, 0.0, Towards, Tar, 1.0, 0.0, { (None, 0.0) } ),
		(3, 3.0, 0.0, Towards, Grass1, 1.0, 0.0, {(None, 0.0) } ),
		(4, 3.75, 0.0, Onwards, Tar, 1.0, 0.0, { (None, 0.0) } ),
		(5, 3.75, 0.0, Onwards, Tar, 1.0, 0.0, { (None, 0.0) } ),
		(6, 2.5, 0.0, Onwards, Tar, 1.0, 0.0, { (None, 0.0) } )
	};
	LaneTransitions =
	{
		(0, 0,
			{
				(ReflectionPosts, -0.3, 1.0, Towards, 50.0, 0.0),
				(StoneBorderLeft, -0.68, 1.5, Towards, 8.0, 0),
				(Line, 0.175, 0.15, Towards, 1.0, 0.0)
			}
		),
		(0, 1,
			{
				(Line, 0.0, 0.3, Towards, 1.0, 0.0)
			}
		),
		(1, 2,
			{
				(Line, 0.0, 0.15, Towards, 6.0, 12.0)
			}
		),
		(2, 3,
			{
				(Line, -0.3, 0.3, Towards, 1.0, 0.0),
				(Guardrail, 0.5, 1.0, Towards, 0.0, 0.0)
			}
		),
		(3, 4,
			{
				(Line, 0.3, 0.3, Onwards, 1.0, 0.0),
				(Guardrail, -0.5, 1.0, Onwards, 0.0, 0.0)
			}
		),
		(4, 5,
			{
				(Line, 0.0, 0.15, Onwards, 6.0, 12.0)
			}
		),
		(5, 6,
			{
				(Line, 0.0, 0.3, Onwards, 1.0, 0.0)
			}
		),
		(6, 6,
			{
				(ReflectionPosts, 0.3, 1.0, Onwards, 50.0, 0.0),
				(StoneBorderRight, 0.75, 1.5, Towards, 8.0, 0),
				(Line, -0.175, 0.15, Onwards, 1.0, 0.0)
			}
		)
	};
};

CrossSection Highway3CrossSection
{
	ve = 150.0;
    Shoulder = {1.0, 2.4, -0.7, Shoulder1};
    Overlay = {TarNew3, 0.6};
	LaneInfos =
	{
		(0, 2.5, 0.0, Towards, Tar9, 1.0, 0.0, { (None, 0.0) } ),
		(1, 3.75, 0.0, Towards, Tar9, 1.0, 0.0, { (None, 0.0) } ),
		(2, 3.75, 0.0, Towards, Tar9, 1.0, 0.0, { (None, 0.0) } ),
		(3, 3.5, 0.0, Towards, Tar2NoOverlay, 1.0, 0.0, { (None, 0.0) } ),
		(4, 3.0, 0.0, Towards, Grass1, 1.0, 0.0, {(None, 0.0) } ),
		(5, 3.5, 0.0, Onwards, Tar2NoOverlay, 1.0, 0.0, { (None, 0.0) } ),
		(6, 3.75, 0.0, Onwards, Tar9, 1.0, 0.0, { (None, 0.0) } ),
		(7, 3.75, 0.0, Onwards, Tar9, 1.0, 0.0, { (None, 0.0) } ),
		(8, 2.5, 0.0, Onwards, Tar9, 1.0, 0.0, { (None, 0.0) } )
	};
	LaneTransitions =
	{
		(0, 0,
			{
				(ReflectionPosts, -0.3, 1.0, Towards, 50.0, 0.0),
				(StoneBorderLeft, -0.68, 1.5, Towards, 8.0, 0),
				(Line, 0.175, 0.15, Towards, 1.0, 0.0)
			}
		),
		(0, 1,
			{
				(Line, 0.0, 0.3, Towards, 1.0, 0.0)
			}
		),
		(1, 2,
			{
				(Line, 0.0, 0.15, Towards, 6.0, 12.0)
			}
		),
		(2, 3,
			{
				(Line, 0.0, 0.15, Towards, 6.0, 12.0)
			}
		),
		(3, 4,
			{
				(Line, -0.3, 0.3, Towards, 1.0, 0.0),
				(Guardrail, 0.5, 1.0, Towards, 0.0, 0.0)
			}
		),
		(4, 5,
			{
				(Line, 0.3, 0.3, Onwards, 1.0, 0.0),
				(Guardrail, -0.5, 1.0, Onwards, 0.0, 0.0)
			}
		),
		(5, 6,
			{
				(Line, 0.0, 0.15, Onwards, 6.0, 12.0)
			}
		),
		(6, 7,
			{
				(Line, 0.0, 0.15, Onwards, 6.0, 12.0)
			}
		),
		(7, 8,
			{
				(Line, 0.0, 0.3, Onwards, 1.0, 0.0)
			}
		),
		(8, 8,
			{
				(ReflectionPosts, 0.3, 1.0, Onwards, 50.0, 0.0),
				(StoneBorderRight, 0.75, 1.5, Towards, 8.0, 0),
				(Line, -0.175, 0.15, Onwards, 1.0, 0.0)
			}
		)
	};
};

# Highway cross section profile
#
# brakedown lane | lane  | lane  | median strip | lane  | lane  | breakdown lane
#      2.5m      | 3.75m | 3.75m |     3.0m     | 3.75m | 3.75m |      2.5m
#
CrossSection DampHighwayCrossSection
{
	ve = 150.0;
    Shoulder = {1.0, 2.4, -0.7, Shoulder1};
    Overlay = {TarNew1, 1.0};
	LaneInfos =
	{
		(0, 2.5, 0.0, Towards, Tar, 1.0, 0.0, { (None, 0.0) } ),
		(1, 3.75, 0.0, Towards, Tar, 1.0, 0.0, { (None, 0.0) } ),
		(2, 3.75, 0.0, Towards, Tar, 1.0, 0.0, { (None, 0.0) } ),
		(3, 3.0, 0.0, Towards, Grass1, 1.0, 0.0, {(None, 0.0) } ),
		(4, 3.75, 0.0, Onwards, Tar10NoOverlay, 0.5, 0.0, { (None, 0.0) } ),
		(5, 3.75, 0.0, Onwards, Tar10NoOverlay, 0.5, 0.0, { (None, 0.0) } ),
		(6, 2.5, 0.0, Onwards, Tar10NoOverlay, 0.5, 0.0, { (None, 0.0) } )
	};
	LaneTransitions =
	{
		(0, 0,
			{
				(ReflectionPosts, -0.3, 1.0, Towards, 50.0, 0.0),
				(StoneBorderLeft, -0.68, 1.5, Towards, 8.0, 0),
				(Line, 0.175, 0.15, Towards, 1.0, 0.0)
			}
		),
		(0, 1,
			{
				(Line, 0.0, 0.3, Towards, 1.0, 0.0)
			}
		),
		(1, 2,
			{
				(Line, 0.0, 0.15, Towards, 6.0, 12.0)
			}
		),
		(2, 3,
			{
				(Line, -0.3, 0.3, Towards, 1.0, 0.0),
				(Guardrail, 0.5, 1.0, Towards, 0.0, 0.0)
			}
		),
		(3, 4,
			{
				(Line, 0.3, 0.3, Onwards, 1.0, 0.0),
				(Guardrail, -0.5, 1.0, Onwards, 0.0, 0.0)
			}
		),
		(4, 5,
			{
				(Line, 0.0, 0.15, Onwards, 6.0, 12.0)
			}
		),
		(5, 6,
			{
				(Line, 0.0, 0.3, Onwards, 1.0, 0.0)
			}
		),
		(6, 6,
			{
				(ReflectionPosts, 0.3, 1.0, Onwards, 50.0, 0.0),
				(StoneBorderRight, 0.75, 1.5, Towards, 8.0, 0),
				(Line, -0.175, 0.15, Onwards, 1.0, 0.0)
			}
		)
	};
};

# Rural main road cross section profile
#
#  lane  | lane  
#  3.5m  | 3.5m  
#
CrossSection RuralMainRoadCrossSection
{
	Shoulder = {1.0, 1.4, -0.7, Shoulder1, 1};
	ve = 70;
	Overlay = {TarNew3, 1.0};
	LaneInfos =
	{
		(0, 3.5, 0, Towards, Tar, 1.0, 0.0, {(None, 0.0)}),
		(1, 3.5, 0, Onwards, Tar, 1.0, 0.0, {(None, 0.0)})
	};
	LaneTransitions =
	{
		(0, 0,
			{
				(StoneBorderLeft, -0.68, 1.5, Towards, 8.0, 0),
				(ReflectionPosts, -0.2, 1.0, Towards, 50.0, 0.0),
				(Line, 0.12, 0.15, Towards, 1.0, 0.0)
			}
		),
		(0, 1, {(Line, 0.0, 0.15, Towards, 2.0, 6.0)}),
		(1, 1,
			{
				(StoneBorderRight, 0.75, 1.5, Towards, 8.0, 0),
				(ReflectionPosts, 0.2, 1.0, Onwards, 50.0, 0.0),
				(Line, -0.12, 0.15, Towards, 1.0, 0.0)
			}
		)
	};
};

# Rural road cross section profile
#
#  lane  | lane  
#  3m    | 3m  
#
CrossSection RuralRoadCrossSection
{
	Shoulder = {1.0, 1.4, -0.7, Shoulder1, 1};
	ve = 70;
    Overlay = {TarOld2, 1.0};
	LaneInfos =
	{
		(0, 3.0, 0, Towards, Tar, 1.0, 0.0, {(None, 0.0)}),
		(1, 3.0, 0, Onwards, Tar, 1.0, 0.0, {(None, 0.0)})
	};
	LaneTransitions =
	{
		(0, 0,
			{
				(StoneBorderLeft, -0.68, 1.5, Towards, 8.0, 0),
				(Reflectionposts_Night, -0.5, 1.0, Towards, 50.0, 0.0),
				(Line, 0.12, 0.15, Towards, 1.0, 0.0)
			}
		),
		(1, 1,
			{
				(StoneBorderRight, 0.75, 1.5, Towards, 8.0, 0),
				(Reflectionposts_Night, 0.5, 1.0, Onwards, 50.0, 0.0),
				(Line, -0.12, 0.15, Towards, 1.0, 0.0)
			}
		)
	};
};
