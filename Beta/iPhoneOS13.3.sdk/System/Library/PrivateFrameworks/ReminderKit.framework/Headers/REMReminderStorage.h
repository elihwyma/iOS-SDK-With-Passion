/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSArray, NSData, NSDate, NSDateComponents, NSSet, NSString, REMCRMergeableStringDocument, REMContactRepresentation, REMDisplayDate, REMObjectID, REMResolutionTokenMap, REMUserActivity;

@interface REMReminderStorage : NSObject <Swift>

{
    _Bool _hasDeserializedTitleDocument;
    _Bool _hasDeserializedNotesDocument;
    REMCRMergeableStringDocument *_deserializedTitleDocumentCache;
    REMCRMergeableStringDocument *_deserializedNotesDocumentCache;
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    _Bool _completed;
    _Bool _allDay;
    NSString *externalIdentifier;
    NSString *externalModificationTag;
    NSString *daSyncToken;
    NSString *daPushKey;
    REMObjectID *_accountID;
    REMObjectID *_objectID;
    REMObjectID *_listID;
    REMObjectID *_parentReminderID;
    NSData *_titleDocumentData;
    NSData *_notesDocumentData;
    NSDate *_completionDate;
    REMResolutionTokenMap *_resolutionTokenMap;
    NSSet *_subtaskIDsToUndelete;
    unsigned long long _priority;
    NSDateComponents *_startDateComponents;
    NSDateComponents *_dueDateComponents;
    NSString *_timeZone;
    NSDate *_creationDate;
    NSDate *_lastModifiedDate;
    NSArray *_recurrenceRules;
    NSArray *_attachments;
    NSArray *_alarms;
    REMContactRepresentation *_contactHandles;
    unsigned long long _icsDisplayOrder;
    NSData *_importedICSData;
    NSString *_daCalendarItemUniqueIdentifier;
    REMUserActivity *_userActivity;
    NSData *_siriFoundInAppsData;
    long long _siriFoundInAppsUserConfirmation;
    NSDate *_lastBannerPresentationDate;
    long long _flagged;
    REMDisplayDate *_displayDate;
}

@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) REMObjectID *listID;
@property (retain, nonatomic) REMObjectID *parentReminderID;
@property (retain, nonatomic) NSData *titleDocumentData;
@property (retain, nonatomic) NSData *notesDocumentData;
@property (nonatomic, getter=isCompleted) _Bool completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSSet *subtaskIDsToUndelete;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;
@property (copy, nonatomic) NSString *timeZone;
@property (nonatomic) _Bool allDay;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSArray *recurrenceRules;
@property (retain, nonatomic) NSArray *attachments;
@property (retain, nonatomic) NSArray *alarms;
@property (retain, nonatomic) REMContactRepresentation *contactHandles;
@property (nonatomic) unsigned long long icsDisplayOrder;
@property (retain, nonatomic) NSData *importedICSData;
@property (copy, nonatomic) NSString *daCalendarItemUniqueIdentifier;
@property (copy, nonatomic) REMUserActivity *userActivity;
@property (copy, nonatomic) NSData *siriFoundInAppsData;
@property (nonatomic) long long siriFoundInAppsUserConfirmation;
@property (copy, nonatomic) NSDate *lastBannerPresentationDate;
@property (nonatomic) long long flagged;
@property (nonatomic, readonly) _Bool isOverdue;
@property (nonatomic, readonly) _Bool isRecurrent;
@property (copy, nonatomic) REMDisplayDate *displayDate;
@property (copy, nonatomic, readonly) NSString *legacyNotificationIdentifier;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)titleReplicaIDSourceWithAccountID:(id)arg1 reminderID:(id)arg2;
+ (id)notesReplicaIDSourceWithAccountID:(id)arg1 reminderID:(id)arg2;
+ (_Bool)isDate:(id)arg1 overdueAtReferenceDate:(id)arg2 allDay:(_Bool)arg3 showAllDayRemindersAsOverdue:(_Bool)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 listID:(id)arg2 accountID:(id)arg3;
- (id)titleReplicaIDSource;
- (void)setTitleDocument:(id)arg1;
- (id)titleDocument;
- (id)notesDocument;
- (id)notesReplicaIDSource;
- (void)setNotesDocument:(id)arg1;
- (void)updateDisplayDate;
- (unsigned long long)storeGeneration;
- (void)setStoreGenerationIfNeeded:(unsigned long long)arg1;

@end
