/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, PLFrequentLocationManager, PLLocalCreationDateCreator;

@protocol OS_dispatch_queue, PLMomentGenerationDataManagement><PLHighlightItemModelReader;

@interface PLMomentGeneration : NSObject

{
    _Bool _isGenerationPassInProgress;
    unsigned long long _inProgressCount;
    NSMutableOrderedSet *_pendingInsertsAndUpdates;
    NSMutableDictionary *_pendingDeletes;
    NSMutableOrderedSet *_pendingUpdatesForHighlights;
    NSMutableOrderedSet *_pendingMomentUpdatesForHighlights;
    NSMutableArray *_pendingCompletionBlocks;
    NSObject<OS_dispatch_queue> *_incrementalGenerationStateQueue;
    PLFrequentLocationManager *_frequentLocationManager;
    PLLocalCreationDateCreator *_localCreationDateCreator;
    id <PLMomentGenerationDataManagement><PLHighlightItemModelReader> _momentGenerationDataManager;
}

@property (weak, nonatomic, readonly) id <PLMomentGenerationDataManagement><PLHighlightItemModelReader> momentGenerationDataManager;

+ (id)dateIntervalsAroundSortedDates:(id)arg1 minimumIntervalDuration:(double)arg2;

- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithMomentGenerationDataManager:(id)arg1;
- (_Bool)isGenerationPassInProgress;
- (void)_updateIncrementalMomentGeneration;
- (id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)arg1;
- (_Bool)_isAsset:(id)arg1 identicalToAssetForMoments:(id)arg2;
- (void)saveChangesForAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2 assetUpdatesForHighlights:(id)arg3 momentUpdatesForHighlights:(id)arg4;
- (void)generateWithAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2 assetUpdatesForHighlights:(id)arg3 momentUpdatesForHighlights:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)generateWithIncrementalDataCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_runIncrementalGenerationPassWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_highlightGenerator;
- (void)_runMomentAndHighlightGenerationForAssets:(id)arg1 hiddenAssets:(id)arg2 updatedAssetIDsForHighlights:(id)arg3 updatedMomentIDsForHighlights:(id)arg4 affectedMoments:(id)arg5 highlightsWithDeletedMoments:(id)arg6 insertedOrUpdatedMoments:(id *)arg7;
- (void)rebuildAllMomentsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rebuildAllHighlightsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processRecentHighlightsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)processUnprocessedMomentLocationsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateHighlightTitlesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cleanupEmptyHighlightsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithForceUpdateLocale:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)momentGenerationStatus;
- (_Bool)_writeDetails:(id)arg1 toFilepath:(id)arg2 withDefaultFilename:(id)arg3;
- (id)_detailsForAsset:(id)arg1 simpleOnly:(_Bool)arg2;
- (void)_clearReplayLog;
- (void)_appendAssetsToReplayLog:(id)arg1 forBatchUpdate:(_Bool)arg2;
- (id)_logEntryForAssets:(id)arg1 isBatchUpdate:(_Bool)arg2;
- (id)allAssetMetadataWriteToFile:(id)arg1;
- (id)_detailsForMoment:(id)arg1;
- (id)allMomentsMetadataWriteToFile:(id)arg1;
- (void)validateLibraryWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)rebuildAllMomentsWithManager:(id)arg1 error:(id *)arg2;

@end
