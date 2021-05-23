/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RECondition.h>

@class NSString, REFeature;

@interface _REProbabilityRuleCondition : RECondition

{
    float _threshold;
    NSString *_interaction;
    REFeature *_feature;
    long long _relation;
}

@property (nonatomic, readonly) NSString *interaction;
@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) long long relation;
@property (nonatomic, readonly) float threshold;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_notCondition;
- (_Bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id *)arg3;
- (id)_inflectionFeatureValuePairs;
- (id)_dependentFeatures;
- (_Bool)_needsProbability;
- (id)initWithProbability:(id)arg1 relation:(long long)arg2 feature:(id)arg3 threshold:(float)arg4;

@end
