/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

@class NSString, PLAssetsdCPLResourceDownloader, PLPhotoLibraryBundleController;

@interface PLAssetsdDebugService : PLAbstractLibraryServicesManagerService

{
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
    PLPhotoLibraryBundleController *_bundleController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)statusWithReply:(CDUnknownBlockType)arg1;
- (void)asynchronousUnloadImageFilesForAssetWithObjectURI:(id)arg1 minimumFormat:(unsigned short)arg2 reply:(CDUnknownBlockType)arg3;
- (void)identifyAssetsWithInconsistentCloudState;
- (void)recoverAssetsInInconsistentCloudState;
- (void)momentGenerationStatusWithReply:(CDUnknownBlockType)arg1;
- (void)rebuildMomentsDeletingExistingMoments:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rebuildHighlightsDeletingExistingHighlights:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dumpMetadataForMomentsToPath:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dumpMomentsMetadataToPath:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deferredLogDumpWithFormat:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dropSearchIndexWithReply:(CDUnknownBlockType)arg1;
- (void)setSearchIndexPaused:(_Bool)arg1 reason:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)rebuildSearchIndexWithReply:(CDUnknownBlockType)arg1;
- (void)rebuildCloudFeedWithReply:(CDUnknownBlockType)arg1;
- (void)resetDupesAnalysis;
- (void)rebuildAllThumbnails;
- (void)getXPCTransactionStatusWithReply:(CDUnknownBlockType)arg1;
- (void)getCPLStateWithReply:(CDUnknownBlockType)arg1;
- (void)revertToOriginalWithObjectURI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)debugSidecarURLsWithObjectURI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)pruneAssetsWithUUID:(id)arg1 resourceTypes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)prefetchResourcesForMemories:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)prefetchResourcesForHighlights:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)prefetchResourcesWithMode:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)processRecentHighlightsWithReply:(CDUnknownBlockType)arg1;
- (void)processUnprocessedMomentLocationsWithReply:(CDUnknownBlockType)arg1;
- (void)updateHighlightTitlesWithReply:(CDUnknownBlockType)arg1;
- (void)cleanupEmptyHighlightsWithReply:(CDUnknownBlockType)arg1;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)snapshotJournalsForPayloadClassIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 reply:(CDUnknownBlockType)arg3;
- (void)updateSiriVocabulary;
- (id)initWithLibraryServicesManager:(id)arg1 resourceDownloader:(id)arg2 bundleController:(id)arg3;

@end
