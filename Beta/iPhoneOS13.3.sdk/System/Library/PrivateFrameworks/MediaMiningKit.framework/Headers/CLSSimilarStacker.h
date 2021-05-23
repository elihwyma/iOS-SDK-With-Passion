/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@interface CLSSimilarStacker : NSObject

{
    long long _algorithm;
    CDUnknownBlockType _sceneprintGetterBlock;
    double _distanceThresholdForIdenticalSimilarity;
    double _distanceThresholdForIdenticalSimilarityWithPeople;
    double _distanceThresholdForSemanticalSimilarity;
    double _distanceThresholdForSemanticalSimilarityWithPeople;
    double _distanceThresholdForSemanticalSimilarityWithPersons;
}

@property (readonly) long long algorithm;
@property (copy, nonatomic) CDUnknownBlockType sceneprintGetterBlock;
@property (nonatomic) double distanceThresholdForIdenticalSimilarity;
@property (nonatomic) double distanceThresholdForIdenticalSimilarityWithPeople;
@property (nonatomic) double distanceThresholdForSemanticalSimilarity;
@property (nonatomic) double distanceThresholdForSemanticalSimilarityWithPeople;
@property (nonatomic) double distanceThresholdForSemanticalSimilarityWithPersons;

+ (CDUnknownBlockType)distanceBlockForAlgorithm:(long long)arg1 sceneprintGetterBlock:(CDUnknownBlockType)arg2;
+ (double)defaultDistanceThresholdForAlgorithm:(long long)arg1 similarity:(long long)arg2;

- (id)legacyStackSimilarItems:(id)arg1 withThreshold:(double)arg2;
- (id)initWithAlgorithm:(long long)arg1;
- (CDUnknownBlockType)similarGroupComparator;
- (id)stackSimilarItems:(id)arg1 withSimilarity:(long long)arg2 timestampSupport:(_Bool)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)adaptiveStackSimilarItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (double)distanceBetweenItem:(id)arg1 andItem:(id)arg2;
- (double)distanceThresholdForSimilarity:(long long)arg1;
- (_Bool)_canUseSceneprintSimilarStackingWithItems:(id)arg1;

@end
