[Variables]
@Include=#@#Global.inc
@Include2=#ROOTCONFIGPATH#Shortcuts\Global\SkinSettings#HideSettings#.inc

[Rainmeter]
Update=-1
RightMouseUpAction=[!SkinCustomMenu]
ContextTitle=#OT.Alternative#
ContextTitle2=#OT.GlobalSettings#
ContextTitle3=-
ContextTitle4=#OT.Refresh#
ContextTitle5=#OT.Unload#
ContextTitle6=#OT.More#
ContextAction=#GeneralAction2#
ContextAction2=#GeneralAction4#
ContextAction3=[]
ContextAction4=#GeneralAction5#
ContextAction5=#GeneralAction6#
ContextAction6=#GeneralAction7#
;Group=WidgetsAndShortcuts
Group=Extras

[MeterSquare]
Meter=Shape
MeterStyle=MeterSquare_General
MouseOverAction=[!ShowMeter MeterSquareSelected][!Redraw]
MouseLeaveAction=[!HideMeter MeterSquareSelected][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterSquareSelected][!ToggleFadeGroup WidgetsAndShortcuts][!Redraw]

[MeasureWallpaper]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Desktop
RegValue=WallPaper
UpdateDivider=-1