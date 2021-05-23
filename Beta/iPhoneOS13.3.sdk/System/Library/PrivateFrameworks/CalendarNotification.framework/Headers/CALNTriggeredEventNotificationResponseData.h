/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class EKTravelEngineHypothesis, NSDate;

@interface CALNTriggeredEventNotificationResponseData : NSObject

{
    EKTravelEngineHypothesis *_hypothesis;
    NSDate *_lastFireTimeOfAlertOffsetFromTravelTime;
}

@property (nonatomic, readonly) EKTravelEngineHypothesis *hypothesis;
@property (copy, nonatomic, readonly) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHypothesis:(id)arg1 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg2;

@end
