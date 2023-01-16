[Variables]
@Include=#@#Global.inc
HideSettings=1
@Include2=#ROOTCONFIGPATH#Shortcuts\Global\SkinSettings#HideSettings#.inc
@Include3=#@#Resources.inc
CustomAction1=!HideMeterGroup SkinSettings
CustomAction2="#CurrentPath#Settings.inc"

[Rainmeter]
Update=-1
RightMouseUpAction=[!SkinCustomMenu]
ContextTitle=#OT.Edit_targets#
ContextTitle2=-
ContextTitle3=#OT.Alternative#
ContextTitle4=#OT.Skin_Settings#
ContextTitle5=#OT.GlobalSettings#
ContextTitle6=-
ContextTitle7=#OT.Refresh#
ContextTitle8=#OT.Unload#
ContextTitle9=#OT.More#

ContextAction=[!WriteKeyValue Variables Page AddSkins "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"][!Refresh "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"]
ContextAction2=[]
ContextAction3=#GeneralAction2#
ContextAction4=#GeneralAction11#
ContextAction5=#GeneralAction4#
ContextAction6=[]
ContextAction7=#GeneralAction5#
ContextAction8=#GeneralAction6#
ContextAction9=#GeneralAction7#

[MeterSquare]
Meter=Shape
MeterStyle=MeterSquare_General
MouseOverAction=[!ShowMeter MeterSquareSelected][!Redraw]
MouseLeaveAction=[!HideMeter MeterSquareSelected][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterSquareSelected]["[#QuickSetting.Action.[#QuickSetting_1]]"][!Redraw]

[MeasureWallpaper]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Desktop
RegValue=WallPaper