/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class EKTravelEngineHypothesis, NSDate, NSString;

@interface CALNTriggeredEventNotificationData : NSObject

{
    NSString *_alarmID;
    _Bool _isOffsetFromTravelTimeStart;
    NSDate *_lastFireTimeOfAlertOffsetFromTravelTime;
    EKTravelEngineHypothesis *_hypothesis;
    _Bool _hasDisplayedLeaveByMessage;
    _Bool _hasDisplayedLeaveNowMessage;
    _Bool _hasDisplayedRunningLateMessage;
    NSDate *_lastTimeNotificationAdded;
}

@property (copy, nonatomic, readonly) NSString *alarmID;
@property (nonatomic, readonly) _Bool isOffsetFromTravelTimeStart;
@property (copy, nonatomic, readonly) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (copy, nonatomic, readonly) EKTravelEngineHypothesis *hypothesis;
@property (nonatomic, readonly) _Bool hasDisplayedLeaveByMessage;
@property (nonatomic, readonly) _Bool hasDisplayedLeaveNowMessage;
@property (nonatomic, readonly) _Bool hasDisplayedRunningLateMessage;
@property (copy, nonatomic, readonly) NSDate *lastTimeNotificationAdded;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithAlarmID:(id)arg1 isOffsetFromTravelTimeStart:(_Bool)arg2 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg3 hypothesis:(id)arg4 hasDisplayedLeaveByMessage:(_Bool)arg5 hasDisplayedLeaveNowMessage:(_Bool)arg6 hasDisplayedRunningLateMessage:(_Bool)arg7 lastTimeNotificationAdded:(id)arg8;
- (_Bool)isEqualToNotificationData:(id)arg1;

@end
