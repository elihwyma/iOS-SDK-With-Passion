/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@class CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem, ICSDocument, NSArray, NSData, NSMutableDictionary, NSNumber, NSString, NSURL;

@interface DACalDAViCalItem : NSObject

{
    NSString *_scheduleTag;
    NSMutableDictionary *_originatingChangeItems;
    NSData *_dataPayload;
    _Bool _isMigrate;
    _Bool _prohibitLocalCreationOfServerID;
    _Bool _statusChanged;
    NSString *_syncKey;
    CalDAVCalendarServerScheduleChangesItem *_scheduleChanges;
    NSURL *_serverID;
    NSNumber *_clientID;
    void *_calItem;
    ICSDocument *_document;
    CalDAVUpdateOwnerItem *_createdBy;
    CalDAVUpdateOwnerItem *_updatedBy;
    NSString *_uniqueIdentifier;
    NSString *_filename;
}

@property (retain, nonatomic) NSString *syncKey;
@property (retain, nonatomic) NSData *dataPayload;
@property (retain, nonatomic) ICSDocument *document;
@property (nonatomic) _Bool statusChanged;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSURL *serverID;
@property (retain, nonatomic) NSNumber *clientID;
@property (nonatomic, readonly) void *calItem;
@property (retain, nonatomic) NSString *scheduleTag;
@property (retain, nonatomic) CalDAVCalendarServerScheduleChangesItem *scheduleChanges;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *createdBy;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *updatedBy;
@property (copy, nonatomic) NSMutableDictionary *originatingChangeItems;
@property (nonatomic) _Bool isMigrate;
@property (nonatomic, readonly) _Bool invitationStatusCleared;
@property (nonatomic) _Bool prohibitLocalCreationOfServerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *childrenOrder;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) NSURL *destinationURL;

+ (_Bool)_shouldApplyEvent:(id)arg1 instanceWithStartDate:(id)arg2 startRange:(id)arg3 endRange:(id)arg4;
+ (_Bool)_checkOccurrencesForEvent:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
+ (_Bool)_shouldApplyEventFromSyncReport:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

- (void)dealloc;
- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5 calendar:(id)arg6;
- (id)initWithCalRecord:(void *)arg1 inContainer:(id)arg2;
- (void)addChangeOfType:(id)arg1 forChangeRowid:(int)arg2;
- (_Bool)loadLocalItemWithAccount:(id)arg1;
- (void)setLocalItem:(void *)arg1;
- (id)_getDetachedEventUniqueIdentifiersForCalEvent:(void *)arg1;
- (void)_setModificationInfoOnItem:(void *)arg1;
- (void)_removeCalEvent:(void *)arg1 fromUniqueIdentifiersSet:(id)arg2;
- (void)_removeDetachedEventsWithUniqueIdentifiers:(id)arg1 fromEvent:(void *)arg2 withContainer:(void *)arg3;
- (_Bool)_addOrModifyEvent:(id)arg1 inICSCalendar:(id)arg2 withContainer:(void *)arg3 shouldMergeProperties:(_Bool)arg4 outMergeDidChooseLocalProperties:(_Bool *)arg5 inMobileCalendar:(id)arg6;
- (_Bool)_addOrModifyTask:(id)arg1 inICSCalendar:(id)arg2 withContainer:(void *)arg3 shouldMergeProperties:(_Bool)arg4 outMergeDidChooseLocalProperties:(_Bool *)arg5 inMobileCalendar:(id)arg6;
- (void)_fixUpCalendarForServer:(id)arg1;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (_Bool)saveServerIDToExistingItem;
- (_Bool)deleteFromContainer:(void *)arg1;
- (void *)localItem;

@end
