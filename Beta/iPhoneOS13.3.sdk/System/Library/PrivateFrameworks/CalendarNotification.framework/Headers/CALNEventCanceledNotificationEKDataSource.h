/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CALNDataSourceEventRepresentationProvider, CALNEKCalendarNotificationReferenceProvider, CALNInboxNotificationProvider, CALNRemoteMutator, EKEventStoreProvider;

@interface CALNEventCanceledNotificationEKDataSource : NSObject

{
    id <EKEventStoreProvider> _eventStoreProvider;
    id <CALNInboxNotificationProvider> _inboxNotificationProvider;
    id <CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;
    id <CALNRemoteMutator> _remoteMutator;
    id <CALNDataSourceEventRepresentationProvider> _dataSourceEventRepresentationProvider;
}

@property (nonatomic, readonly) id <EKEventStoreProvider> eventStoreProvider;
@property (nonatomic, readonly) id <CALNInboxNotificationProvider> inboxNotificationProvider;
@property (nonatomic, readonly) id <CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;
@property (nonatomic, readonly) id <CALNRemoteMutator> remoteMutator;
@property (nonatomic, readonly) id <CALNDataSourceEventRepresentationProvider> dataSourceEventRepresentationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)fetchEventCanceledNotificationSourceClientIdentifiers:(id)arg1;
- (id)fetchEventCanceledNotificationWithSourceClientIdentifier:(id)arg1;
- (id)_notificationInfoFromNotification:(id)arg1 inEventStore:(id)arg2;
- (id)fetchEventCanceledNotifications;
- (void)clearCanceledEventNotificationWithSourceClientIdentifier:(id)arg1;
- (void)deleteCanceledEventWithSourceClientIdentifier:(id)arg1;
- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 remoteMutator:(id)arg4 dataSourceEventRepresentationProvider:(id)arg5;

@end
