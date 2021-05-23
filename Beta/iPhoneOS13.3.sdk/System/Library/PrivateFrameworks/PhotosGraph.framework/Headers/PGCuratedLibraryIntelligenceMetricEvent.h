/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, PGGraph, PGManager;

@protocol OS_dispatch_semaphore;

@interface PGCuratedLibraryIntelligenceMetricEvent : NSObject

{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSDate *_debugDate;
    NSString *_identifier;
    PGGraph *_graph;
    PGManager *_manager;
    NSDictionary *_payload;
    unsigned long long _librarySize;
    long long _librarySizeRange;
    unsigned long long _numberOfDaysWithPhotosInPastYear;
    unsigned long long _numberOfDayHighlights;
    unsigned long long _numberOfDefaultDayHighlights;
    unsigned long long _numberOfDaysInTrips;
    unsigned long long _numberOfDaysInAggregations;
    double _ratioOfDefaultDays;
    double _ratioOfDaysInTrips;
    double _ratioOfDaysInAggregations;
    unsigned long long _numberOfShortTrips;
    unsigned long long _numberOfLongTrips;
    unsigned long long _numberOfAggregations;
    double _averageNumberOfAssetsInDefaultHighlights;
    double _averageNumberOfAssetsInAggregationHighlights;
    double _averageNumberOfAssetsInTripHighlights;
    double _ratioOfAssetsInDefaultHighlights;
    double _ratioOfAssetsInAggregationHighlights;
    double _ratioOfAssetsInTripHighlights;
    double _ratioOfAssetsWithUtilityCurationScore;
    double _ratioOfAssetsWithDefaultCurationScore;
    double _ratioOfAssetsWithImprovedCurationScore;
    double _ratioOfAssetsWithBetterCurationScore;
    double _personalHighAestheticScore;
    double _personalGoodAestheticScore;
    double _topTierAestheticScore;
    double _topTierAestheticScoreForTripKeyAsset;
    double _ratioOfShinyGemAssets;
    double _ratioOfRegularGemAssets;
    double _ratioOfGoldAssets;
    unsigned long long _numberOfMonthHighlights;
    double _averageNumberOfPromotedHighlightsPerMonth;
    double _averageNumberOfPromotedHighlightsPerMonthPastYear;
    double _averageNumberOfCuratedAssetsPerMonth;
    double _ratioOfCuratedAssetsCoveredInMonth;
    unsigned long long _numberOfYearHighlights;
    double _ratioOfHiddenDayHighlights;
    double _ratioOfCurated1siesAmongVisibleHighlights;
    double _ratioOfCurated2siesAmongVisibleHighlights;
    unsigned long long _numberOfCuratedAssets;
    double _ratioOfCuratedAssets;
    double _ratioOfCuratedAssetsInTrips;
    double _ratioOfCuratedAssetsInDefaultHighlights;
    double _ratioOfCuratedAssetsInAggregations;
    double _ratioOfUtilityAssets;
    double _ratioOfUtilityAssetsInTrips;
    double _ratioOfDedupedAssets;
    double _ratioOfDedupedAssetsInTrips;
    unsigned long long _numberOfMoments;
    double _ratioOfPhotoKeyAssets;
    double _ratioOfAutoplayedPhotoKeyAssets;
    double _ratioOfVideoKeyAssets;
    double _ratioOfAutoplayedVideoKeyAssets;
    double _ratioOfProcessedScenes;
    double _ratioOfProcessedFaces;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) PGManager *manager;
