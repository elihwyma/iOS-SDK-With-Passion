//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NCNotificationDispatcher, NSDate, NSSet, NSString;

@protocol NCNotificationDispatcherSourceDelegate <NSObject>
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequestsInSections:(NSSet *)arg2;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequestsFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3 inSections:(NSSet *)arg4;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2 fromDestinations:(NSSet *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2;
@end

