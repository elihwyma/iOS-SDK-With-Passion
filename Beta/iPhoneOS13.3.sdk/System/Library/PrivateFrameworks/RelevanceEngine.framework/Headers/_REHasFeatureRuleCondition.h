/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RECondition.h>

@class REFeature;

@interface _REHasFeatureRuleCondition : RECondition

{
    _Bool _contains;
    REFeature *_feature;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) _Bool contains;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_notCondition;
- (_Bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id *)arg3;
- (id)_inflectionFeatureValuePairs;
- (id)_dependentFeatures;
- (id)initWithFeature:(id)arg1 contains:(_Bool)arg2;

@end
