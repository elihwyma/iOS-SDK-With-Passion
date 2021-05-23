/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSOrderedSet, NSSet, NSString, REMAccountCapabilities, REMAccountGroupContext, REMAccountStorage, REMCRMergeableOrderedSet, REMObjectID, REMResolutionTokenMap, REMStore;

@interface REMAccount : NSObject <Swift>

{
    _Bool _markedForRemoval;
    REMStore *_store;
    REMAccountStorage *_storage;
    REMAccountCapabilities *_capabilities;
}

@property (nonatomic) _Bool markedForRemoval;
@property (nonatomic, readonly) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, readonly) NSSet *listIDsToUndelete;
@property (nonatomic, readonly) _Bool listsDADisplayOrderChanged;
@property (retain, nonatomic) REMStore *store;
@property (copy, nonatomic, readonly) REMAccountStorage *storage;
@property (retain, nonatomic) REMAccountCapabilities *capabilities;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic, readonly) NSOrderedSet *listIDsOrdering;
@property (nonatomic, readonly) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) _Bool inactive;
@property (nonatomic, readonly) _Bool didChooseToMigrate;
@property (nonatomic, readonly) _Bool didChooseToMigrateLocally;
@property (nonatomic, readonly) _Bool didFinishMigration;
@property (nonatomic, readonly) NSString *daConstraintsDescriptionPath;
@property (nonatomic, readonly) _Bool daAllowsCalendarAddDeleteModify;
@property (nonatomic, readonly) _Bool daSupportsPhoneNumbers;
@property (nonatomic, readonly) _Bool daSupportsSharedCalendars;
@property (nonatomic, readonly) _Bool daWasMigrated;
@property (nonatomic, readonly) _Bool supportsSharingLists;
@property (nonatomic, readonly) REMAccountGroupContext *groupContext;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, readonly) NSString *externalIdentifier;
@property (nonatomic, readonly) NSString *externalModificationTag;
@property (nonatomic, readonly) NSString *daSyncToken;
@property (nonatomic, readonly) NSString *daPushKey;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)localAccountID;
+ (id)localInternalAccountID;
+ (id)_accountTypeMaskWithBitMask:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)fetchListsWithError:(id *)arg1;
- (id)initWithStore:(id)arg1 storage:(id)arg2;
- (id)externalIdentifierForMarkedForDeletionObject;
- (_Bool)canCopyReminderLosslesslyToAccount:(id)arg1;
- (_Bool)isConsideredEmptyWithResultPtr:(_Bool *)arg1 withError:(id *)arg2;
- (id)fetchListsIncludingSpecialContainersWithError:(id *)arg1;
- (id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg1 error:(id *)arg2;

@end
