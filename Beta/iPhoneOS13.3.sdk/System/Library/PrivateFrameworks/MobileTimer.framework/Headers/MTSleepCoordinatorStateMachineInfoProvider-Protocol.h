/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/Swift-Protocol.h>

@class MTAlarm, NSDate;

@protocol MTSleepCoordinatorStateMachineInfoProvider <Swift>

@property (nonatomic, readonly) MTAlarm *sleepAlarm;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, readonly) unsigned long long sleepTimeOutMinutes;

@end
