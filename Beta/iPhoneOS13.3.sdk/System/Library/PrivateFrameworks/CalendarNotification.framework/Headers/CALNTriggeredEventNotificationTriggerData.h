/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class EKTravelEngineHypothesis, NSString;

@interface CALNTriggeredEventNotificationTriggerData : NSObject

{
    _Bool _isOffsetFromTravelTimeStart;
    unsigned long long _trigger;
    NSString *_alarmID;
    EKTravelEngineHypothesis *_hypothesis;
}

@property (nonatomic, readonly) unsigned long long trigger;
@property (copy, nonatomic, readonly) NSString *alarmID;
@property (nonatomic, readonly) _Bool isOffsetFromTravelTimeStart;
@property (nonatomic, readonly) EKTravelEngineHypothesis *hypothesis;

- (id)description;
- (id)initWithTrigger:(unsigned long long)arg1 alarmID:(id)arg2 isOffsetFromTravelTimeStart:(_Bool)arg3 hypothesis:(id)arg4;

@end
