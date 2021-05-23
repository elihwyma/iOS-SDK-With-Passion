/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDateInterval, NSMutableSet, PLDateRangeTitleGenerator, PLFrequentLocationManager, PLHighlightHierarchy, PLLocalCreationDateCreator, PLPhotosHighlightClusterGenerator;

@protocol PLMomentGenerationDataManagement><PLHighlightItemModelReader;

@interface PLPhotosHighlightGenerator : NSObject

{
    _Bool _didCallBeginGeneration;
    NSDateInterval *_recentHighlightsDateInterval;
    PLFrequentLocationManager *_frequentLocationManager;
    PLLocalCreationDateCreator *_localCreationDateCreator;
    PLDateRangeTitleGenerator *_dateRangeTitleGenerator;
    PLHighlightHierarchy *_entitiesToUpdate;
    NSMutableSet *_highlightsWithDeletedAssets;
    NSMutableSet *_upsertedHighlights;
    NSMutableSet *_highlightsToDelete;
    id <PLMomentGenerationDataManagement><PLHighlightItemModelReader> _dataManager;
    NSMutableSet *_highlightsNeedingNewKeyAsset;
}

@property (retain, nonatomic) PLHighlightHierarchy *entitiesToUpdate;
@property (retain, nonatomic) NSMutableSet *highlightsWithDeletedAssets;
@property (retain, nonatomic) NSMutableSet *upsertedHighlights;
@property (retain, nonatomic) NSMutableSet *highlightsToDelete;
@property (nonatomic) _Bool didCallBeginGeneration;
@property (weak, nonatomic) id <PLMomentGenerationDataManagement><PLHighlightItemModelReader> dataManager;
@property (nonatomic, readonly) NSDateInterval *recentHighlightsDateInterval;
@property (nonatomic, readonly) PLPhotosHighlightClusterGenerator *highlightClusterGeneratorForAllMoments;
@property (retain, nonatomic) NSMutableSet *highlightsNeedingNewKeyAsset;
@property (nonatomic, readonly) PLFrequentLocationManager *frequentLocationManager;
@property (nonatomic, readonly) PLLocalCreationDateCreator *localCreationDateCreator;
@property (nonatomic, readonly) PLDateRangeTitleGenerator *dateRangeTitleGenerator;

+ (void)initialize;
+ (id)userDefaults;
+ (id)_provisionalKeyAssetForDayHighlight:(id)arg1;
+ (id)_provisionalKeyAssetForDayGroupHighlight:(id)arg1;
+ (id)_provisionalKeyAssetForMonthAndYearHighlight:(id)arg1;
+ (id)_bestAssetInAssets:(id)arg1 fallback:(_Bool)arg2;
+ (double)curationScoreForAsset:(id)arg1;
+ (void)updateKeyAssetForHighlights:(id)arg1;
+ (_Bool)assetEligibleForCuration:(id)arg1;
+ (_Bool)_shouldUpdateKeyAssetForParentHighlight:(id)arg1 withKeyAssetObjectID:(id)arg2;
+ (void)_updateParentHighlighNeedingNewKeyAsset:(id)arg1 withProvisionalKeyAsset:(id)arg2 updatedHighlights:(id)arg3;
+ (id)provisionalKeyAssetForHighlight:(id)arg1;
+ (_Bool)assetEligibleForRecents:(id)arg1;
+ (void)updateTitleForHighlights:(id)arg1 forKind:(unsigned short)arg2 forceUpdateLocale:(_Bool)arg3 dateRangeTitleGenerator:(id)arg4;

- (id)initWithDataManager:(id)arg1 frequentLocationManager:(id)arg2 localCreationDateCreator:(id)arg3;
- (void)_resetProperties;
- (void)beginGenerationWithAssets:(id)arg1 hiddenAssets:(id)arg2;
- (void)registerHighlightsWithDeletedMoments:(id)arg1;
- (void)generateHighlightsForUpsertedMoments:(id)arg1 frequentLocationsDidChange:(_Bool)arg2;
- (id)_highlightToReuseForMoments:(id)arg1;
- (void)_insertDayPhotosHighlightCluster:(id)arg1;
- (id)_insertDayGroupPhotosHighlightCluster:(id)arg1;
- (_Bool)_updateHighlightProperties:(id)arg1 fromHighlightCluster:(id)arg2;
- (id)_titleForAggregationDayGroupHighlight:(id)arg1;
- (void)finishGeneration;
- (void)processRecentHighlights;
- (void)processUnprocessedMomentLocations;
- (void)updateHighlightTitles;
- (void)cleanupEmptyHighlights;
- (id)_fetchAllMoments;
- (id)_fetchMomentsWithLocationTypeUnprocessed;
- (id)_fetchMomentsRequiringLocationProcessingWhenFrequentLocationsChanged;
- (id)_lastHighlightTitlesUpdateDay;
- (void)_setLastHighlightTitlesUpdateDay:(id)arg1;
- (id)_highlightMomentClustersForMoments:(id)arg1 excludingMomentIds:(id)arg2;
- (id)_collectMomentsRequiringReprocessingFromMoments:(id)arg1 withAllMoments:(id)arg2;
- (void)_updateDayHighlight:(id)arg1 withNewAssets:(id)arg2;
- (void)resetDayGroupCurationForAsset:(id)arg1;
- (void)updateCurationForHighlight:(id)arg1 withAssetsBelongingToCuration:(id)arg2;
- (_Bool)setDefaultVisibilityStateForHighlight:(id)arg1 withHighlightCluster:(id)arg2;
- (_Bool)_highlightTypeSupportsVisibilityStateDayOnly:(unsigned short)arg1;
- (void)updateHighlightNeedingNewKeyAssetsWithAsset:(id)arg1;
- (void)_updateDayGroupHighlight:(id)arg1 withNewAssets:(id)arg2;
- (id)fetchAllRecentHighlights;
- (void)updateRecentHighlightCurationForHighlight:(id)arg1;
- (void)resetPreviousRecentHighlightCurationForHighlight:(id)arg1;
- (void)generateHighlightListForUpdatedHighlights:(id)arg1 deletedHighlights:(id)arg2;
- (void)_consumeHighlightItemListChanges:(id)arg1 forKind:(unsigned short)arg2 rule:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (id)updateElectedEventForUpdatedMonths:(id)arg1;

@end
