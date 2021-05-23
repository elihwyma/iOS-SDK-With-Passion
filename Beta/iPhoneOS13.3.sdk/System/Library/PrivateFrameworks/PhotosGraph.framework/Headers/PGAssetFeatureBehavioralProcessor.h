/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, PGGraph;

@interface PGAssetFeatureBehavioralProcessor : NSObject

{
    PGGraph *_graph;
    NSSet *_goldAssets;
    NSDictionary *_personFeatures;
    NSDictionary *_sceneFeatures;
    double _similarityScoreNormalizer;
}

@property (retain, nonatomic) NSDictionary *personFeatures;
@property (retain, nonatomic) NSDictionary *sceneFeatures;
@property (retain, nonatomic) PGGraph *graph;
@property (retain, nonatomic) NSSet *goldAssets;
@property (nonatomic) double similarityScoreNormalizer;

- (id)initWithGoldAssets:(id)arg1 graph:(id)arg2;
- (id)initWithGoldAssets:(id)arg1 graph:(id)arg2 persistedData:(id)arg3;
- (void)preprocessWithProgressBlock:(CDUnknownBlockType)arg1;
- (float)semanticScoreForAsset:(id)arg1;
- (id)semanticScoreByAssetUUIDForAssets:(id)arg1;
- (id)dataToPersist;
- (id)_semanticScoreByAssetUUIDForAssets:(id)arg1 normalize:(_Bool)arg2;
- (void)personAndSceneFeaturesFromGoldAssetsUsingBlock:(CDUnknownBlockType)arg1;

@end
