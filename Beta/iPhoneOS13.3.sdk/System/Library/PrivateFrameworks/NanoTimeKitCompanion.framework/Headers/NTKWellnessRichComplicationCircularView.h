/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NSMutableArray, NTKRingsAndDotsView;

@interface NTKWellnessRichComplicationCircularView : NTKRichComplicationCircularBaseView

{
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
    struct CGRect _prevLayoutBounds;
}

- (id)init;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_updateRingWithTemplate:(id)arg1;
- (void)_showEmptyViews;

@end
