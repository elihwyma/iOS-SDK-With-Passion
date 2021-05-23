/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, REMAccountCapabilities, REMAccountGroupContextChangeItem, REMAccountStorage, REMCRMergeableOrderedSet, REMChangedKeysObserver, REMObjectID, REMResolutionTokenMap, REMSaveRequest;

@interface REMAccountChangeItem : NSObject

{
    REMSaveRequest *_saveRequest;
    REMAccountStorage *_storage;
    REMChangedKeysObserver *_changedKeysObserver;
}

@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (retain, nonatomic) REMObjectID *objectID;
@property (nonatomic, readonly) REMAccountCapabilities *capabilities;
@property (nonatomic, readonly) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (nonatomic) _Bool markedForRemoval;
@property (retain, nonatomic) NSSet *listIDsToUndelete;
@property (nonatomic) _Bool listsDADisplayOrderChanged;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) REMAccountStorage *storage;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool inactive;
@property (nonatomic) _Bool didChooseToMigrate;
@property (nonatomic) _Bool didChooseToMigrateLocally;
@property (nonatomic) _Bool didFinishMigration;
@property (retain, nonatomic) NSString *daConstraintsDescriptionPath;
@property (nonatomic) _Bool daAllowsCalendarAddDeleteModify;
@property (nonatomic) _Bool daSupportsSharedCalendars;
@property (nonatomic) _Bool daWasMigrated;
@property (nonatomic, readonly) REMSaveRequest *saveRequest;
@property (nonatomic, readonly) REMAccountGroupContextChangeItem *groupContext;
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
+ (id)_emptyListIDsOrderingWithAccountID:(id)arg1;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)changedKeys;
- (id)resolutionTokenKeyForChangedKey:(id)arg1;
- (id)shallowCopyWithSaveRequest:(id)arg1;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 capabilities:(id)arg3 changedKeysObserver:(id)arg4;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 capabilities:(id)arg3 observeInitialValues:(_Bool)arg4;
- (void)insertListChangeItem:(id)arg1 adjacentToListChangeItem:(id)arg2 isAfter:(_Bool)arg3 withParentListChangeItem:(id)arg4;
- (void)_lowLevelApplyUndoToOrdering:(id)arg1;
- (void)_editListIDsOrderingUsingBlock:(CDUnknownBlockType)arg1;
- (void)_reassignListChangeItem:(id)arg1 withParentListChangeItem:(id)arg2;
- (void)_lowLevelAddListChangeItemToOrdering:(id)arg1 atIndexOfSibling:(id)arg2 isAfter:(_Bool)arg3 withParentListChangeItem:(id)arg4;
- (id)initWithObjectID:(id)arg1 type:(long long)arg2 name:(id)arg3 insertIntoSaveRequest:(id)arg4;
- (void)addListChangeItem:(id)arg1;
- (void)insertListChangeItem:(id)arg1 beforeListChangeItem:(id)arg2;
- (void)insertListChangeItem:(id)arg1 afterListChangeItem:(id)arg2;
- (void)undeleteListWithID:(id)arg1 usingUndo:(id)arg2;
- (void)removeFromStore;
- (id)listChangeItemsByOrderingListChangeItems:(id)arg1;
- (void)lowLevelAddListIDToOrdering:(id)arg1 withParentListChangeItem:(id)arg2;
- (id)lowLevelRemoveListIDFromOrdering:(id)arg1;

@end
