/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERule.h>

@class REComparisonCondition, RECondition, REConditionEvaluator;

@interface RERankingRule : RERule

{
    REConditionEvaluator *_leftConditionEvaluator;
    REConditionEvaluator *_rightConditionEvaluator;
    REConditionEvaluator *_comparisonConditionEvaluator;
    RECondition *_leftCondition;
    RECondition *_rightCondition;
    REComparisonCondition *_comparison;
    long long _order;
}

@property (nonatomic, readonly) REConditionEvaluator *leftConditionEvaluator;
@property (nonatomic, readonly) REConditionEvaluator *rightConditionEvaluator;
@property (nonatomic, readonly) REConditionEvaluator *comparisonConditionEvaluator;
@property (nonatomic, readonly) RECondition *leftCondition;
@property (nonatomic, readonly) RECondition *rightCondition;
@property (nonatomic, readonly) REComparisonCondition *comparison;
@property (nonatomic, readonly) long long order;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLeftCondition:(id)arg1 rightCondition:(id)arg2 comparisonCondition:(id)arg3 order:(long long)arg4;

@end
