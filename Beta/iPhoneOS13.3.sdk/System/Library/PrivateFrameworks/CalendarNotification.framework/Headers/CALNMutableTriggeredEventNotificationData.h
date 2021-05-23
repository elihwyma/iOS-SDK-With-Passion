/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <CalendarNotification/CALNTriggeredEventNotificationData.h>

@class EKTravelEngineHypothesis, NSDate, NSString;

@interface CALNMutableTriggeredEventNotificationData : CALNTriggeredEventNotificationData

@property (copy, nonatomic) NSString *alarmID;
@property (nonatomic) _Bool isOffsetFromTravelTimeStart;
@property (copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (copy, nonatomic) EKTravelEngineHypothesis *hypothesis;
@property (nonatomic) _Bool hasDisplayedLeaveByMessage;
@property (nonatomic) _Bool hasDisplayedLeaveNowMessage;
@property (nonatomic) _Bool hasDisplayedRunningLateMessage;
@property (copy, nonatomic) NSDate *lastTimeNotificationAdded;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
