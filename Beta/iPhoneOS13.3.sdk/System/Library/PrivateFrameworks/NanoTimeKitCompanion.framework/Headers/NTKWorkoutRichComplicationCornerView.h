/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCornerBaseCircularView.h>

@class NTKWorkoutRichComplicationBaseCircularView;

@interface NTKWorkoutRichComplicationCornerView : NTKRichComplicationCornerBaseCircularView

{
    NTKWorkoutRichComplicationBaseCircularView *_richView;
}

- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_applyPausedUpdate;
- (id)_circularView;

@end
