/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CALNTravelAdvisoryAuthority, CalDateProvider;

@interface CALNDefaultTriggeredEventNotificationTransitionProvider : NSObject

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

- (unsigned long long)_transitionForAlarmFiredForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (unsigned long long)_transitionForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (unsigned long long)_transitionForTimeToLeaveRefreshTimerFiredForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (_Bool)_shouldModifyForAlarmFiredForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (unsigned long long)_transitionForAlarmFiredForNewAlarmID:(id)arg1 optionalOldAlarmID:(id)arg2;
- (unsigned long long)_transitionForAlarmFiredForNewAlarmID:(id)arg1 oldAlarmID:(id)arg2;
- (_Bool)_shouldRemoveNotificationForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (_Bool)_shouldAddNotificationForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (_Bool)_timeToLeaveStateAlreadyDisplayedBasedOnSourceNotificationInfo:(id)arg1 oldNotificationData:(id)arg2;
- (unsigned long long)transitionForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 trigger:(unsigned long long)arg4;
- (id)initWithTravelAdvisoryAuthority:(id)arg1 dateProvider:(id)arg2;

@end
