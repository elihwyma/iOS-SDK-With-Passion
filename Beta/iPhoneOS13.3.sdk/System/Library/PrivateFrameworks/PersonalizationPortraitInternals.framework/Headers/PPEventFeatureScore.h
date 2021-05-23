/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PPEventFeatureScore : NSObject

{
    unsigned long long _ocnt_precomputedHash;
    NSArray *_featureValues;
    double _weightedScore;
    unsigned long long _prominentFeature;
}

@property (nonatomic, readonly) NSArray *featureValues;
@property (nonatomic, readonly) double weightedScore;
@property (nonatomic, readonly) unsigned long long prominentFeature;

+ (id)eventFeatureScoreWithFeatureValues:(id)arg1 weightedScore:(double)arg2 prominentFeature:(unsigned long long)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_hash;
- (id)initWithFeatureValues:(id)arg1 weightedScore:(double)arg2 prominentFeature:(unsigned long long)arg3;
- (_Bool)isEqualToEventFeatureScore:(id)arg1;

@end
