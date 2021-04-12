//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERule.h>

#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class REComparisonCondition, RECondition, REConditionEvaluator;

@interface RERankingRule : RERule <REAutomaticExportedInterface>
{
    REConditionEvaluator *_leftConditionEvaluator;
    REConditionEvaluator *_rightConditionEvaluator;
    REConditionEvaluator *_comparisonConditionEvaluator;
    RECondition *_leftCondition;
    RECondition *_rightCondition;
    REComparisonCondition *_comparison;
    long long _order;
}

@property(readonly, nonatomic) long long order; // @synthesize order=_order;
@property(readonly, nonatomic) REComparisonCondition *comparison; // @synthesize comparison=_comparison;
@property(readonly, nonatomic) RECondition *rightCondition; // @synthesize rightCondition=_rightCondition;
@property(readonly, nonatomic) RECondition *leftCondition; // @synthesize leftCondition=_leftCondition;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithLeftCondition:(id)arg1 rightCondition:(id)arg2 comparisonCondition:(id)arg3 order:(long long)arg4;
@property(readonly, nonatomic) REConditionEvaluator *comparisonConditionEvaluator;
@property(readonly, nonatomic) REConditionEvaluator *rightConditionEvaluator;
@property(readonly, nonatomic) REConditionEvaluator *leftConditionEvaluator;

@end

