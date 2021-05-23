/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NSMutableArray, NTKRingsAndDotsView;

@interface NTKModularSmallActivityTemplateView : NTKModularTemplateView

{
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)_layoutContentView;
- (void)setIsXL:(_Bool)arg1;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (void)applyColorScheme:(id)arg1;
- (void)_configureContentSubviews;
- (void)_setLayoutEmptyRings;

@end
