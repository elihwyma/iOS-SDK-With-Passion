/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdDebugClient : PLAssetsdBaseClient

- (id)getCPLState;
- (void)identifyAssetsWithInconsistentCloudState;
- (void)recoverAssetsInInconsistentCloudState;
- (void)resetDupesAnalysis;
- (void)rebuildAllThumbnails;
- (void)updateSiriVocabulary;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)snapshotJournalsForPayloadClassIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)momentGenerationStatus;
- (_Bool)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithError:(id *)arg1;
- (_Bool)cleanupEmptyHighlightsWithError:(id *)arg1;
- (_Bool)updateHighlightTitlesWithError:(id *)arg1;
- (_Bool)processUnprocessedMomentLocationsWithError:(id *)arg1;
- (_Bool)processRecentHighlightsWithError:(id *)arg1;
- (id)getStatus;
- (void)unloadImageFilesForAsset:(id)arg1 minimumFormat:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)rebuildMomentsDeletingExistingMoments:(_Bool)arg1 error:(id *)arg2;
- (_Bool)rebuildHighlightsDeletingExistingHighlights:(_Bool)arg1 error:(id *)arg2;
- (_Bool)dumpMetadataForMomentsWithOutputPath:(id)arg1 metadataDirectory:(id *)arg2 error:(id *)arg3;
- (_Bool)allMomentsMetadataWithOutputPath:(id)arg1 metadataDictionary:(id *)arg2 error:(id *)arg3;
- (id)deferredLogDumpWithFormat:(id)arg1;
- (void)dropSearchIndexWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setSearchIndexPaused:(_Bool)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)synchronouslySetSearchIndexPaused:(_Bool)arg1 reason:(id)arg2 error:(id *)arg3;
- (_Bool)rebuildSearchIndexWithError:(id *)arg1;
- (void)rebuildCloudFeed;
- (id)getXPCTransactionStatus;
- (_Bool)revertToOriginalForAsset:(id)arg1 error:(id *)arg2;
- (_Bool)debugSidecarFileURLsForAsset:(id)arg1 debugSidecarFileURLs:(id *)arg2 error:(id *)arg3;
- (void)pruneAssets:(id)arg1 resourceTypes:(id)arg2;
- (void)prefetchResourcesForMemories:(id)arg1;
- (void)prefetchResourcesForHighlights:(id)arg1;
- (void)prefetchResourcesWithMode:(long long)arg1;

@end
