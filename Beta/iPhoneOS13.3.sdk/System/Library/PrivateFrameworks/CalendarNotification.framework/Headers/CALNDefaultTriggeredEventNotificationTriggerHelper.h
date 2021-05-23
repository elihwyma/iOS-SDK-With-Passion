/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CALNTravelAdvisoryAuthority, CalDateProvider;

@interface CALNDefaultTriggeredEventNotificationTriggerHelper : NSObject

{
    id <CALNTravelAdvisoryAuthority> _travelAdvisoryAuthority;
    id <CalDateProvider> _dateProvider;
}

@property (nonatomic, readonly) id <CALNTravelAdvisoryAuthority> travelAdvisoryAuthority;
@property (nonatomic, readonly) id <CalDateProvider> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithTravelAdvisoryAuthority:(id)arg1 dateProvider:(id)arg2;
- (_Bool)shouldTriggerForSourceClientIdentifier:(id)arg1 trigger:(unsigned long long)arg2 sourceNotificationInfo:(id)arg3 oldNotificationData:(id)arg4;
- (_Bool)_shouldTriggerForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (_Bool)_shouldTriggerForTimeToLeaveRefreshForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (_Bool)_eventWillEndBeforeUserArrivesForHypothesis:(id)arg1 eventEndDate:(id)arg2;
- (_Bool)_exceededMaximumTravelTimeThresholdForHypothesis:(id)arg1;
- (_Bool)_shouldTriggerForTravelAdviceReceivedGivenHasExistingNotificationDataForSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 sourceNotificationInfo:(id)arg3 oldNotificationData:(id)arg4 hasExistingTravelAdvice:(_Bool)arg5 satisfiesMinimumTravelTimeThreshold:(_Bool)arg6;
- (_Bool)_shouldTriggerForTimeToLeaveRefreshGivenImmediateDepartureTimelinessStatusForSourceClientIdentifier:(id)arg1 oldNotificationData:(id)arg2;

@end
