/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSOrderedSet, NSSet, NSString, REMAccount, REMAccountCapabilities, REMChangedKeysObserver, REMColor, REMListAppearanceContextChangeItem, REMListCalDAVNotificationContextChangeItem, REMListShareeContextChangeItem, REMListStorage, REMListSublistContextChangeItem, REMObjectID, REMResolutionTokenMap, REMSaveRequest;

@interface REMListChangeItem : NSObject

{
    REMSaveRequest *_saveRequest;
    REMListStorage *_storage;
    REMChangedKeysObserver *_changedKeysObserver;
    REMAccount *_parentAccount;
}

@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (retain, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) REMObjectID *accountID;
@property (nonatomic, readonly) NSData *reminderIDsMergeableOrderingData;
@property (nonatomic, readonly) NSOrderedSet *reminderIDsMergeableOrdering;
@property (retain, nonatomic) NSString *badgeEmblem;
@property (nonatomic) _Bool showingLargeAttachments;
@property (retain, nonatomic) NSSet *reminderIDsToUndelete;
@property (retain, nonatomic) NSArray *calDAVNotifications;
@property (retain, nonatomic) NSArray *sharees;
@property (retain, nonatomic) REMObjectID *sharedOwnerID;
@property (nonatomic, readonly) _Bool isPlaceholder;
@property (nonatomic) _Bool remindersICSDisplayOrderChanged;
@property (nonatomic, readonly) REMAccount *parentAccount;
@property (copy, nonatomic, readonly) REMListStorage *storage;
@property (nonatomic, readonly) REMAccountCapabilities *accountCapabilities;
@property (nonatomic, readonly) _Bool isGroup;
@property (retain, nonatomic) REMObjectID *parentListID;
@property (copy, nonatomic) NSString *sharedOwnerName;
@property (copy, nonatomic) NSString *sharedOwnerAddress;
@property (nonatomic) long long sharingStatus;
@property (nonatomic, readonly) _Bool isSharedToMe;
@property (nonatomic, readonly) _Bool canBeIncludedInGroup;
@property (copy, nonatomic) NSDate *lastUserAccessDate;
@property (retain, nonatomic) NSString *daExternalIdentificationTag;
@property (retain, nonatomic) NSDictionary *daBulkRequests;
@property (nonatomic) long long daDisplayOrder;
@property (nonatomic) _Bool daIsEventOnlyContainer;
@property (nonatomic) _Bool daIsReadOnly;
@property (nonatomic) _Bool daIsImmutable;
@property (nonatomic) _Bool daIsNotificationsCollection;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) REMListCalDAVNotificationContextChangeItem *calDAVNotificationContext;
@property (nonatomic, readonly) REMListShareeContextChangeItem *shareeContext;
@property (nonatomic, readonly) REMSaveRequest *saveRequest;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REMColor *color;
@property (nonatomic, readonly) REMListAppearanceContextChangeItem *appearanceContext;
@property (nonatomic, readonly) REMListSublistContextChangeItem *sublistContext;
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

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)changedKeys;
- (void)removeFromParent;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 changedKeysObserver:(id)arg4;
- (void)lowLevelAddReminderIDToOrdering:(id)arg1 withParentReminderChangeItem:(id)arg2;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 observeInitialValues:(_Bool)arg4;
- (void)insertReminderChangeItem:(id)arg1 beforeReminderChangeItem:(id)arg2;
- (id)lowLevelRemoveReminderIDFromOrdering:(id)arg1;
- (id)resolutionTokenKeyForChangedKey:(id)arg1;
- (id)shallowCopyWithSaveRequest:(id)arg1;
- (void)insertReminderChangeItem:(id)arg1 adjacentToReminderChangeItem:(id)arg2 isAfter:(_Bool)arg3 withParentReminderChangeItem:(id)arg4;
- (void)undeleteReminderWithID:(id)arg1 usingUndo:(id)arg2;
- (void)addReminderChangeItem:(id)arg1;
- (void)insertReminderChangeItem:(id)arg1 afterReminderChangeItem:(id)arg2;
- (void)_lowLevelApplyUndoToOrdering:(id)arg1;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3 isGroup:(_Bool)arg4;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoListSublistContextChangeItem:(id)arg3;
- (id)ekColor;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3 isGroup:(_Bool)arg4 withParentList:(id)arg5;
- (id)removeFromAccountAllowingUndo;
- (void)_editReminderIDsOrderingUsingBlock:(CDUnknownBlockType)arg1;
- (void)_reassignReminderChangeItem:(id)arg1 withParentReminderChangeItem:(id)arg2;
- (void)_lowLevelAddReminderChangeItemToOrdering:(id)arg1 atIndexOfSibling:(id)arg2 isAfter:(_Bool)arg3 withParent:(id)arg4;
- (id)removeFromParentAllowingUndo;
- (void)undeleteRemindersWithoutUndoWithIDs:(id)arg1 isCalDAV:(_Bool)arg2;
- (void)_testingOnly_setReminderIDsMergeableOrder:(id)arg1;
- (void)copyListDataFrom:(id)arg1;

@end
