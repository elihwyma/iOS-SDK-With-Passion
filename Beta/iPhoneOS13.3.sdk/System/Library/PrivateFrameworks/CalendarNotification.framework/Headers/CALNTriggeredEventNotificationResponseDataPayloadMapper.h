/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@interface CALNTriggeredEventNotificationResponseDataPayloadMapper : NSObject

+ (void)_setHypothesisDataFromNotificationData:(id)arg1 inPayload:(id)arg2;
+ (void)_setLastFireTimeOfAlertOffsetFromTravelTimeFromNotificationData:(id)arg1 inPayload:(id)arg2;
+ (id)_hypothesisFromPayload:(id)arg1;
+ (id)_lastFireTimeOfAlertOffsetFromTravelTimeFromPayload:(id)arg1;
+ (id)_hypothesisDataForNotificationData:(id)arg1;
+ (id)payloadForNotificationResponseData:(id)arg1;
+ (id)notificationResponseDataForPayload:(id)arg1;

@end
