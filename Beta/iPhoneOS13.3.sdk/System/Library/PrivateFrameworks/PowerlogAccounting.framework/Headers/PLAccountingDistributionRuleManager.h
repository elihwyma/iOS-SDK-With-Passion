/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingRuleManager.h>

@class NSMutableDictionary, NSRegularExpression;

@interface PLAccountingDistributionRuleManager : PLAccountingRuleManager

{
    NSRegularExpression *_regex;
    NSMutableDictionary *_rootNodeIDToNodeIDToDistributionRule;
    NSMutableDictionary *_distributionIDToDistributionRules;
}

@property (retain, nonatomic) NSMutableDictionary *rootNodeIDToNodeIDToDistributionRule;
@property (retain, nonatomic) NSMutableDictionary *distributionIDToDistributionRules;

+ (id)sharedInstance;
+ (id)rulesEntryKey;
+ (id)rulesPath;

- (id)regex;
- (void)setRegex:(id)arg1;
- (id)distributionRulesForDistributionID:(id)arg1;
- (id)distributionRuleForRootNodeID:(id)arg1 andNodeID:(id)arg2;
- (void)indexRule:(id)arg1;
- (id)ruleWithString:(id)arg1 withEntryDate:(id)arg2;

@end
