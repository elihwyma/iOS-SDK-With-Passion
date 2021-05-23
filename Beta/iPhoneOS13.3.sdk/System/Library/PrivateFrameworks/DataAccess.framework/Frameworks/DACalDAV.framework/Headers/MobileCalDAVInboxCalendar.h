/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagInboxCollectionSync;

@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar

{
    CalDiagInboxCollectionSync *_inboxCollectionSyncDiagnostics;
}

@property (retain, nonatomic) CalDiagInboxCollectionSync *inboxCollectionSyncDiagnostics;

- (id)initWithCalendarURL:(id)arg1 calendar:(void *)arg2 principal:(id)arg3 title:(id)arg4;
- (_Bool)shouldCalendarBeHidden;
- (_Bool)isScheduleInbox;
- (id)etagsForItemURLs:(id)arg1;
- (_Bool)updateResourcesFromServer:(id)arg1;
- (_Bool)deleteResourcesAtURLs:(id)arg1;
- (id)allItemURLs;
- (void)recordDiagnosticsForAccountSync:(id)arg1;
- (void *)_copyEventActionWithURL:(id)arg1;
- (void)setETag:(id)arg1 forInvitationAtURL:(id)arg2 uniqueIdentifier:(id)arg3;
- (_Bool)_removeInvitationWithURL:(id)arg1;

@end
