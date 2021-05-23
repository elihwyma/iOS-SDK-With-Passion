/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate, NSDictionary;

@interface PGMeaningfulEventAggregationMemoryGenerator : PGFeaturedMemoryGenerator

{
    unsigned long long _numberOfUntimelyRejects;
    unsigned long long _extendedMeaning;
    NSDictionary *_graphRequiredCriteriaByIdentifier;
    NSDate *_lowerBoundLocalDate;
    unsigned long long _eventType;
    unsigned long long _meaning;
}

@property (retain, nonatomic) NSDate *lowerBoundLocalDate;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long meaning;

+ (id)_mostSpecificLabelForMeaning:(unsigned long long)arg1;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)_nodesWithFeaturesOfType:(unsigned long long)arg1 fromMeaningfulEvent:(id)arg2;
- (id)_extraFeatureNodesFromMeaningfulEvent:(id)arg1 meaning:(unsigned long long)arg2 featureType:(unsigned long long)arg3;
- (unsigned long long)_extendedMeaningForMeaning:(unsigned long long)arg1 meaningfulEvent:(id)arg2;
- (unsigned long long)_extendedMeaningForRestaurantEvent:(id)arg1;
- (unsigned long long)_extendedMeaningForActivityEvent:(id)arg1;
- (_Bool)_supportsAggregationsForMeaning:(unsigned long long)arg1 primaryFeatureType:(unsigned long long)arg2 secondaryFeatureType:(unsigned long long)arg3;
- (id)_stringForExtendedMeaning:(unsigned long long)arg1;
- (_Bool)_canMakeMemoryWithMeaningfulEvents:(id)arg1 forMeaning:(unsigned long long)arg2 isOverTheYears:(_Bool)arg3;
- (id)_potentialOverTheYearsMemoriesForMeaning:(unsigned long long)arg1;
- (id)_expandedPotentialMemoriesFromPotentialMemory:(id)arg1;
- (_Bool)_computeRelevantAssetsForPotentialMemory:(id)arg1;
- (id)_filterAssets:(id)arg1 withLocation:(id)arg2;
- (id)_filterAssets:(id)arg1 withPositiveLocations:(id)arg2 negativeLocations:(id)arg3 maximumDistance:(double)arg4;
- (id)_filterAssets:(id)arg1 inMomentNode:(id)arg2 forCityNode:(id)arg3;
- (id)_filterAssets:(id)arg1 inMomentNode:(id)arg2 forAreaNode:(id)arg3;

@end
