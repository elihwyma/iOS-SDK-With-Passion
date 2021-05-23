/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKModularSmallRingTemplateView.h>

@interface NTKModularSmallBatteryTemplateView : NTKModularSmallRingTemplateView

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (id)forcedRingColor;
- (id)preferredRingColor;
- (void)applyColorScheme:(id)arg1;
- (void)_refreshRingImage;

@end
