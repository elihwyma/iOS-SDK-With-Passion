/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOClientRankingModelFeatureFunction.h>

@interface GEOClientRankingModelFeatureFunctionLinear : GEOClientRankingModelFeatureFunction

{
    float _weight;
    float _maxRelativeValue;
    float _meanValue;
}

@property (nonatomic, readonly) float weight;
@property (nonatomic, readonly) float maxRelativeValue;
@property (nonatomic, readonly) float meanValue;

- (id)init;
- (long long)functionType;
- (id)initWithWeight:(float)arg1 maxRelativeValue:(float)arg2 meanValue:(float)arg3;

@end
