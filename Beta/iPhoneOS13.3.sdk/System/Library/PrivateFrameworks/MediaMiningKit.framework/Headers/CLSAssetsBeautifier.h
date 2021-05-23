/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSSimilarStacker, NSSet;

@interface CLSAssetsBeautifier : NSObject

{
    _Bool _enableStatisticalSampling;
    _Bool _enableNetworkAccess;
    _Bool _enableIntermediateNaturalClustering;
    _Bool _enableFinalNaturalClustering;
    _Bool _enableFinalTimeClustering;
    _Bool _usesVision;
    CLSSimilarStacker *_similarStacker;
    _Bool _usesKMeans;
    NSSet *_identifiersOfRequiredItems;
}

@property (nonatomic) _Bool enableStatisticalSampling;
@property (nonatomic) _Bool enableNetworkAccess;
@property (nonatomic) _Bool enableIntermediateNaturalClustering;
@property (nonatomic) _Bool enableFinalNaturalClustering;
@property (nonatomic) _Bool enableFinalTimeClustering;
@property (nonatomic) _Bool usesVision;
@property (nonatomic) _Bool usesKMeans;
@property (copy, nonatomic) NSSet *identifiersOfRequiredItems;

+ (id)beautifier;

- (id)init;
- (CDUnknownBlockType)hierarchicalClusteringDistanceBlock;
- (CDUnknownBlockType)timeClusteringDistanceBlock;
- (id)sampledItemsInSortedItems:(id)arg1 maximumNumberOfItemsToChoose:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)performWithItems:(id)arg1 maximumNumberOfItemsToChoose:(unsigned long long)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)performWithItems:(id)arg1 maximumNumberOfItemsToChoose:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)deduplicateItems:(id)arg1 debugInfo:(id)arg2;
- (id)deduplicateItems:(id)arg1 withDuration:(double)arg2 andSimilarity:(long long)arg3 debugInfo:(id)arg4;
- (id)_clustersBySplittingZeroDiameterClustersInClusters:(id)arg1 targetingNumberOfClusters:(unsigned long long)arg2;
- (id)sortedItemsWithItems:(id)arg1;
- (id)bestItemInItems:(id)arg1;
- (id)_naturalClusteringBestItemInItems:(id)arg1;
- (id)_naturalClusteringWithItems:(id)arg1 withSimilarity:(long long)arg2 timestampSupport:(_Bool)arg3 debugInfo:(id)arg4;
- (id)rankSimilarItems:(id)arg1;
- (_Bool)itemIsRequired:(id)arg1;
- (id)requiredItemsInItems:(id)arg1;

@end
