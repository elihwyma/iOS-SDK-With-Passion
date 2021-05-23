/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, PGGraph;

@interface PGBehavioralScoreProcessor : NSObject

{
    PGGraph *_graph;
    NSSet *_previousGoldAssetUUIDs;
    long long _algorithm;
    NSDictionary *_algorithmData;
}

@property (retain, nonatomic) PGGraph *graph;
@property (retain, nonatomic) NSSet *previousGoldAssetUUIDs;
@property (nonatomic) long long algorithm;
@property (retain, nonatomic) NSDictionary *algorithmData;

+ (id)assetPropertySetsForUserBehavioralProcessing;

- (float)semanticScoreFromBehavioralScore:(float)arg1;
- (id)_previousResults;
- (id)goldAssetUUIDs;
- (id)sceneFeatures;
- (id)initWithGraphManager:(id)arg1 algorithm:(long long)arg2;
- (id)peopleFeatures;
- (void)_persistNewGoldAssetsUUIDs:(id)arg1 processorData:(id)arg2;
- (void)processBehavioralScoresWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)_writeBehavioralScoresToPhotosDatabase:(id)arg1 assets:(id)arg2;
- (_Bool)needBehavioralScoreReprocessingUsingCurrentGoldAssetsUUIDs:(id)arg1 previousGoldAssetUUIDs:(id)arg2;
- (id)_newBehavioralProcessorForAlgorithm:(long long)arg1 goldAssets:(id)arg2 graph:(id)arg3;
- (id)_behavioralProcessorForAlgorithm:(long long)arg1 goldAssets:(id)arg2 graph:(id)arg3 persistedData:(id)arg4;
- (id)behavioralScoreByAssetUUIDForAssets:(id)arg1 algorithmProcessor:(id)arg2 personalHighAestheticsThreshold:(double)arg3 personalGoodAestheticsThreshold:(double)arg4;
- (float)behavioralScoreFromBaseScore:(float)arg1 semanticScore:(float)arg2;

@end
