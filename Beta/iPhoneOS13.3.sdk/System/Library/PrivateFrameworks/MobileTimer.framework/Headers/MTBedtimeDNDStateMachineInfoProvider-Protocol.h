/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/Swift-Protocol.h>

@class MTAlarm, NSDate;

@protocol MTBedtimeDNDStateMachineInfoProvider <Swift>

@property (nonatomic, readonly) MTAlarm *sleepAlarm;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, readonly) NSDate *keepOffUntilDate;
@property (nonatomic, readonly) _Bool inUserDefinedSleepWindow;

- (unsigned short)isBedtimeDNDEnabled: /* Error: Ran out of types for this method. */;

@end
