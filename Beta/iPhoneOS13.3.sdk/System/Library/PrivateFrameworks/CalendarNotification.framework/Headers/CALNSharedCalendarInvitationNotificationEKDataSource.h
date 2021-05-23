/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CALNDataAccessExpressConnection, CALNEKCalendarNotificationReferenceProvider, CALNInboxNotificationProvider, EKEventStoreProvider;

@interface CALNSharedCalendarInvitationNotificationEKDataSource : NSObject

{
    id <EKEventStoreProvider> _eventStoreProvider;
    id <CALNInboxNotificationProvider> _inboxNotificationProvider;
    id <CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;
    id <CALNDataAccessExpressConnection> _dataAccessExpressConnection;
}

@property (nonatomic, readonly) id <EKEventStoreProvider> eventStoreProvider;
@property (nonatomic, readonly) id <CALNInboxNotificationProvider> inboxNotificationProvider;
@property (nonatomic, readonly) id <CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;
@property (nonatomic, readonly) id <CALNDataAccessExpressConnection> dataAccessExpressConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)fetchSharedCalendarInvitationNotificationSourceClientIdentifiers:(id)arg1;
- (id)fetchSharedCalendarInvitationNotificationWithSourceClientIdentifier:(id)arg1;
- (void)clearSharedCalendarInvitationWithSourceClientIdentifier:(id)arg1;
- (void)joinSharedCalendarWithSourceClientIdentifier:(id)arg1;
- (void)declineSharedCalendarWithSourceClientIdentifier:(id)arg1;
- (void)reportSharedCalendarAsJunkWithSourceClientIdentifier:(id)arg1;
- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 dataAccessExpressConnection:(id)arg4;
- (id)_notificationInfoFromNotificationReference:(id)arg1;
- (id)_notificationInfoFromNotification:(id)arg1;
- (id)fetchSharedCalendarInvitationNotifications;

@end
