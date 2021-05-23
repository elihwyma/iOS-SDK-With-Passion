/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagNotificationCollectionSync;

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar

{
    CalDiagNotificationCollectionSync *_notificationCollectionSyncDiagnostics;
}

@property (retain, nonatomic) CalDiagNotificationCollectionSync *notificationCollectionSyncDiagnostics;

- (id)initWithCalendarURL:(id)arg1 calendar:(void *)arg2 principal:(id)arg3 title:(id)arg4;
- (_Bool)setEtag:(id)arg1 forItemAtURL:(id)arg2;
- (_Bool)_removeCalendarItemWithURL:(id)arg1;
- (_Bool)shouldCalendarBeHidden;
- (_Bool)isNotification;
- (_Bool)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2;
- (_Bool)setURL:(id)arg1 forResourceWithUUID:(id)arg2;
- (id)etagsForItemURLs:(id)arg1;
- (_Bool)updateResourcesFromServer:(id)arg1;
- (id)allItemURLs;
- (Class)appSpecificCalendarItemClass;
- (void)prepareMergeSyncActionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)clearEventChanges;
- (void)prepareSyncActionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordDiagnosticsForAccountSync:(id)arg1;
- (void *)_copyNotificationWithExternalID:(id)arg1;
- (void *)_copyNotificationWithUniqueIdentifier:(id)arg1 inCalendar:(void *)arg2 orStore:(void *)arg3;
- (_Bool)_handleInviteNotification:(id)arg1 withResource:(id)arg2 uid:(id)arg3;
- (void)_handleInviteReply:(id)arg1 withResource:(id)arg2 owningNotification:(id)arg3 uid:(id)arg4;
- (_Bool)_handleResourceChanged:(id)arg1 withResource:(id)arg2 uid:(id)arg3;
- (void *)_copyCalendarForReplyItem:(id)arg1;
- (void *)_copyCalItemFromAnyCalendarWithExternalID:(id)arg1;
- (void *)_createResourceChange:(id)arg1 withType:(unsigned int)arg2 forNotification:(void *)arg3 withRecurrenceID:(id)arg4;
- (void *)_createResourceChange:(id)arg1 withType:(unsigned int)arg2 forNotification:(void *)arg3;
- (id)_changedAttributesFromCalendarChanges:(id)arg1;

@end
