/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSData, NSDate, NSDateComponents, NSSet, NSString, REMAccountCapabilities, REMCRMergeableStringDocument, REMChangedKeysObserver, REMContactRepresentation, REMDisplayDate, REMListChangeItem, REMObjectID, REMReminderAttachmentContextChangeItem, REMReminderFlaggedContextChangeItem, REMReminderStorage, REMReminderSubtaskContextChangeItem, REMResolutionTokenMap, REMSaveRequest, REMUserActivity;

@interface REMReminderChangeItem : NSObject

{
    REMSaveRequest *_saveRequest;
    REMReminderStorage *_storage;
    REMChangedKeysObserver *_changedKeysObserver;
}

@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver;
@property (retain, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) REMObjectID *listID;
@property (retain, nonatomic) NSArray *attachments;
@property (retain, nonatomic) NSArray *recurrenceRules;
@property (retain, nonatomic) NSSet *subtaskIDsToUndelete;
@property (retain, nonatomic) NSData *titleDocumentData;
@property (retain, nonatomic) NSData *notesDocumentData;
@property (nonatomic, readonly) NSString *timeZone;
@property (nonatomic, readonly) _Bool allDay;
@property (nonatomic) unsigned long long icsDisplayOrder;
@property (retain, nonatomic) NSData *importedICSData;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMReminderStorage *storage;
@property (nonatomic, readonly) REMAccountCapabilities *accountCapabilities;
@property (retain, nonatomic) REMObjectID *parentReminderID;
@property (retain, nonatomic) REMCRMergeableStringDocument *titleDocument;
@property (copy, nonatomic) NSString *titleAsString;
@property (retain, nonatomic) REMCRMergeableStringDocument *notesDocument;
@property (copy, nonatomic) NSString *notesAsString;
@property (copy, nonatomic) REMContactRepresentation *contactHandles;
@property (nonatomic) long long flagged;
@property (copy, nonatomic) NSString *daCalendarItemUniqueIdentifier;
@property (copy, nonatomic) REMUserActivity *userActivity;
@property (copy, nonatomic) NSData *siriFoundInAppsData;
@property (nonatomic) long long siriFoundInAppsUserConfirmation;
@property (copy, nonatomic) NSDate *lastBannerPresentationDate;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic, readonly) REMDisplayDate *displayDate;
@property (nonatomic, readonly) _Bool isOverdue;
@property (nonatomic, readonly) _Bool isRecurrent;
@property (copy, nonatomic, readonly) NSString *legacyNotificationIdentifier;
@property (nonatomic, readonly) REMSaveRequest *saveRequest;
@property (nonatomic, readonly) REMListChangeItem *listChangeItem;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *notes;
@property (nonatomic, getter=isCompleted) _Bool completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;
@property (nonatomic, readonly) NSArray *alarms;
@property (nonatomic, readonly) REMReminderAttachmentContextChangeItem *attachmentContext;
@property (nonatomic, readonly) REMReminderSubtaskContextChangeItem *subtaskContext;
@property (nonatomic, readonly) REMReminderFlaggedContextChangeItem *flaggedContext;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;

+ (void)initialize;
+ (id)_deduplicateAlarms:(id)arg1;
+ (long long)hourForNextThirdsFromHour:(long long)arg1;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)changedKeys;
- (void)removeFromList;
- (void)setAlarms:(id)arg1;
- (void)addAlarm:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (void)removeAllAlarms;
- (id)addAlarmWithTrigger:(id)arg1;
- (void)removeAllRecurrenceRules;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 changedKeysObserver:(id)arg4;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 observeInitialValues:(_Bool)arg4;
- (void)copyInto:(id)arg1;
- (void)_copyAlarmsInto:(id)arg1;
- (id)_editDocument:(id)arg1 replicaIDSource:(id)arg2 newString:(id)arg3;
- (void)removeAllSnoozeAlarms;
- (id)addRecurrenceRuleWithFrequency:(long long)arg1 interval:(long long)arg2 firstDayOfTheWeek:(long long)arg3 daysOfTheWeek:(id)arg4 daysOfTheMonth:(id)arg5 monthsOfTheYear:(id)arg6 weeksOfTheYear:(id)arg7 daysOfTheYear:(id)arg8 setPositions:(id)arg9 end:(id)arg10;
- (void)insertRecurrenceRule:(id)arg1 afterRecurrenceRule:(id)arg2;
- (_Bool)isSubtask;
- (id)removeFromListAllowingUndo;
- (id)removeFromParentReminderAllowingUndo;
- (id)resolutionTokenKeyForChangedKey:(id)arg1;
- (id)shallowCopyWithSaveRequest:(id)arg1;
- (id)initWithObjectID:(id)arg1 title:(id)arg2 insertIntoListChangeItem:(id)arg3;
- (id)initWithObjectID:(id)arg1 title:(id)arg2 insertIntoParentReminderSubtaskContextChangeItem:(id)arg3;
- (id)initWithReminderChangeItem:(id)arg1 insertIntoListChangeItem:(id)arg2;
- (id)initWithReminderChangeItem:(id)arg1 insertIntoParentReminderSubtaskContextChangeItem:(id)arg2;
- (id)duplicateForRecurrenceUsingReminderID:(id)arg1;
- (void)setDueDateComponentsWithAlarmsIfNeeded:(id)arg1;
- (id)addRecurrenceRuleWithFrequency:(long long)arg1 interval:(long long)arg2 end:(id)arg3;
- (id)addRecurrenceRuleWithFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (void)insertRecurrenceRule:(id)arg1 beforeRecurrenceRule:(id)arg2;
- (void)removeRecurrenceRule:(id)arg1;
- (double)nextRecurrentAdvanceAmountForDateComponents:(id)arg1 afterDate:(id)arg2;
- (id)nextRecurrentDueDateComponentsAfter:(id)arg1;
- (void)updateAccountCapabilities:(id)arg1;
- (void)removeFromParentReminder;
- (id)confirmForSiriFoundInAppsAppendingToList:(id)arg1;
- (void)rejectForSiriFoundInApps;
- (void)snoozeToDate:(id)arg1;
- (void)_createSnoozeAlarmWithDateComponents:(id)arg1;
- (id)_cleanupOriginalAlarmsForSnoozing;
- (double)_timeIntervalToAddSinceStartDate:(id)arg1 withNow:(id)arg2 step:(double)arg3;
- (void)snoozeFromNowForTimeInterval:(double)arg1;
- (void)snoozeToNextThirds;
- (void)snoozeForever;
- (void)snoozeFromDueDateForFutureIntegralMultipleOfTimeInterval:(double)arg1;

@end
