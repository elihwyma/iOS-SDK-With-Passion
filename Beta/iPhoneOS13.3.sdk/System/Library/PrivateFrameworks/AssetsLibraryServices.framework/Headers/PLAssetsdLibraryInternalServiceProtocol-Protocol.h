/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/Swift-Protocol.h>

@protocol PLAssetsdLibraryInternalServiceProtocol <Swift>

- (unsigned short)getAssetCountsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getLibrarySizesFromDB:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getSizeOfResourcesToUploadByCPLWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAssetLocationDataWithUUID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)previewRenderedContentURLCountWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)previewRenderedContentURLAtIndex:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)previewAssetLocalIdentifiersWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)repairMemoriesWithUUIDs:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadMomentGenerationOptions;
- (unsigned short)removeAnalysisRecordsForDeletedAssetsWithUUIDs:workerType: /* Error: Ran out of types for this method. */;
- (unsigned short)markAnalysisStatesProcessedForWorkerType:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetPendingAnalysisStatesWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)markPersonAsNeedingKeyFaceWithPersonUUID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getSearchIndexProgressWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)waitForSearchIndexExistenceWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)applySearchIndexUpdates:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)applyGraphUpdates:supportingData:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setAssetKeywords:forAssetUUID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateReverseLocationDataOnAllAssetsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)registerBackgroundJobServiceIfNecessaryOnLibraryPath:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getBackgroundJobServiceStateWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getBackgroundJobServiceBundlesInQueueDictionaryWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;
- (unsigned short)deleteiTunesSyncedContentWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateBehavioralScoreOnAllAssetsWithReply: /* Error: Ran out of types for this method. */;

@end
