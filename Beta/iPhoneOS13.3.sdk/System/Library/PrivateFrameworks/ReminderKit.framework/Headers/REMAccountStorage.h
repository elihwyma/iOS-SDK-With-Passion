/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSSet, NSString, REMCRMergeableOrderedSet, REMObjectID, REMResolutionTokenMap;

@interface REMAccountStorage : NSObject <Swift>

{
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    struct os_unfair_lock_s _lock;
    _Bool _markedForRemoval;
    _Bool _listsDADisplayOrderChanged;
    _Bool _inactive;
    _Bool _didChooseToMigrate;
    _Bool _didChooseToMigrateLocally;
    _Bool _didFinishMigration;
    _Bool _daAllowsCalendarAddDeleteModify;
    _Bool _daSupportsSharedCalendars;
    _Bool _daWasMigrated;
    NSString *externalIdentifier;
    NSString *externalModificationTag;
    NSString *daSyncToken;
    NSString *daPushKey;
    REMObjectID *_objectID;
    long long _type;
    NSString *_name;
    REMCRMergeableOrderedSet *_listIDsMergeableOrdering;
    REMResolutionTokenMap *_resolutionTokenMap;
    NSSet *_listIDsToUndelete;
    NSString *_daConstraintsDescriptionPath;
}

@property (retain, nonatomic) REMObjectID *objectID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) NSString *displayName;
@property (retain, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (nonatomic) _Bool markedForRemoval;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSSet *listIDsToUndelete;
@property (nonatomic) _Bool listsDADisplayOrderChanged;
@property (nonatomic) _Bool inactive;
@property (nonatomic) _Bool didChooseToMigrate;
@property (nonatomic) _Bool didChooseToMigrateLocally;
@property (nonatomic) _Bool didFinishMigration;
@property (copy, nonatomic) NSString *daConstraintsDescriptionPath;
@property (nonatomic) _Bool daAllowsCalendarAddDeleteModify;
@property (nonatomic) _Bool daSupportsSharedCalendars;
@property (nonatomic) _Bool daWasMigrated;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)listIDsMergeableOrderingReplicaIDSourceWithAccountID:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)storeGeneration;
- (id)initWithObjectID:(id)arg1 type:(long long)arg2 name:(id)arg3 listIDsMergeableOrdering:(id)arg4;
- (id)initWithObjectID:(id)arg1 type:(long long)arg2 name:(id)arg3;
- (void)setStoreGenerationIfNeeded:(unsigned long long)arg1;
- (id)listIDsMergeableOrderingReplicaIDSource;

@end
