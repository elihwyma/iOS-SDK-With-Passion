/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMeaningfulEventSetTrait.h>

@interface PGMeaningfulEventSceneSetTrait : PGMeaningfulEventSetTrait

{
    _Bool _accumulateHighConfidenceAssetCounts;
    unsigned long long _minimumNumberOfHighConfidenceAssets;
    unsigned long long _minimumNumberOfNegativeHighConfidenceAssets;
    double _minimumRatioOfHighConfidenceAssets;
}

@property (nonatomic) unsigned long long minimumNumberOfHighConfidenceAssets;
@property (nonatomic) unsigned long long minimumNumberOfNegativeHighConfidenceAssets;
@property (nonatomic) double minimumRatioOfHighConfidenceAssets;
@property (nonatomic) _Bool accumulateHighConfidenceAssetCounts;

- (id)initWithNodes:(id)arg1;
- (id)debugDescriptionWithMomentNode:(id)arg1;
- (id)initWithNodes:(id)arg1 negativeNodes:(id)arg2;

@end
