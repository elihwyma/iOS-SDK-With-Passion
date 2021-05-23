/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNCalendarResourceChangedNotificationSource, CALNEventCanceledNotificationSource, CALNEventInvitationNotificationSource, CALNEventInvitationResponseNotificationSource, CALNSharedCalendarInvitationNotificationSource, CALNSharedCalendarInvitationResponseNotificationSource, CALNTriggeredEventNotificationSource, NSArray, NSString;

@protocol CALNNotificationManager, EKEventStoreProvider;

@interface CALNUITriggersNotificationSource : NSObject

{
    id <CALNNotificationManager> _notificationManager;
    id <EKEventStoreProvider> _eventStoreProvider;
    CALNTriggeredEventNotificationSource *_triggeredEventNotificationSource;
    CALNEventInvitationNotificationSource *_eventInvitationNotificationSource;
    CALNEventInvitationResponseNotificationSource *_eventInvitationResponseNotificationSource;
    CALNEventCanceledNotificationSource *_eventCanceledNotificationSource;
    CALNSharedCalendarInvitationNotificationSource *_sharedCalendarInvitationNotificationSource;
    CALNSharedCalendarInvitationResponseNotificationSource *_sharedCalendarInvitationResponseNotificationSource;
    CALNCalendarResourceChangedNotificationSource *_calendarResourceChangedNotificationSource;
}

@property (nonatomic, readonly) id <CALNNotificationManager> notificationManager;
@property (nonatomic, readonly) id <EKEventStoreProvider> eventStoreProvider;
@property (nonatomic, readonly) CALNTriggeredEventNotificationSource *triggeredEventNotificationSource;
@property (nonatomic, readonly) CALNEventInvitationNotificationSource *eventInvitationNotificationSource;
@property (nonatomic, readonly) CALNEventInvitationResponseNotificationSource *eventInvitationResponseNotificationSource;
@property (nonatomic, readonly) CALNEventCanceledNotificationSource *eventCanceledNotificationSource;
@property (nonatomic, readonly) CALNSharedCalendarInvitationNotificationSource *sharedCalendarInvitationNotificationSource;
@property (nonatomic, readonly) CALNSharedCalendarInvitationResponseNotificationSource *sharedCalendarInvitationResponseNotificationSource;
@property (nonatomic, readonly) CALNCalendarResourceChangedNotificationSource *calendarResourceChangedNotificationSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) NSArray *categories;

+ (id)_launchURL;

- (void)didReceiveResponse:(id)arg1;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (void)refreshNotifications:(id)arg1;
- (id)_fakeInvitationNotificationInfoWithDictionary:(id)arg1 type:(long long)arg2 sourceClientIdentifier:(id)arg3;
- (id)_fakeEventCanceledNotificationInfoWithDictionary:(id)arg1;
- (id)_fakeAttendeeRepliedNotificationInfoWithDictionary:(id)arg1;
- (id)_fakeSharedCalendarInvitationNotificationInfoWithDictionary:(id)arg1;
- (id)_fakeSharedCalendarInviteReplyNotificationInfoWithDictionary:(id)arg1;
- (id)_fakeCalendarResourceChangedNotificationInfoWithDictionary:(id)arg1 sourceClientIdentifier:(id)arg2 notificationType:(long long)arg3 resourceChangeType:(unsigned int)arg4;
- (id)_fakeNextEventNotificationInfoNextEvent:(id *)arg1;
- (id)_fakeInvitationNotificationWithDictionary:(id)arg1 type:(long long)arg2;
- (id)initWithNotificationManager:(id)arg1 eventStoreProvider:(id)arg2 triggeredEventNotificationSource:(id)arg3 eventInvitationNotificationSource:(id)arg4 eventInvitationResponseNotificationSource:(id)arg5 eventCanceledNotificationSource:(id)arg6 sharedCalendarInvitationNotificationSource:(id)arg7 sharedCalendarInvitationResponseNotificationSource:(id)arg8 calendarResourceChangedNotificationSource:(id)arg9;
- (id)_fakeTriggeredEventNotificationContentWithSourceClientIdentifier:(id)arg1;
- (id)_fakeEventInvitationNotificationContentWithDictionary:(id)arg1;
- (id)_fakeInviteModifiedNotificationContentWithDictionary:(id)arg1;
- (id)_fakeInviteCanceledNotificationContentWithDictionary:(id)arg1;
- (id)_fakeAttendeeRepliedNotificationContentWithDictionary:(id)arg1;
- (id)_fakeSharedCalendarInvitationNotificationContentWithDictionary:(id)arg1;
- (id)_fakeSharedCalendarInviteReplyNotificationContentWithDictionary:(id)arg1;
- (id)_fakeSharedCalendarEventAddedNotificationContentWithDictionary:(id)arg1;
- (id)_fakeSharedCalendarEventUpdatedNotificationContentWithDictionary:(id)arg1;
- (id)_fakeSharedCalendarEventDeletedNotificationContentWithDictionary:(id)arg1;
- (id)_fakeNextEventNotificationContentWithSourceClientIdentifier:(id)arg1;

@end
