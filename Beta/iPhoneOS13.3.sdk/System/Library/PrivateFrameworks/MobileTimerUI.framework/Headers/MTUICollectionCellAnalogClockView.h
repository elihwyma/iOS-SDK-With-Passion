/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <MobileTimerUI/MTUIAnalogClockView.h>

@interface MTUICollectionCellAnalogClockView : MTUIAnalogClockView

+ (long long)style;
+ (double)secondHandMainLength;
+ (double)secondHandOverhangLength;
+ (double)faceRadius;
+ (double)hourHandWidth;
+ (double)secondHandWidth;
+ (double)hourHandLength;
+ (double)minuteHandWidth;
+ (double)minuteHandLength;
+ (_Bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(_Bool)arg2;
+ (id)makeClockFaceForDaytime:(_Bool)arg1;
+ (double)overHourHandDotSize;
+ (double)overSecondHandDotSize;
+ (struct CGPoint)handRotationalCenterForHand:(long long)arg1;

- (double)updateInterval;
- (double)coarseUpdateInterval;

@end
