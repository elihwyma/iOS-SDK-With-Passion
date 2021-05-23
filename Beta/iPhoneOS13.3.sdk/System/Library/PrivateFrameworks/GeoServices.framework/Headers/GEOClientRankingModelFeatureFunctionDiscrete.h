/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOClientRankingModelFeatureFunction.h>

@interface GEOClientRankingModelFeatureFunctionDiscrete : GEOClientRankingModelFeatureFunction

{
    float _valueThresholdLow;
    float _weightLow;
    float _valueThresholdHigh;
    float _weightHigh;
}

@property (nonatomic, readonly) float valueThresholdLow;
@property (nonatomic, readonly) float weightLow;
@property (nonatomic, readonly) float valueThresholdHigh;
@property (nonatomic, readonly) float weightHigh;

- (id)init;
- (long long)functionType;
- (id)initWithValueThresholdLow:(float)arg1 weightLow:(float)arg2 valueThresholdHigh:(float)arg3 weightHigh:(float)arg4;

@end
