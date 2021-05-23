/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERule.h>

@class RECondition, REConditionEvaluator;

@interface REFilteringRule : RERule

{
    REConditionEvaluator *_conditionEvaluator;
    RECondition *_condition;
    unsigned long long _type;
}

@property (nonatomic, readonly) REConditionEvaluator *conditionEvaluator;
@property (nonatomic, readonly) RECondition *condition;
@property (nonatomic, readonly) unsigned long long type;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCondition:(id)arg1;
- (id)initWithCondition:(id)arg1 type:(unsigned long long)arg2;

@end
