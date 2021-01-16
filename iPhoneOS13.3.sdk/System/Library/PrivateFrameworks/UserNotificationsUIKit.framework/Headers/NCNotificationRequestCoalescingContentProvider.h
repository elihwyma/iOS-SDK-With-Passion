//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationRequestContentProvider.h>

@class NCNotificationSummaryBuilder, NSMutableArray, NSNumberFormatter;

@interface NCNotificationRequestCoalescingContentProvider : NCNotificationRequestContentProvider
{
    NSNumberFormatter *_decimalFormatter;
    NCNotificationSummaryBuilder *_summaryBuilder;
    BOOL _deviceAuthenticated;
    NSMutableArray *_coalescedNotificationRequests;
    NCNotificationSummaryBuilder *_overridenSummaryBuilder;
}

@property(retain, nonatomic) NCNotificationSummaryBuilder *overridenSummaryBuilder; // @synthesize overridenSummaryBuilder=_overridenSummaryBuilder;
@property(nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // @synthesize deviceAuthenticated=_deviceAuthenticated;
@property(retain, nonatomic) NSMutableArray *coalescedNotificationRequests; // @synthesize coalescedNotificationRequests=_coalescedNotificationRequests;
// - (void).cxx_destruct;
- (id)_localizedStringWithPlaceholderFormat:(id)arg1 count:(NSUInteger)arg2;
- (void)_updateSummaryText;
- (NSUInteger)_indexOfMatchingNotificationRequest:(id)arg1;
- (BOOL)_shouldShowContent;
- (id)thumbnail;
- (id)_placeholderSecondaryText;
- (BOOL)_shouldShowNotificationBody;
- (id)summaryText;
- (id)secondaryText;
- (id)primarySubtitleText;
- (id)primaryText;
- (BOOL)containsMatchingCoalescedNotificationRequest:(id)arg1;
- (id)notificationRequest;
- (void)updateCoalescedNotificationRequest:(id)arg1;
- (void)removeCoalescedNotificationRequest:(id)arg1;
- (void)coalesceNotificationRequest:(id)arg1;
- (NSUInteger)coalesceCount;
- (id)init;
- (id)initWithNotificationRequest:(id)arg1;

@end
