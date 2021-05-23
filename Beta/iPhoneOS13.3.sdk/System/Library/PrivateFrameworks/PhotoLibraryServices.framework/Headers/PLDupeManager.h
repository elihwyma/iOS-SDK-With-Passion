/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, PLPhotoLibrary;

@interface PLDupeManager : NSObject

{
    NSMutableArray *_normalAssetsObjectIDsToAnalyze;
    NSMutableDictionary *_cloudAssetsToAnalyze;
    NSMutableArray *_assetsWithUpdatedVisibility;
    _Bool _doneWithCloudAssets;
    _Bool _isRebuilding;
    NSMutableSet *_normalInserts;
    NSMutableSet *_cloudInserts;
    PLPhotoLibrary *_photoLibrary;
    NSCountedSet *_pauseReasons;
    NSSet *_softPauseReasons;
    double _rebuildStartTime;
}

@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;

+ (_Bool)_resetDupesAnalysisInManagedObjectContext:(id)arg1 pathManager:(id)arg2;
+ (id)hashForAsset:(id)arg1;
+ (_Bool)_computeHashForAsset:(id)arg1;
+ (void)_setPlaceHolderHashOnAsset:(id)arg1;
+ (_Bool)resetDupesAnalysisForOfflineStore:(id)arg1 pathManager:(id)arg2;
+ (id)_hashForFileAtPath:(id)arg1 utiType:(id)arg2;
+ (id)placeholderHash;

- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)resetDupesAnalysis;
- (short)_computeCloudAssetHashesForManagedObjectContext:(id)arg1;
- (void)_noteAssetVisibilityDidChange:(id)arg1;
- (void)_updateVisibilityState:(short)arg1 forAsset:(id)arg2;
- (_Bool)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg1;
- (id)_duplicateCloudAssetForHash:(id)arg1 orPublicGlobalUUID:(id)arg2;
- (void)_removeCloudAssetFromAnalysis:(id)arg1;
- (void)_analyzeDupeForNormalAsset:(id)arg1;
- (short)_analyzeNormalAssetsForManagedObjectContext:(id)arg1;
- (short)_computeAssetHashesForManagedObjectContext:(id)arg1;
- (short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg1;
- (void)_performAnalysisTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_continueAnalysisForRebuild;
- (void)_continueAnalysisForRebuildOrPause;
- (void)_analyzeDupesForRebuild;
- (short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg1;
- (_Bool)_analyzeDupeForCloudAssetsAndHashes:(id)arg1 andPublicGlobalUUIDs:(id)arg2 forManagedObjectContext:(id)arg3;
- (short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg1;
- (void)_continueAnalysis;
- (void)_analyzeDupes;
- (void)analyzeDupesWithNormalInserts:(id)arg1 cloudInserts:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)launchDupeAnalysisIfNeeded;
- (void)persistPublicGlobalUUIDsForAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resetSoftPauseReasons;
- (void)pauseAnalysisWithReason:(id)arg1;
- (void)resumeAnalysisWithReason:(id)arg1;

@end
