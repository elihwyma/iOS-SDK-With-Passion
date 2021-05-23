/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUtilityCircularComplicationView.h>

@class NSMutableArray, NTKRingsAndDotsView;

@interface NTKCircularWellnessUtilityComplicationView : NTKUtilityCircularComplicationView

{
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
    _Bool _animationsAllowed;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)_layoutContentView;
- (id)_ringColor;
- (void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;
- (void)_setLayoutEmptyRings;
- (void)_updateForTemplateChange;
- (void)_applyForegroundAlpha;
- (void)_updateRingColors;

@end
