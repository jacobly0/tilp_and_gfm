#import <Cocoa/Cocoa.h>

@interface PrefsController : NSObject
{
    IBOutlet id BoxesController;
    IBOutlet id calcType73;
    IBOutlet id calcType82;
    IBOutlet id calcType83;
    IBOutlet id calcType83p;
    IBOutlet id calcType85;
    IBOutlet id calcType86;
    IBOutlet id calcType89;
    IBOutlet id calcType92;
    IBOutlet id calcType92p;
    IBOutlet id calcTypeProbe;
    IBOutlet id linkCableTIGLUSB;
    IBOutlet id linkCableTPC;
    IBOutlet id linkCableVTE;
    IBOutlet id linkCableVTI;
    IBOutlet id linkTimeoutField;
    IBOutlet id linkTimeoutValueStepper;
    IBOutlet id MenuController;
    IBOutlet id orderDecreasing;
    IBOutlet id orderIncreasing;
    IBOutlet id pathModeFull;
    IBOutlet id pathModeLocal;
    IBOutlet id prefsWindow;
    IBOutlet id screenFormatPCX;
    IBOutlet id screenFormatTIFF;
    IBOutlet id screenFormatXPM;
    IBOutlet id screenModeClipped;
    IBOutlet id screenModeFull;
    IBOutlet id sortByInfo;
    IBOutlet id sortByName;
    IBOutlet id sortBySize;
    IBOutlet id sortByType;
    IBOutlet id TilpController;
    IBOutlet id ToolbarController;
    IBOutlet id transferModeManual;
    IBOutlet id transferModeSilent;
}
- (IBAction)prefsAdvanced:(id)sender;
- (IBAction)prefsCalc:(id)sender;
- (IBAction)prefsClose:(id)sender;
- (IBAction)prefsGeneral:(id)sender;
- (IBAction)prefsHardware:(id)sender;
- (IBAction)prefsScreendump:(id)sender;
@end