/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKWorkoutRichComplicationBaseCircularView;

@interface NTKWorkoutRichComplicationCircularView : NTKRichComplicationCircularBaseView

{
    NTKWorkoutRichComplicationBaseCircularView *_richView;
}

- (id)init;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_applyPausedUpdate;

@end
