/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/Swift-Protocol.h>

@protocol PLAssetsdDebugServiceProtocol <Swift>

- (unsigned short)statusWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)asynchronousUnloadImageFilesForAssetWithObjectURI:minimumFormat:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)identifyAssetsWithInconsistentCloudState;
- (unsigned short)recoverAssetsInInconsistentCloudState;
- (unsigned short)momentGenerationStatusWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)rebuildMomentsDeletingExistingMoments:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rebuildHighlightsDeletingExistingHighlights:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)dumpMetadataForMomentsToPath:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)dumpMomentsMetadataToPath:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)deferredLogDumpWithFormat:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)dropSearchIndexWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setSearchIndexPaused:reason:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rebuildSearchIndexWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)rebuildCloudFeedWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetDupesAnalysis;
- (unsigned short)rebuildAllThumbnails;
- (unsigned short)getXPCTransactionStatusWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getCPLStateWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)revertToOriginalWithObjectURI:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)debugSidecarURLsWithObjectURI:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)pruneAssetsWithUUID:resourceTypes:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)prefetchResourcesForMemories:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)prefetchResourcesForHighlights:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)prefetchResourcesWithMode:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)processRecentHighlightsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)processUnprocessedMomentLocationsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)updateHighlightTitlesWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)cleanupEmptyHighlightsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)privateDownloadCloudPhotoLibraryAsset:resourceType:highPriority:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)snapshotJournalsForPayloadClassIDs:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)coalesceJournalsForPayloadClassIDs:withChangeJournalOverThreshold:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSiriVocabulary;

@end
