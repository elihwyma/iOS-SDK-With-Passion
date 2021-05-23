/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CALNDataSourceEventRepresentationProvider, CALNEKCalendarNotificationReferenceProvider, CALNInboxNotificationProvider, EKEventStoreProvider;

@interface CALNEventInvitationResponseNotificationEKDataSource : NSObject

{
    id <EKEventStoreProvider> _eventStoreProvider;
    id <CALNInboxNotificationProvider> _inboxNotificationProvider;
    id <CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;
    id <CALNDataSourceEventRepresentationProvider> _dataSourceEventRepresentationProvider;
}

@property (nonatomic, readonly) id <EKEventStoreProvider> eventStoreProvider;
@property (nonatomic, readonly) id <CALNInboxNotificationProvider> inboxNotificationProvider;
@property (nonatomic, readonly) id <CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;
@property (nonatomic, readonly) id <CALNDataSourceEventRepresentationProvider> dataSourceEventRepresentationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_notificationInfoFromNotification:(id)arg1 inEventStore:(id)arg2;
- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 dataSourceEventRepresentationProvider:(id)arg4;
- (id)fetchEventInvitationResponseNotificationSourceClientIdentifiers:(id)arg1;
- (id)fetchEventInvitationResponseNotificationWithSourceClientIdentifier:(id)arg1;
- (id)fetchEventInvitationResponseNotifications;
- (void)clearEventInvitationResponseWithSourceClientIdentifier:(id)arg1;

@end
