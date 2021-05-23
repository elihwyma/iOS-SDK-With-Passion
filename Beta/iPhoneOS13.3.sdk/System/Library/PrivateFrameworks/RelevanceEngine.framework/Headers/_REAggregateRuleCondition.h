/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RECondition.h>

@class NSSet;

@interface _REAggregateRuleCondition : RECondition

{
    unsigned long long _type;
    NSSet *_conditions;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSSet *conditions;
@property (nonatomic, readonly) unsigned long long count;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_notCondition;
- (_Bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id *)arg3;
- (id)_inflectionFeatureValuePairs;
- (id)_dependentFeatures;
- (_Bool)_requiresTwoFeatures;
- (_Bool)_validForRanking;
- (_Bool)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2;
- (_Bool)_needsProbability;
- (id)initWithConditions:(id)arg1 type:(unsigned long long)arg2;

@end
