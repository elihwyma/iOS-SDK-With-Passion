/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class BCCloudChangeTokenController, BCCloudDataManager, BCCloudDataSource, BCCloudDataSyncManager, NSManagedObjectModel, NSMutableDictionary, NSString;

@interface BDSCloudGlobalMetadataManager : NSObject

{
    _Bool _enableCloudSync;
    BCCloudDataSource *_globalMetadataDataSource;
    BCCloudDataSyncManager *_syncManager;
    BCCloudDataManager *_dataManager;
    NSManagedObjectModel *_objectModel;
    BCCloudChangeTokenController *_changeTokenController;
    NSMutableDictionary *_conflictResolvers;
}

@property (retain, nonatomic) BCCloudDataSource *globalMetadataDataSource;
@property (retain, nonatomic) BCCloudDataSyncManager *syncManager;
@property (retain, nonatomic) BCCloudDataManager *dataManager;
@property (retain, nonatomic) NSManagedObjectModel *objectModel;
@property (retain, nonatomic) BCCloudChangeTokenController *changeTokenController;
@property (retain, nonatomic) NSMutableDictionary *conflictResolvers;
@property (nonatomic) _Bool enableCloudSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;

- (id)init;
- (id)entityName;
- (void)currentCloudSyncVersions:(CDUnknownBlockType)arg1;
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;
- (void)signalSyncToCKForSyncManager:(id)arg1;
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 fetchedAllRecordsInZone:(id)arg2;
- (void)updateSyncGenerationFromCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCloudDataSource:(id)arg1;
- (void)removeMetadataForSaltedHashedRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)metadatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMetadatum:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteMetadatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)metadatumIncludingDeleted:(_Bool)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMetadataIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMetadataChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolvedMetadataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)metadataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setConflictResolver:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)removeConflictResolverForKey:(id)arg1;

@end
