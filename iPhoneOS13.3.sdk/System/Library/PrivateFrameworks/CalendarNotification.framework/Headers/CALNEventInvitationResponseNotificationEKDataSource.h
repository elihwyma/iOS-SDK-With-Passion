//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNEventInvitationResponseNotificationDataSource-Protocol.h>

@protocol CALNDataSourceEventRepresentationProvider, CALNEKCalendarNotificationReferenceProvider, CALNInboxNotificationProvider, EKEventStoreProvider;

@interface CALNEventInvitationResponseNotificationEKDataSource : NSObject <CALNEventInvitationResponseNotificationDataSource>
{
    id <EKEventStoreProvider> _eventStoreProvider;
    id <CALNInboxNotificationProvider> _inboxNotificationProvider;
    id <CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;
    id <CALNDataSourceEventRepresentationProvider> _dataSourceEventRepresentationProvider;
}

@property(readonly, nonatomic) id <CALNDataSourceEventRepresentationProvider> dataSourceEventRepresentationProvider; // @synthesize dataSourceEventRepresentationProvider=_dataSourceEventRepresentationProvider;
@property(readonly, nonatomic) id <CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider; // @synthesize notificationReferenceProvider=_notificationReferenceProvider;
@property(readonly, nonatomic) id <CALNInboxNotificationProvider> inboxNotificationProvider; // @synthesize inboxNotificationProvider=_inboxNotificationProvider;
@property(readonly, nonatomic) id <EKEventStoreProvider> eventStoreProvider; // @synthesize eventStoreProvider=_eventStoreProvider;
// - (void).cxx_destruct;
- (id)_notificationInfoFromNotification:(id)arg1 inEventStore:(id)arg2;
- (void)clearEventInvitationResponseWithSourceClientIdentifier:(id)arg1;
- (id)fetchEventInvitationResponseNotificationWithSourceClientIdentifier:(id)arg1;
- (id)fetchEventInvitationResponseNotificationSourceClientIdentifiers:(id)arg1;
- (id)fetchEventInvitationResponseNotifications;
- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 dataSourceEventRepresentationProvider:(id)arg4;

@end

