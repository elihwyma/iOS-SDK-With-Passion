/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class PGManager, PGMoodGeneratorOptions, PGMoodVector, PHAssetCollection;

@interface PGMoodGenerator : NSObject

{
    PHAssetCollection *_assetCollection;
    PGManager *_graphManager;
    unsigned long long _suggestedMood;
    PGMoodVector *_positiveMoodVector;
    PGMoodVector *_negativeMoodVector;
    PGMoodVector *_historyWeightedPositiveMoodVector;
    PGMoodGeneratorOptions *_options;
    double _positiveThreshold;
    double _negativeThreshold;
}

@property (retain) PGMoodGeneratorOptions *options;
@property double positiveThreshold;
@property double negativeThreshold;

- (unsigned long long)suggestedMood;
- (id)historyWeightedPositiveMoodVector;
- (id)negativeMoodVector;
- (id)positiveMoodVector;
- (unsigned long long)forbiddenMoods;
- (unsigned long long)recommendedMoods;
- (id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3;
- (id)_moodSources;
- (void)_processMoodSources;

@end
