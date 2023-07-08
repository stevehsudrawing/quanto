[Variables]
@include=#@#Settings_Panels\Panels\GlobalSettings_Global.inc

Grade=1
DisplayPage=2/4
HidePrvsB=0
HideNextB=0

ZM11.DarkMode=0
ZM11.Arched=1
ZM11.Light=1
ZM11.Border=1
ZM11.Alpha_Scale=0.8
ZM11.Design=0

ZM21.DarkMode=0
ZM21.Arched=0
ZM21.Light=0
ZM21.Border=0
ZM21.Alpha_Scale=0.8
ZM21.Design=1

ZM31.DarkMode=3
ZM31.Arched=0
ZM31.Light=0
ZM31.Border=0
ZM31.Alpha_Scale=1.0
ZM31.Design=1

ZM12.DarkMode=1
ZM12.Arched=1
ZM12.Light=1
ZM12.Border=1
ZM12.Alpha_Scale=0.8
ZM12.Design=0

ZM22.DarkMode=2
ZM22.Arched=0
ZM22.Light=0
ZM22.Border=0
ZM22.Alpha_Scale=0.6
ZM22.Design=1

ZM32.DarkMode=2
ZM32.Arched=0
ZM32.Light=0
ZM32.Border=0
ZM32.Alpha_Scale=0.0
ZM32.Design=1

CP11R=150
CP11G=200
CP11B=255

CP21R=64
CP21G=150
CP21B=220

CP31R=0
CP31G=120
CP31B=212

CP41R=90
CP41G=110
CP41B=200

CP12R=64
CP12G=180
CP12B=200

CP22R=50
CP22G=200
CP22B=180

CP32R=64
CP32G=200
CP32B=128

CP42R=150
CP42G=200
CP42B=64

CP13R=250
CP13G=230
CP13B=64

CP23R=250
CP23G=140
CP23B=72

CP33R=225
CP33G=100
CP33B=100

CP43R=240
CP43G=72
CP43B=90

CP14R=240
CP14G=64
CP14B=128

CP24R=190
CP24G=60
CP24B=140

CP34R=125
CP34G=115
CP34B=165

CP44R=135
CP44G=145
CP44B=135

T.DarkMode.0=#T.Bright#
T.DarkMode.1=#T.Dark#
T.DarkMode.2=#T.Dark_Enhanced#
T.DarkMode.3=#T.Colored#

