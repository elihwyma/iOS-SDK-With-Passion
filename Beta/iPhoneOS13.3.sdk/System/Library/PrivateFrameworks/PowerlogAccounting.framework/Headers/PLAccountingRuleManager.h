/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSRegularExpression;

@interface PLAccountingRuleManager : NSObject

{
    NSRegularExpression *_regex;
    NSMutableDictionary *_ruleIDToRule;
}

@property (retain, nonatomic) NSMutableDictionary *ruleIDToRule;
@property (retain, nonatomic) NSRegularExpression *regex;

+ (id)sharedInstance;
+ (id)rulesEntryKey;
+ (id)rulesPath;
+ (id)firstLineWithFile:(id)arg1;
+ (id)decryptData:(id)arg1 withKey:(id)arg2;
+ (id)storedHashDefaults;

- (id)init;
- (id)ruleForRuleID:(id)arg1;
- (void)indexRule:(id)arg1;
- (id)ruleWithString:(id)arg1 withEntryDate:(id)arg2;
- (void)loadRules;
- (id)rulesFromFileWithForceLoad:(_Bool)arg1;

@end
