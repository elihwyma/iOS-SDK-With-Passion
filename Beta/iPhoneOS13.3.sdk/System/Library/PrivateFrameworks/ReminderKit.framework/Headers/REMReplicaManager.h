/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface REMReplicaManager : NSObject

{
    _Bool _isPersistable;
    _Bool _exceededMaxSerializedSize;
    struct os_unfair_lock_s _ivarLock;
    NSMutableOrderedSet *_replicaUUIDs;
    NSMutableDictionary *_replicaEntries;
    unsigned long long _currentVersion;
    unsigned long long _maxLastSavedVersion;
}

@property (nonatomic) struct os_unfair_lock_s ivarLock;
@property (nonatomic) _Bool isPersistable;
@property (retain, nonatomic) NSMutableOrderedSet *replicaUUIDs;
@property (retain, nonatomic) NSMutableDictionary *replicaEntries;
@property (nonatomic) unsigned long long currentVersion;
@property (nonatomic) unsigned long long maxLastSavedVersion;
@property (nonatomic) _Bool exceededMaxSerializedSize;

+ (_Bool)supportsSecureCoding;
+ (_Bool)disablesInMemoryOnlyCheck;
+ (_Bool)shouldUseNewInMemoryOnlyReplicaManager;
+ (id)replicaManagerWithSerializedData:(id)arg1 error:(id *)arg2;
+ (id)replicaManagerForAccountID:(id)arg1 store:(id)arg2;
+ (id)unsavedReplicaManagersForAccountIDs:(id)arg1;
+ (void)setDisablesInMemoryOnlyCheck:(_Bool)arg1;
+ (id)replicaManagerIfLoadedForAccountID:(id)arg1;
+ (void)setReplicaManager:(id)arg1 forAccountID:(id)arg2;

- (id)init;
- (id)description;
- (void)commonInit;
- (_Bool)hasUnsavedChanges;
- (id)persistenceDescription;
- (id)l_checkoutReplicaUUIDForClient:(id)arg1;
- (void)performLocked:(CDUnknownBlockType)arg1;
- (_Bool)l_updateVersionOfEntry:(id)arg1 forClient:(id)arg2;
- (void)modifyReplicaEntryForClient:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)l_replicaUUIDsDescription;
- (id)l_replicaEntriesDescriptionForPersistence:(_Bool)arg1;
- (id)initWithArchive:(const struct ReplicaManager *)arg1 error:(id *)arg2;
- (void)encodeIntoArchive:(struct ReplicaManager *)arg1;
- (id)l_serializedDataWithError:(id *)arg1;
- (id)checkoutReplicaUUIDForClient:(id)arg1;
- (void)updateVersionForClient:(id)arg1;
- (void)returnReplicaForClient:(id)arg1;
- (id)serializedDataCappedAtMaxSize:(_Bool)arg1 error:(id *)arg2;
- (void)didSaveVersion:(unsigned long long)arg1;
- (unsigned long long)replicaEntryCount;
- (id)availabilityOfFirstReplicaForCRDTID:(id)arg1;
- (id)clockOfFirstReplicaForCRDTID:(id)arg1;
- (_Bool)hasEqualPersistedEntriesAs:(id)arg1;
- (void)addRandomReplicaEntriesWithCount:(long long)arg1;

@end
