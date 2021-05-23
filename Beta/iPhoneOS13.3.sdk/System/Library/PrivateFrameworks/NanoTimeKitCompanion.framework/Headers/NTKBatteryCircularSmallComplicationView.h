/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCircularSmallRingTextComplicationView.h>

@class NTKColoringLabel;

@interface NTKBatteryCircularSmallComplicationView : NTKCircularSmallRingTextComplicationView

{
    NTKColoringLabel *_label;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;

- (void)_updateForTemplateChange;

@end
