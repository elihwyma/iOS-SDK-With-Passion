/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingRuleManager.h>

@class NSMutableDictionary, NSRegularExpression;

@interface PLAccountingQualificationRuleManager : PLAccountingRuleManager

{
    NSRegularExpression *_regex;
    NSMutableDictionary *_rootNodeIDToQualificationRules;
    NSMutableDictionary *_qualificationIDToQualificationRules;
}

@property (retain, nonatomic) NSMutableDictionary *rootNodeIDToQualificationRules;
@property (retain, nonatomic) NSMutableDictionary *qualificationIDToQualificationRules;

+ (id)sharedInstance;
+ (id)rulesEntryKey;
+ (id)rulesPath;

- (id)regex;
- (void)setRegex:(id)arg1;
- (id)qualificationRulesForQualificationID:(id)arg1;
- (id)qualificationRulesForRootNodeID:(id)arg1;
- (void)indexRule:(id)arg1;
- (id)ruleWithString:(id)arg1 withEntryDate:(id)arg2;

@end