Color_ReadyState.0_Action=[]
Color_ReadyState.1_Action=[!Update][!Delay 16][!WriteKeyValue Variables ThemeColor_General_R "[MPCR]" #@#Settings.inc][!WriteKeyValue Variables ThemeColor_General_G "[MPCG]" #@#Settings.inc][!WriteKeyValue Variables ThemeColor_General_B "[MPCB]" #@#Settings.inc][!WriteKeyValue Variables Color_ReadyState 0][!RefreshApp]

[Rainmeter]
OnRefreshAction=[#Color_ReadyState.[#Color_ReadyState]_Action]

[MPCR]
Measure=String
String=#Color_Ready#
RegExpSubstitute=1
Substitute=",.*,.*":""
DynamicVariables=1
[MPCG]
Measure=String
String=#Color_Ready#
RegExpSubstitute=1
Substitute="[MPCR],":"",",.*":""
DynamicVariables=1
[MPCB]
Measure=String
String=#Color_Ready#
RegExpSubstitute=1
Substitute=".*,.*,":""
DynamicVariables=1

[MSCR]
Measure=Plugin
Plugin=SysColor
ColorType=DWM_COLOR
DisplayType=Red
Hex=0
DynamicVariables=1
[MSCG]
Measure=Plugin
Plugin=SysColor
ColorType=DWM_COLOR
DisplayType=Green
Hex=0
DynamicVariables=1
[MSCB]
Measure=Plugin
Plugin=SysColor
ColorType=DWM_COLOR
DisplayType=Blue
Hex=0
DynamicVariables=1

[iP_ST1M]
Measure=String
String=#T.Theme_Set#
[iP_ST1]
Meter=String
MeterStyle=FontStyle_General|SST
Y=((#BeginY#+12)*#Scale#)
Text=#T.Default_1#
MeasureName=iP_ST1M
[iP_ST2]
Meter=String
MeterStyle=FontStyle_General|SST
Y=((#BeginY#+300)*#Scale#)
Text=#T.Color_Settings#
[iP_ST3]
Meter=String
MeterStyle=FontStyle_General|SST|NextB
Y=((#BeginY#+300+80*2+56)*#Scale#)
Text=#T.Font_Settings#

[iP_B00]
Meter=Shape
X=((#BeginX#)*#Scale#)
Y=((#BeginY#+32)*#Scale#)
Shape=Rectangle 0,0,(605*#Scale#),((108*2+4*4+4*#Scale#)*#Scale#),(2*#Scale#*#Arched#),(2*#Scale#*#Arched#) | #BorderStyle1#
Shape2=Rectangle 0,0,(605*#Scale#),((108*2+4*4+4*#Scale#)*#Scale#),(2*#Scale#*#Arched#),(2*#Scale#*#Arched#) | #BorderStyle2#
DynamicVariables=1

[SC_1]
Shape=Rectangle 0,0,(192*#Scale#),(108*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables DarkMode [#[#CURRENTSECTION].DarkMode] #@#Settings.inc][!WriteKeyValue Variables Arched [#[#CURRENTSECTION].Arched] #@#Settings.inc][!WriteKeyValue Variables Light [#[#CURRENTSECTION].Light] #@#Settings.inc][!WriteKeyValue Variables Border [#[#CURRENTSECTION].Border] #@#Settings.inc][!WriteKeyValue Variables Alpha_Scale [#[#CURRENTSECTION].Alpha_Scale] #@#Settings.inc][!WriteKeyValue Variables Design [#[#CURRENTSECTION].Design] #@#Settings.inc][!RefreshApp]

[SC_2]
Shape=Rectangle 0,0,((192+4)*#Scale#),((108+4)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_General#
DynamicVariables=1
Hidden=1

[HZM11]
Meter=Shape
X=([iP_B00:X]+7*#Scale#)
Y=([iP_B00:Y]+7*#Scale#)
MeterStyle=SC_2
[HZM21]
Meter=Shape
X=((192+4)*#Scale#)r
Y=0r
MeterStyle=SC_2
[HZM31]
Meter=Shape
X=((192+4)*#Scale#)r
Y=0r
MeterStyle=SC_2
[HZM12]
Meter=Shape
X=[HZM11:X]
Y=([HZM11:Y]+(108+4)*#Scale#)
MeterStyle=SC_2
[HZM22]
Meter=Shape
X=((192+4)*#Scale#)r
Y=0r
MeterStyle=SC_2
[HZM32]
Meter=Shape
X=((192+4)*#Scale#)r
Y=0r
MeterStyle=SC_2

[ZM11]
Meter=Shape
X=([iP_B00:X]+9*#Scale#)
Y=([iP_B00:Y]+9*#Scale#)
MeterStyle=SC_1
[ZM21]
Meter=Shape
X=(4*#Scale#)R
Y=0r
MeterStyle=SC_1
[ZM31]
Meter=Shape
X=(4*#Scale#)R
Y=0r
MeterStyle=SC_1
[ZM12]
Meter=Shape
X=[ZM11:X]
Y=([ZM11:Y]+112*#Scale#)
MeterStyle=SC_1
[ZM22]
Meter=Shape
X=(4*#Scale#)R
Y=0r
MeterStyle=SC_1
[ZM32]
Meter=Shape
X=(4*#Scale#)R
Y=0r
MeterStyle=SC_1

[SC_3]
W=(192*#Scale#)
H=(108*#Scale#)
DynamicVariables=1
Container=Z#CURRENTSECTION#

[M11]
Meter=Image
ImageName=#@#Bitmap\Default Theme 1
MeterStyle=SC_3
[M21]
Meter=Image
ImageName=#@#Bitmap\Default Theme 3
MeterStyle=SC_3
[M31]
Meter=Image
ImageName=#@#Bitmap\Default Theme 5
MeterStyle=SC_3
[M12]
Meter=Image
ImageName=#@#Bitmap\Default Theme 2
MeterStyle=SC_3
[M22]
Meter=Image
ImageName=#@#Bitmap\Default Theme 4
MeterStyle=SC_3
[M32]
Meter=Image
ImageName=#@#Bitmap\Default Theme 6
MeterStyle=SC_3

[ZB]
X=(#BeginX#*#Scale#)
Y=((#BeginY#+320)*#Scale#)
[IB]
X=((#BeginX#+24)*#Scale#)
Y=(((#BeginY#+320)+28)*#Scale#)
[TB]
X=((#BeginX#+68)*#Scale#)
Y=(((#BeginY#+320)+40)*#Scale#)
[SIBiP]
X=((#BeginX#+605-9-24)*#Scale#)
Y=(((#BeginY#+320)+40-9)*#Scale#)
[TIB]
X=((#BeginX#+605-200-20)*#Scale#)
Y=(((#BeginY#+320)+40-20)*#Scale#)
[TIIB]
X=((#BeginX#+605-20-18-8)*#Scale#)
Y=(((#BeginY#+320)+40-20+10)*#Scale#)
[TITB]
X=((#BeginX#+605-200-16+4)*#Scale#)
Y=(((#BeginY#+320)+40-20+19)*#Scale#)


[iP_BO1]
Meter=Shape
MeterStyle=SBW|ZB
[iP_BO2]
Meter=Shape
MeterStyle=SBW|Next
[iP_BO3]
Meter=Shape
MeterStyle=SBW|NextB
[iP_BO4]
Meter=Shape
MeterStyle=SBW|Next

[iP_SL1M]
Measure=String
String=#T.Font_Folder#
[iP_SL1]
Meter=String
MeterStyle=FontStyle_General|SSl
Y=([iP_BO4:YH]+16*#Scale#)
Text=#T.Open_1#
MeasureName=iP_SL1M
LeftMouseUpAction=["%SystemRoot%\Fonts"]

[iP_I01]
Meter=Image
MeterStyle=SIiP|IB
ImageName=#@#Bitmap\Color Mode
[iP_I02]
Meter=Image
MeterStyle=SIiP|Next
ImageName=#@#Bitmap\Color
[iP_I03]
Meter=Image
MeterStyle=SIiP|NextB
ImageName=#@#Bitmap\Font
[iP_I04]
Meter=Image
MeterStyle=SIiP|Next
ImageName=#@#Bitmap\Time

[iP_T01]
Meter=String
MeterStyle=MeterOptionTextStyleTO|WT|TB
Text=#T.Color_Mode#
[iP_T02]
Meter=String
MeterStyle=MeterOptionTextStyleTO|WT|Next
Text=#T.Theme_Color#
[iP_T03]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|NextB
Text=#T.Gerneral_Font##CRLF##S.Widgets_Settings.Gerneral_Font.1#
InlinePattern=#T.Gerneral_Font##CRLF#
InlinePattern2=#T.Gerneral_Font##CRLF#
W=(264*#Scale#)
[iP_T04]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
Text=#T.Clock_Font##CRLF##S.Widgets_Settings.Clock_Font.1#
InlinePattern=#T.Clock_Font##CRLF#
InlinePattern2=#T.Clock_Font##CRLF#
W=(209*#Scale#)

[iP_OI.01]
Meter=Shape
MeterStyle=STI|TIB|SOIA_CM
[iP_OI.02]
Meter=Shape
MeterStyle=STI|Next
Hidden=1
[iP_OI.03]
Meter=Shape
MeterStyle=STI|NextB|SOIA_TI
[iP_OI.04]
Meter=Shape
MeterStyle=STI|Next|SOIA_TI

[iP_OIS.03.B01]
Meter=Shape
X=([iP_OI.03:X]-(40+4)*#Scale#)
Y=[iP_OI.03:Y]
MeterStyle=STISq
LeftMouseUpAction=[!ShowMeterGroup GiP_OIS.03][!Redraw]
[HiP_OIS.03.B01]
Meter=Shape
MeterStyle=STISqH
[HiP_OIS.03.B02]
Meter=Image
MeterStyle=STISqI
ImageName=#@#Bitmap\Zoom
ToolTipText=#T.Preview#


[iP_OIS.04.00Z]
Meter=Shape
X=((#BeginX#+605-100-20-204)*#Scale#)
Y=((#BeginY#+40-20+623)*#Scale#)
Shape=Rectangle (-2*#Scale#),(-2*#Scale#),((100+200+4+2*2)*#Scale#),((40+2*2)*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeterGroup GiP_OIS.04][!Update][!Redraw]
MouseLeaveAction=[!HideMeterGroup GiP_OIS.04][!Update][!Redraw]


[iP_OIS.04.00]
Meter=Shape
X=((#BeginX#+605-100-20-204)*#Scale#)
Y=((#BeginY#+40-20+623)*#Scale#)
Shape=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((100-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle (60*#Scale#),(1*#Scale#),(1*#Scale#),(38*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
DynamicVariables=1
[iP_OIS.04.01Z]
Meter=Shape
X=([iP_OIS.04.00:X]+60*#Scale#)
Y=[iP_OIS.04.00:Y]
Shape=Rectangle 0,0,(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue "Variables" "FontWeight_Clock" "(Clamp(([#FontWeight_Clock]+100),0,1000))" "#@#Settings.inc"][!RefreshApp][!ShowMeterGroup GiP_OIS.04][!Update][!Redraw]
[iP_OIS.04.02Z]
Meter=Shape
X=([iP_OIS.04.00:X]+60*#Scale#)
Y=([iP_OIS.04.00:Y]+20*#Scale#)
Shape=Rectangle 0,0,(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue "Variables" "FontWeight_Clock" "(Clamp(([#FontWeight_Clock]-100),0,1000))" "#@#Settings.inc"][!RefreshApp][!ShowMeterGroup GiP_OIS.04][!Update][!Redraw]
[HiP_OIS.04.01Z]
Meter=Shape
X=[iP_OIS.04.00:X]
Y=[iP_OIS.04.00:Y]
Shape=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
Shape2=Rectangle (60*#Scale#),0,(40*#Scale#),(20*#Scale#)
Shape3=Combine Shape | Intersect Shape2
DynamicVariables=1
Hidden=1
[HiP_OIS.04.02Z]
Meter=Shape
X=[iP_OIS.04.00:X]
Y=[iP_OIS.04.00:Y]
Shape=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
Shape2=Rectangle (60*#Scale#),(20*#Scale#),(40*#Scale#),(20*#Scale#)
Shape3=Combine Shape | Intersect Shape2
DynamicVariables=1
Hidden=1
[iP_OIS.04.01I]
Meter=Image
ImageName=#@#Bitmap\Arrow Up
X=([iP_OIS.04.01Z:X]+(20-8)*#Scale#)
Y=([iP_OIS.04.01Z:Y]+(10-8)*#Scale#)
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1
[iP_OIS.04.02I]
Meter=Image
ImageName=#@#Bitmap\Arrow Down
X=([iP_OIS.04.02Z:X]+(20-8)*#Scale#)
Y=([iP_OIS.04.02Z:Y]+(10-8)*#Scale#)
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1
[iP_OIS.04.03Z]
Meter=Shape
X=[iP_OIS.04.00:X]
Y=[iP_OIS.04.00:Y]
Shape=Rectangle 0,0,(60*#Scale#),(40*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!CommandMeasure TI#CURRENTSECTION# "ExecuteBatch 1" ][!ShowMeter C#CURRENTSECTION#][!Redraw]
[HiP_OIS.04.03Z]
Meter=Shape
X=[iP_OIS.04.00:X]
Y=[iP_OIS.04.00:Y]
Shape=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
Shape2=Rectangle 0,0,(60*#Scale#),(40*#Scale#)
Shape3=Combine Shape | Intersect Shape2
DynamicVariables=1
Hidden=1
[iP_OIS.04.03I]
Meter=String
MeterStyle=FontStyle_General
X=([iP_OIS.04.00:X]+8*#Scale#)
Y=([iP_OIS.04.00:Y]+20*#Scale#)
StringAlign=LeftCenter
Text=#FontWeight_Clock#
DynamicVariables=1
[CiP_OIS.04.03Z]
Meter=Shape
X=[iP_OIS.04.00:X]
Y=[iP_OIS.04.00:Y]
Shape=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((100-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_General#
Shape6=Rectangle 0,(-2*#Scale#),(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#)
Shape7=Combine Shape5 | Exclude Shape6
DynamicVariables=1
Hidden=1
[TIiP_OIS.04.03Z]
Measure=Plugin
Plugin=InputText
X=([iP_OIS.04.00:X]+4*#Scale#)
Y=([iP_OIS.04.00:Y]+10*#Scale#)
W=((100-8)*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#FontWeight_Clock]
Command1=[!WriteKeyValue Variables "FontWeight_Clock" "(Clamp($UserInput$,0,1000))" "#@#Settings.inc"][!RefreshApp][!ShowMeterGroup GiP_OIS.04][!Update][!Redraw]
OnDismissAction=[!HideMeter CiP_OIS.04.03Z][!Redraw]
DynamicVariables=1

[HiP_OI.01]
Meter=Shape
MeterStyle=STIH|TIB
[HiP_OI.02]
Meter=Shape
MeterStyle=STIH|Next
Hidden=1
[HiP_OI.03]
Meter=Shape
MeterStyle=STIH|NextB
[HiP_OI.04]
Meter=Shape
MeterStyle=STIH|Next

[iP_OI.I01]
Meter=Image
MeterStyle=STIIA|TIIB
[iP_OI.I02]
Meter=Image
MeterStyle=STIIA|Next
Hidden=1
[iP_OI.I03]
Meter=Image
MeterStyle=STIIE|NextB
[iP_OI.I04]
Meter=Image
MeterStyle=STIIE|Next

[iP_OI.T01]
Meter=String
Text=[#T.DarkMode.[#DarkMode]]
MeterStyle=STIT|TITB
[iP_OI.T02]
Meter=String
Text=
MeterStyle=STIT|Next
[iP_OI.T03]
Meter=String
Text=[#FontFace_General]
MeterStyle=STIT|NextB
[iP_OI.T04]
Meter=String
Text=[#FontFace_Clock]
MeterStyle=STIT|Next

[iP_OIS.02.00]
Meter=Shape
X=([iP_BO2:XW]-(40+21)*#Scale#)
Y=([iP_BO2:Y]+20*#Scale#)
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_General_R#,#ThemeColor_General_G#,#ThemeColor_General_B#
Shape2=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color 255,255,255,64
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((40-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[iP_OIS.02.01]
Meter=Shape
MeterStyle=STISq
X=([iP_BO2:XW]-(226-3)*#Scale#)
Y=([iP_BO2:Y]+20*#Scale#)
Shape=Rectangle 0,0,(114*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(114*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((114-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
LeftMouseUpAction=[!ShowMeterGroup G#CURRENTSECTION#][!Update][!Redraw]
[HiP_OIS.02.01]
Meter=Shape
MeterStyle=STISqH
Shape=Rectangle 0,0,(114*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
[iP_OIS.02.01T]
Meter=String
Text=#T.Select#...
MeterStyle=FontStyle_General
X=([iP_OIS.02.01:X]+[iP_OIS.02.01:W]/2)
Y=([iP_OIS.02.01:Y]+[iP_OIS.02.01:H]/2)
StringAlign=CenterCenter
DynamicVariables=1

[iP_OIS.02.02]
Meter=Shape
X=([iP_OIS.02.01:XW]+4*#Scale#)
Y=([iP_OIS.02.01:Y])
MeterStyle=STISq
LeftMouseUpAction=[!WriteKeyValue Variables ThemeColor_General_R "[MSCR]" #@#Settings.inc][!WriteKeyValue Variables ThemeColor_General_G "[MSCG]" #@#Settings.inc][!WriteKeyValue Variables ThemeColor_General_B "[MSCB]" #@#Settings.inc][!RefreshApp]
[HiP_OIS.02.02]
Meter=Shape
MeterStyle=STISqH
[iP_OIS.02.01I]
Meter=Image
MeterStyle=STIIA
X=(10*#Scale#)r
Y=(10*#Scale#)r
ImageName=#@#Bitmap\Pick
ToolTipText=#S.Widgets_Settings.36#

[GiP_OI.01]
Group=GiP_OI.01
Hidden=1

[iP_OIS.01.00]
Meter=Shape
X=[iP_OI.01:X]
Y=([iP_OI.01:Y]-40*#Scale#*[#DarkMode])
Shape=Rectangle 0,0,(200*#Scale#),(40*4*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(200*#Scale#),(40*4*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(198*#Scale#),((40*4-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MeterStyle=GiP_OI.01
MouseLeaveAction=[!HideMeterGroup GiP_OI.01][!Redraw]

[iP_OIS.01.01]
Meter=String
Text=#T.Bright#
MeterStyle=SCMT|CMTB|GiP_OI.01
LeftMouseUpAction=[!WriteKeyValue Variables DarkMode 0 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.01.02]
Meter=String
Text=#T.Dark#
MeterStyle=SCMT|NextT|GiP_OI.01
LeftMouseUpAction=[!WriteKeyValue Variables DarkMode 1 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.01.03]
Meter=String
Text=#T.Dark_Enhanced#
MeterStyle=SCMT|NextT|GiP_OI.01
LeftMouseUpAction=[!WriteKeyValue Variables DarkMode 2 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.01.04]
Meter=String
Text=#T.Colored#
MeterStyle=SCMT|NextT|GiP_OI.01
LeftMouseUpAction=[!WriteKeyValue Variables DarkMode 3 "#@#Settings.inc"][!RefreshApp]

[iP_OIS.01.M]
Meter=Shape
X=[iP_OI.01:X]
Y=[iP_OI.01:Y]
MeterStyle=SCMM|GiP_OI.01



[TIiP_OI.03]
Measure=Plugin
Plugin=InputText
X=([iP_OI.03:X]+4*#Scale#)
Y=([iP_OI.03:Y]+10*#Scale#)
W=((200-8)*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#FontFace_General]
Command1=[!WriteKeyValue Variables "FontFace_General" "$UserInput$" "#@#Settings.inc"][!RefreshApp]
OnDismissAction=[!HideMeter CiP_OI.03][!Redraw]
DynamicVariables=1

[TIiP_OI.04]
Measure=Plugin
Plugin=InputText
X=([iP_OI.04:X]+4*#Scale#)
Y=([iP_OI.04:Y]+10*#Scale#)
W=((200-8)*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#FontFace_Clock]
Command1=[!WriteKeyValue Variables "FontFace_Clock" "$UserInput$" "#@#Settings.inc"][!RefreshApp]
OnDismissAction=[!HideMeter CiP_OI.04][!Redraw]
DynamicVariables=1

[GiP_OIS.02.01]
Group=GiP_OIS.02.01
Hidden=1

[iP_OIS.02.01.00]
Meter=Shape
MeterStyle=GiP_OIS.02.01
X=([iP_OIS.02.01:X]+[iP_OIS.02.01:W]/2-((40+4)*4+4*2-2)/2*#Scale#)
Y=([iP_OIS.02.01:Y]+[iP_OIS.02.01:H]/2-((40+4)*4+4*2-2)/2*#Scale#)
Shape=Rectangle 0,0,(((40+4)*4+4*2)*#Scale#),(((40+4)*5+4*2)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(((40+4)*4+4*2)*#Scale#),(((40+4)*5+4*2)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(((40+4)*4+4*2-2)*#Scale#),(((40+4)*5+4*2-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(((40+4)*4+4*2)*#Scale#),(((40+4)*5+4*2)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_Bar#
Shape6=Rectangle 0,(((40+4)*4+4*2)*#Scale#),(((40+4)*4+4*2)*#Scale#),(44*#Scale#)
Shape7=Combine Shape5 | Intersect Shape6
Shape8=Rectangle 0,(((40+4)*4+4*2)*#Scale#),(((40+4)*4+4*2)*#Scale#),(1*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder# 
DynamicVariables=1
MouseLeaveAction=[!HideMeterGroup GiP_OIS.02.01][!Redraw]

[CP]
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color [#[#CURRENTSECTION]R],[#[#CURRENTSECTION]G],[#[#CURRENTSECTION]B]
Shape2=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color 255,255,255,64
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((40-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables ThemeColor_General_R "[#[#CURRENTSECTION]R]" #@#Settings.inc][!WriteKeyValue Variables ThemeColor_General_G "[#[#CURRENTSECTION]G]" #@#Settings.inc][!WriteKeyValue Variables ThemeColor_General_B "[#[#CURRENTSECTION]B]" #@#Settings.inc][!RefreshApp]
[CPH]
Shape=Rectangle (1*#Scale#),(1*#Scale#),((40-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth (2*#Scale#) | Stroke Color #FontColor_General# | Fill Color 0,0,0,0
DynamicVariables=1
Hidden=1
[CPXN]
X=(44*#Scale#)r
Y=0r
[CPYN]
X=[CP11:X]
Y=(44*#Scale#)r

[CP11]
Meter=Shape
X=([iP_OIS.02.01.00:X]+5*#Scale#)
Y=([iP_OIS.02.01.00:Y]+5*#Scale#)
MeterStyle=GiP_OIS.02.01|CP
[CP21]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPXN
[CP31]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPXN
[CP41]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPXN
[CP12]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPYN
[CP22]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPXN
[CP32]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPXN
[CP42]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPXN
[CP13]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPYN
[CP23]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPXN
[CP33]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPXN
[CP43]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPXN
[CP14]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPYN
[CP24]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPXN
[CP34]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPXN
[CP44]
Meter=Shape
MeterStyle=GiP_OIS.02.01|CP|CPXN

[HCP11]
Meter=Shape
X=([iP_OIS.02.01.00:X]+5*#Scale#)
Y=([iP_OIS.02.01.00:Y]+5*#Scale#)
MeterStyle=CPH
[HCP21]
Meter=Shape
MeterStyle=CPH|CPXN
[HCP31]
Meter=Shape
MeterStyle=CPH|CPXN
[HCP41]
Meter=Shape
MeterStyle=CPH|CPXN
[HCP12]
Meter=Shape
MeterStyle=CPH|CPYN
[HCP22]
Meter=Shape
MeterStyle=CPH|CPXN
[HCP32]
Meter=Shape
MeterStyle=CPH|CPXN
[HCP42]
Meter=Shape
MeterStyle=CPH|CPXN
[HCP13]
Meter=Shape
MeterStyle=CPH|CPYN
[HCP23]
Meter=Shape
MeterStyle=CPH|CPXN
[HCP33]
Meter=Shape
MeterStyle=CPH|CPXN
[HCP43]
Meter=Shape
MeterStyle=CPH|CPXN
[HCP14]
Meter=Shape
MeterStyle=CPH|CPYN
[HCP24]
Meter=Shape
MeterStyle=CPH|CPXN
[HCP34]
Meter=Shape
MeterStyle=CPH|CPXN
[HCP44]
Meter=Shape
MeterStyle=CPH|CPXN

[CPCT]
Meter=String
Text=#T.Customize#*...
ToolTipText=#S.Widgets_Settings.6#
MeterStyle=FontStyle_General|GiP_OIS.02.01
X=([iP_OIS.02.01.00:X]+[iP_OIS.02.01.00:W]/2)
Y=([iP_OIS.02.01.00:YH]-22*#Scale#)
StringAlign=CenterCenter
FontColor=#FontColor_General#,128
InlinePattern=.*
InlineSetting=None
MouseActionCursor=1
MouseActionCursorName=HAND
MouseOverAction=[!SetOption #CURRENTSECTION# InlineSetting "Underline"][!Update][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# InlineSetting "None"][!Update][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables Color_Ready "#ThemeColor_General_R#,#ThemeColor_General_G#,#ThemeColor_General_B#"][!Delay 16]["#@#RainRGB4.exe" "VarName=Color_Ready" "FileName=#CURRENTPATH##CURRENTFILE#" "RefreshConfig=#CURRENTCONFIG#"][!WriteKeyValue Variables Color_ReadyState 1]
; Thanks for JSMorley

[CiP_OI.01]
Meter=Shape
MeterStyle=STIC|TIB
[CiP_OI.02]
Meter=Shape
MeterStyle=STIC|Next
[CiP_OI.03]
Meter=Shape
MeterStyle=STIC|NextB
[CiP_OI.04]
Meter=Shape
MeterStyle=STIC|Next

[GiP_OIS.03]
Group=GiP_OIS.03
Hidden=1
[iP_OIS.03.00]
Meter=Shape
MeterStyle=GiP_OIS.03
X=([iP_OIS.03.B01:X]+[iP_OIS.03.B01:W]/2-256/2*#Scale#)
Y=([iP_OIS.03.B01:Y]+[iP_OIS.03.B01:H]/2-256/2*#Scale#)
Shape=Rectangle 0,0,(256*#Scale#),(256*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth (2*#Scale#) | Stroke Color #ThemeColor_BarBorder# | Fill Color 0,0,0,0
Shape2=Rectangle 0,0,(256*#Scale#),(256*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape3=Rectangle 0,0,(256*#Scale#),(256*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Rectangle (1*#Scale#),(1*#Scale#),((256-2)*#Scale#),((256-2)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#)
Shape5=Combine Shape3 | Exclude Shape4
DynamicVariables=1
MouseLeaveAction=[!HideMeterGroup GiP_OIS.03][!Redraw]
[iP_OIS.03.01]
Meter=String
MeterStyle=GiP_OIS.03|FontStyle_General
X=(16*#Scale#)r
Y=(16*#Scale#)r
W=((256-32)*#Scale#)
H=(40*#Scale#)
ClipString=1
Text=#LoremIpsumTitle#
FontSize=(24*#Scale#)
FontWeight=400
DynamicVariables=1
[iP_OIS.03.02]
Meter=String
MeterStyle=GiP_OIS.03|FontStyle_General
X=0r
Y=(8*#Scale#)R
W=((256-32)*#Scale#)
H=((256-32-8-40)*#Scale#)
ClipString=2
Text=#LoremIpsum#
FontWeight=500
DynamicVariables=1

[GiP_OIS.04]
Group=GiP_OIS.04
Hidden=1
[iP_OIS.04.00.00]
Meter=Shape
MeterStyle=GiP_OIS.04
X=([iP_OI.04:XW]-304*#Scale#)
Y=([iP_OI.04:Y]-(120+4)*#Scale#)
Shape=Rectangle 0,0,(304*#Scale#),(120*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth (2*#Scale#) | Stroke Color #ThemeColor_BarBorder# | Fill Color 0,0,0,0
Shape2=Rectangle 0,0,(304*#Scale#),(120*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape3=Rectangle 0,0,(304*#Scale#),(120*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Rectangle (1*#Scale#),(1*#Scale#),((304-2)*#Scale#),((120-2)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#)
Shape5=Combine Shape3 | Exclude Shape4
DynamicVariables=1
;MouseLeaveAction=[!HideMeterGroup GiP_OIS.04][!Redraw]
[iP_OIS.04.00.01]
Meter=String
MeterStyle=GiP_OIS.04|FontStyle_General
X=([iP_OIS.04.00.00:X]+[iP_OIS.04.00.00:W]/2)
Y=(48*#Scale#)r
Text=[MeasureTime]
FontSize=(48*#Scale#)
FontWeight=#FontWeight_Clock#
StringAlign=CenterCenter
InlinePattern=" #T.AM#"
InlinePattern2=" #T.PM#"
InlinePattern3=" #T.AM#"
InlinePattern4=" #T.PM#"
InlinePattern5=" #T.AM#"
InlinePattern6=" #T.PM#"
InlineSetting=Size | (12*#Scale#)
InlineSetting2=Size | (12*#Scale#)
InlineSetting3=Face | #FontFace_General#
InlineSetting4=Face | #FontFace_General#
InlineSetting5=Weight | 500
InlineSetting6=Weight | 500
[iP_OIS.04.00.02]
Meter=String
MeterStyle=GiP_OIS.04|FontStyle_General
X=0r
Y=(48*#Scale#)r
Text=[MeasureTimeAMPM]
StringAlign=CenterCenter

@include2=#@#Settings_Panels\Panels\GlobalSettings_Global_Extras.inc