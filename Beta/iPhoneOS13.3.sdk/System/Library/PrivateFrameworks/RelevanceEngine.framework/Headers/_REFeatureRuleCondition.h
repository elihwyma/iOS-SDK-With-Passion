/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RECondition.h>

@class REFeature;

@interface _REFeatureRuleCondition : RECondition

{
    REFeature *_firstFeature;
    long long _relation;
    REFeature *_secondFeature;
}

@property (nonatomic, readonly) REFeature *firstFeature;
@property (nonatomic, readonly) long long relation;
@property (nonatomic, readonly) REFeature *secondFeature;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_notCondition;
- (_Bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id *)arg3;
- (id)_inflectionFeatureValuePairs;
- (id)_dependentFeatures;
- (id)initWithFeature:(id)arg1 relation:(long long)arg2 feature:(id)arg3;
- (_Bool)_requiresTwoFeatures;

@end
