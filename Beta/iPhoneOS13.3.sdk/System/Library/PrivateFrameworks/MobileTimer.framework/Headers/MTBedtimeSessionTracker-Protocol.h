/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/Swift-Protocol.h>

@protocol MTBedtimeSessionTrackerDelegate;

@protocol MTBedtimeSessionTracker <Swift>

@property (weak, nonatomic) id <MTBedtimeSessionTrackerDelegate> bedtimeSessionTrackerDelegate;
@property (nonatomic, readonly) _Bool trackingEnabled;

+ (unsigned short)_trackingEnabledForSleepAlarm: /* Error: Ran out of types for this method. */;

- (unsigned short)startSession;
- (unsigned short)endSessionWithDate:reason: /* Error: Ran out of types for this method. */;
- (unsigned short)sessionClass;

@end
