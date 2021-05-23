/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CALNEKCalendarNotificationReferenceProvider, CALNInboxNotificationProvider, EKEventStoreProvider;

@interface CALNSuggestedEventNotificationEKDataSource : NSObject

{
    id <EKEventStoreProvider> _eventStoreProvider;
    id <CALNInboxNotificationProvider> _inboxNotificationProvider;
    id <CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;
}

@property (nonatomic, readonly) id <EKEventStoreProvider> eventStoreProvider;
@property (nonatomic, readonly) id <CALNInboxNotificationProvider> inboxNotificationProvider;
@property (nonatomic, readonly) id <CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_notificationInfoFromNotification:(id)arg1 inEventStore:(id)arg2;
- (id)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(id)arg1;
- (id)fetchSuggestedEventNotificationObjectIDs;
- (id)fetchSuggestedEventNotificationWithObjectID:(id)arg1;
- (void)clearSuggestedEventNotificationWithSourceClientIdentifier:(id)arg1;
- (void)confirmSuggestedEventWithSourceClientIdentifier:(id)arg1;
- (void)ignoreSuggestedEventWithSourceClientIdentifier:(id)arg1;
- (void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(id)arg1;
- (void)_acknowledgeSuggestedEventWithSourceClientIdentifier:(id)arg1 accept:(_Bool)arg2;
- (id)_eventForSourceClientIdentifier:(id)arg1 eventStore:(id)arg2;
- (void)_clearSuggestedEventNotificationWithObjectID:(id)arg1;
- (id)fetchSuggestedEventNotifications;
- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3;

@end
