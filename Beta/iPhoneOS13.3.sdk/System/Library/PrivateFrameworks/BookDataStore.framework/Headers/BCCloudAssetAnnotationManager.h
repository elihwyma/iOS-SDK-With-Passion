/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class BCCloudDataManager, BCCloudDataSource, BCCloudDataSyncManager, BCCloudKitController, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface BCCloudAssetAnnotationManager : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _enableCloudSync;
    BCCloudKitController *_cloudKitController;
    BCCloudDataSource *_annotationsDataSource;
    BCCloudDataSyncManager *_syncManager;
    BCCloudDataManager *_dataManager;
    NSURL *_ckAssetStoreDirectory;
}

@property (weak, nonatomic) BCCloudKitController *cloudKitController;
@property (retain, nonatomic) BCCloudDataSource *annotationsDataSource;
@property (retain, nonatomic) BCCloudDataSyncManager *syncManager;
@property (retain, nonatomic) BCCloudDataManager *dataManager;
@property (retain, nonatomic) NSURL *ckAssetStoreDirectory;
@property (nonatomic) _Bool enableCloudSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)entityName;
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;
- (void)signalSyncToCKForSyncManager:(id)arg1;
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assetWithID:(id)arg1 updatedAnnotations:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fileURLForCachingCKAssetWithAssetID:(id)arg1;
- (void)getAnnotationChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCloudDataSource:(id)arg1 cloudKitController:(id)arg2;

@end
