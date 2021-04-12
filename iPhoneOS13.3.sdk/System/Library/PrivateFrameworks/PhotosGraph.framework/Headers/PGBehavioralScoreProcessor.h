//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, PGGraph;

@interface PGBehavioralScoreProcessor : NSObject
{
    PGGraph *_graph;
    NSSet *_previousGoldAssetUUIDs;
    long long _algorithm;
    NSDictionary *_algorithmData;
}

+ (id)assetPropertySetsForUserBehavioralProcessing;
@property(retain, nonatomic) NSDictionary *algorithmData; // @synthesize algorithmData=_algorithmData;
@property(nonatomic) long long algorithm; // @synthesize algorithm=_algorithm;
@property(retain, nonatomic) NSSet *previousGoldAssetUUIDs; // @synthesize previousGoldAssetUUIDs=_previousGoldAssetUUIDs;
@property(retain, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
// - (void).cxx_destruct;
- (float)semanticScoreFromBehavioralScore:(float)arg1;
- (float)behavioralScoreFromBaseScore:(float)arg1 semanticScore:(float)arg2;
- (id)behavioralScoreByAssetUUIDForAssets:(id)arg1 algorithmProcessor:(id)arg2 personalHighAestheticsThreshold:(double)arg3 personalGoodAestheticsThreshold:(double)arg4;
- (id)_behavioralProcessorForAlgorithm:(long long)arg1 goldAssets:(id)arg2 graph:(id)arg3 persistedData:(id)arg4;
- (id)_newBehavioralProcessorForAlgorithm:(long long)arg1 goldAssets:(id)arg2 graph:(id)arg3;
- (BOOL)needBehavioralScoreReprocessingUsingCurrentGoldAssetsUUIDs:(id)arg1 previousGoldAssetUUIDs:(id)arg2;
- (void)_writeBehavioralScoresToPhotosDatabase:(id)arg1 assets:(id)arg2;
- (void)processBehavioralScoresWithProgressBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_persistNewGoldAssetsUUIDs:(id)arg1 processorData:(id)arg2;
- (id)sceneFeatures;
- (id)peopleFeatures;
- (id)goldAssetUUIDs;
- (id)_previousResults;
- (id)initWithGraphManager:(id)arg1 algorithm:(long long)arg2;

@end

