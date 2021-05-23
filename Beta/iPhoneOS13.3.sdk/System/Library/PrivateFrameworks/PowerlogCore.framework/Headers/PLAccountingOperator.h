/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSMutableDictionary, NSSet;

@interface PLAccountingOperator

{
    NSSet *_rules;
    NSMutableDictionary *_ruleIDToPendingJobs;
}

@property (retain, nonatomic) NSSet *rules;
@property (retain) NSMutableDictionary *ruleIDToPendingJobs;

+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionPowerEvents;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryAggregateDefinitionQualificationEnergy;

- (id)init;
- (void)initOperatorDependancies;
- (id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2;
- (void)startAccounting;
- (void)stopAccounting;

@end
