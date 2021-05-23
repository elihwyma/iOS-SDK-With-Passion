/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

@interface NTKBigNumeralsAnalogTimeView : NTKAnalogHandsView

- (void)layoutSubviews;
- (id)initForDevice:(id)arg1;
- (void)applyHourMinuteHandsTransitionFraction:(double)arg1 fromStrokeColor:(id)arg2 fromFillColor:(id)arg3 toStrokeColor:(id)arg4 toFillColor:(id)arg5;
- (void)applySecondHandTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (double)_minuteHandDotDiameter;
- (double)_largeHandAlpha;

@end
