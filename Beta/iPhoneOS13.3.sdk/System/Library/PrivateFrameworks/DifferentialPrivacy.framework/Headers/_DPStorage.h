/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSDictionary, _DPCoreDataStorage;

@protocol OS_dispatch_queue;

@interface _DPStorage : NSObject

{
    _Bool _readOnly;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_converterFromEntity;
    NSDictionary *_converterFromClass;
    _DPCoreDataStorage *_coredataStorage;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) _Bool readOnly;
@property (nonatomic, readonly) NSDictionary *converterFromEntity;
@property (nonatomic, readonly) NSDictionary *converterFromClass;
@property (nonatomic, readonly) _DPCoreDataStorage *coredataStorage;

+ (id)storageWithDirectory:(id)arg1 readOnly:(_Bool)arg2;
+ (id)errorStringFor:(long long)arg1;
+ (id)createFetchRequestFor:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 fetchLimit:(unsigned long long)arg4 fetchOffset:(unsigned long long)arg5;
+ (id)entitiesRequiringMaintenance;

- (id)init;
- (void)dealloc;
- (id)initWithDirectory:(id)arg1 readOnly:(_Bool)arg2;
- (id)removeBadObjects:(id)arg1;
- (void)flush;
- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;
- (void)saveRecords:(id)arg1 andFlush:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)handleEmptyArrayError:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRecordCountForEntity:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchKeynamesFor:(id)arg1 predicate:(id)arg2 fetchLimit:(unsigned long long)arg3 fetchOffset:(unsigned long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)fetchRecordsFor:(id)arg1 predicate:(id)arg2 fetchLimit:(unsigned long long)arg3 fetchOffset:(unsigned long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)saveRecords:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateRecords:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)deleteRecords:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)deleteStorageWithObliterationOption:(_Bool)arg1;
- (void)scheduleStorageCullingWithName:(id)arg1 database:(id)arg2;

@end
