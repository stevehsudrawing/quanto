[Variables]
@Include=#@#Global.inc
HideSettings=1
@Include2=#ROOTCONFIGPATH#Shortcuts\Global\SkinSettings#HideSettings#.inc
@Include3=#@#Resources\Resources.inc
CustomAction1=!HideMeterGroup SkinSettings
CustomAction2="#CurrentPath#Settings.inc"

[Rainmeter]
Update=-1
RightMouseUpAction=[!SkinCustomMenu]
ContextTitle=#OT.Edit_targets#
ContextTitle2=-
ContextTitle3=#OT.Alternative#
ContextTitle4=#OT.GlobalSettings#
ContextTitle5=-
ContextTitle6=#OT.Refresh#
ContextTitle7=#OT.Unload#
ContextTitle8=#OT.More#

ContextAction=[!WriteKeyValue Variables Mode 0 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables Page AddSkins "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!ActivateConfig "#ROOTCONFIG#\Extras\Settings" "16x14.ini"][!Refresh "#ROOTCONFIG#\Extras\Settings" "16x14.ini"]
ContextAction2=[]
ContextAction3=#GeneralAction2#
ContextAction4=#GeneralAction4#
ContextAction5=[]
ContextAction6=#GeneralAction5#
ContextAction7=#GeneralAction6#
ContextAction8=#GeneralAction7#

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