@property (nonatomic) unsigned long long numberOfCuratedAssets;
@property (retain, nonatomic) NSDate *debugDate;
@property (retain, nonatomic) PGGraph *graph;
@property (nonatomic) unsigned long long librarySize;
@property (nonatomic) long long librarySizeRange;
@property (nonatomic) unsigned long long numberOfDaysWithPhotosInPastYear;
@property (nonatomic) unsigned long long numberOfDayHighlights;
@property (nonatomic) unsigned long long numberOfDefaultDayHighlights;
@property (nonatomic) unsigned long long numberOfDaysInAggregations;
@property (nonatomic) unsigned long long numberOfDaysInTrips;
@property (nonatomic) double ratioOfDefaultDays;
@property (nonatomic) double ratioOfDaysInTrips;
@property (nonatomic) double ratioOfDaysInAggregations;
@property (nonatomic) unsigned long long numberOfShortTrips;
@property (nonatomic) unsigned long long numberOfLongTrips;
@property (nonatomic) unsigned long long numberOfAggregations;
@property (nonatomic) double averageNumberOfAssetsInDefaultHighlights;
@property (nonatomic) double averageNumberOfAssetsInAggregationHighlights;
@property (nonatomic) double averageNumberOfAssetsInTripHighlights;
@property (nonatomic) double ratioOfAssetsInDefaultHighlights;
@property (nonatomic) double ratioOfAssetsInAggregationHighlights;
@property (nonatomic) double ratioOfAssetsInTripHighlights;
@property (nonatomic) double ratioOfAssetsWithUtilityCurationScore;
@property (nonatomic) double ratioOfAssetsWithDefaultCurationScore;
@property (nonatomic) double ratioOfAssetsWithImprovedCurationScore;
@property (nonatomic) double ratioOfAssetsWithBetterCurationScore;
@property (nonatomic) double personalHighAestheticScore;
@property (nonatomic) double personalGoodAestheticScore;
@property (nonatomic) double topTierAestheticScore;
@property (nonatomic) double topTierAestheticScoreForTripKeyAsset;
@property (nonatomic) double ratioOfShinyGemAssets;
@property (nonatomic) double ratioOfRegularGemAssets;
@property (nonatomic) double ratioOfGoldAssets;
@property (nonatomic) unsigned long long numberOfMonthHighlights;
@property (nonatomic) double averageNumberOfPromotedHighlightsPerMonth;
@property (nonatomic) double averageNumberOfPromotedHighlightsPerMonthPastYear;
@property (nonatomic) double averageNumberOfCuratedAssetsPerMonth;
@property (nonatomic) double ratioOfCuratedAssetsCoveredInMonth;
@property (nonatomic) unsigned long long numberOfYearHighlights;
@property (nonatomic) double ratioOfHiddenDayHighlights;
@property (nonatomic) double ratioOfCurated1siesAmongVisibleHighlights;
@property (nonatomic) double ratioOfCurated2siesAmongVisibleHighlights;
@property (nonatomic) double ratioOfCuratedAssets;
@property (nonatomic) double ratioOfCuratedAssetsInTrips;
@property (nonatomic) double ratioOfCuratedAssetsInDefaultHighlights;
@property (nonatomic) double ratioOfCuratedAssetsInAggregations;
@property (nonatomic) double ratioOfUtilityAssets;
@property (nonatomic) double ratioOfUtilityAssetsInTrips;
@property (nonatomic) double ratioOfDedupedAssets;
@property (nonatomic) double ratioOfDedupedAssetsInTrips;
@property (nonatomic) unsigned long long numberOfMoments;
@property (nonatomic) double ratioOfPhotoKeyAssets;
@property (nonatomic) double ratioOfAutoplayedPhotoKeyAssets;
@property (nonatomic) double ratioOfVideoKeyAssets;
@property (nonatomic) double ratioOfAutoplayedVideoKeyAssets;
@property (nonatomic) double ratioOfProcessedScenes;
@property (nonatomic) double ratioOfProcessedFaces;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)librarySizeRangeDescriptionForLibrarySizeRange:(long long)arg1;

- (id)_dayHighlights;
- (id)initWithGraphManager:(id)arg1;
- (void)gatherMetricsWithProgressBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)_numberOfDayHighlights;
- (void)_fillGenericStatisticsWithGraph:(id)arg1;
- (void)_fillDayHighlightsStatisticsWithGraph:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2;
- (void)_fillContentScoreStatisticsWithGraph:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2;
- (void)_fillAestheticAndBehavioralCurationStatisticsWithGraph:(id)arg1;
- (void)_fillMonthHighlightsStatisticsWithGraph:(id)arg1;
- (void)_fillYearHighlightsStatisticsWithGraph:(id)arg1;
- (void)_fillHiddenHighlightsStatisticsWithGraph:(id)arg1;
- (void)_fillOnesiesHighlightStatisticsWithGraph:(id)arg1;
- (void)_fillKeyAssetsStatisticsWithGraph:(id)arg1;
- (void)_fillMomentsStatisticsWithGraph:(id)arg1;
- (void)_fillProcessingLevelStatisticsWithGraph:(id)arg1;
- (void)_saveKey:(id)arg1 doubleValue:(double)arg2 payload:(id)arg3;
- (void)_saveKey:(id)arg1 integerValue:(unsigned long long)arg2 payload:(id)arg3;
- (void)_saveKey:(id)arg1 stringValue:(id)arg2 payload:(id)arg3;
- (unsigned long long)_debugNumberOfAssets;
- (id)_assetsStatisticsInHighlights:(id)arg1 photoLibrary:(id)arg2 includeUtility:(_Bool)arg3;
- (id)utilityPredicate;
- (double)_ratioFromNumerator:(unsigned long long)arg1 denominator:(unsigned long long)arg2;
- (id)_defaultHightlights;
- (id)_daysWithinAggregations;
- (id)_aggregationGroups;
- (id)_daysWithinTrips;
- (id)_shortTripDayGroups;
- (id)_longTripDayGroups;

@end
