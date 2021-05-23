/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

@protocol MTClock

@property (nonatomic, readonly) long long runMode;

- (unsigned short)stop;
- (unsigned short)start;
- (unsigned short)updateTime;

@end
