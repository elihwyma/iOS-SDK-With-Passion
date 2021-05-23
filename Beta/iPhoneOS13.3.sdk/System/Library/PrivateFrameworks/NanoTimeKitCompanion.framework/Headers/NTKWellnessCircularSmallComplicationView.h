/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NSMutableArray, NTKRingsAndDotsView;

@interface NTKWellnessCircularSmallComplicationView : NTKCircularComplicationView

{
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (void)_updateColors;
- (double)_ringDiameter;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_setLayoutEmptyRings;
- (void)setSecondaryForegroundColor:(id)arg1;
- (double)_ringGapWidth;
- (void)_updateForTemplateChange;
- (void)setUsesMultiColor:(_Bool)arg1;
- (double)_ringStrokeWidth;
- (double)_overlapStrokeWidth;

@end
