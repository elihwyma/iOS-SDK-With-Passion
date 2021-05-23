/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

@class NSString;

@interface PLAssetsdLibraryInternalService : PLAbstractLibraryServicesManagerService

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)getAssetCountsWithReply:(CDUnknownBlockType)arg1;
- (void)getLibrarySizesFromDB:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getSizeOfResourcesToUploadByCPLWithReply:(CDUnknownBlockType)arg1;
- (void)updateAssetLocationDataWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)previewRenderedContentURLCountWithReply:(CDUnknownBlockType)arg1;
- (void)previewRenderedContentURLAtIndex:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)previewAssetLocalIdentifiersWithReply:(CDUnknownBlockType)arg1;
- (void)repairMemoriesWithUUIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)reloadMomentGenerationOptions;
- (void)removeAnalysisRecordsForDeletedAssetsWithUUIDs:(id)arg1 workerType:(unsigned long long)arg2;
- (void)markAnalysisStatesProcessedForWorkerType:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetPendingAnalysisStatesWithReply:(CDUnknownBlockType)arg1;
- (void)markPersonAsNeedingKeyFaceWithPersonUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getSearchIndexProgressWithReply:(CDUnknownBlockType)arg1;
- (void)waitForSearchIndexExistenceWithReply:(CDUnknownBlockType)arg1;
- (void)applySearchIndexUpdates:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)applyGraphUpdates:(id)arg1 supportingData:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setAssetKeywords:(id)arg1 forAssetUUID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)invalidateReverseLocationDataOnAllAssetsWithReply:(CDUnknownBlockType)arg1;
- (void)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getBackgroundJobServiceStateWithReply:(CDUnknownBlockType)arg1;
- (void)getBackgroundJobServiceBundlesInQueueDictionaryWithReply:(CDUnknownBlockType)arg1;
- (void)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;
- (void)deleteiTunesSyncedContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateBehavioralScoreOnAllAssetsWithReply:(CDUnknownBlockType)arg1;

@end
