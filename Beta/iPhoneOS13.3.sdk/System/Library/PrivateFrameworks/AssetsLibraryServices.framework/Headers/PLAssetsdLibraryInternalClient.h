/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdLibraryInternalClient : PLAssetsdBaseClient

- (_Bool)synchronouslyGetSizeOfResourcesToUploadByCPL:(long long *)arg1 error:(id *)arg2;
- (void)waitForSearchIndexExistence:(CDUnknownBlockType)arg1;
- (void)getAssetCountsWithReply:(CDUnknownBlockType)arg1;
- (void)reloadMomentGenerationOptions;
- (void)deleteiTunesSyncedContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)repairMemoriesWithUUIDs:(id)arg1 error:(id *)arg2;
- (void)markPersonAsNeedingKeyFace:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)markAnalysisStatesProcessedForWorkerType:(short)arg1 error:(id *)arg2;
- (_Bool)removeAnalysisRecordsForDeletedAssetsWithUUIDs:(id)arg1 workerType:(short)arg2 error:(id *)arg3;
- (_Bool)resetPendingAnalysisStatesWithError:(id *)arg1;
- (void)applySearchIndexUpdates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)applySearchIndexGraphUpdates:(id)arg1 supportingData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getLibrarySizesFromDB:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)synchronouslyGetLibrarySizesFromDB:(_Bool)arg1 sizes:(id *)arg2 error:(id *)arg3;
- (void)updateAssetLocationDataWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)previewRenderedContentURLCount:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)previewRenderedContentURLAtIndex:(unsigned long long)arg1 previewRenderedContentURL:(id *)arg2 error:(id *)arg3;
- (_Bool)previewAssetLocalIdentifiers:(id *)arg1 error:(id *)arg2;
- (_Bool)synchronouslyMarkPersonAsNeedingKeyFace:(id)arg1 error:(id *)arg2;
- (void)getSearchIndexProgress:(CDUnknownBlockType)arg1;
- (_Bool)setKeywords:(id)arg1 forAssetWithUUID:(id)arg2;
- (_Bool)invalidateReverseLocationDataOnAllAssetsWithError:(id *)arg1;
- (_Bool)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg1 error:(id *)arg2;
- (unsigned long long)getBackgroundJobServiceStateWithError:(id *)arg1;
- (id)getBackgroundJobServiceBundlesInQueueDictionaryWithError:(id *)arg1;
- (_Bool)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet:(id *)arg1;
- (_Bool)invalidateBehavioralScoreOnAllAssetsWithError:(id *)arg1;

@end
