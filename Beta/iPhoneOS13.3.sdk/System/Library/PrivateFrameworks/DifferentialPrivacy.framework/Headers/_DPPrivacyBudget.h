/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSString, _DPPrivacyBudgetProperties, _DPPrivacyBudgetRecord;

@interface _DPPrivacyBudget : NSObject

{
    NSString *_name;
    _DPPrivacyBudgetProperties *_budgetProperties;
    _DPPrivacyBudgetRecord *_budgetRecord;
}

@property (nonatomic, readonly) _DPPrivacyBudgetProperties *budgetProperties;
@property (retain) _DPPrivacyBudgetRecord *budgetRecord;
@property (copy, nonatomic, readonly) NSString *name;

+ (void)initialize;
+ (void)updateAllBudgetsUnsafeIn:(id)arg1;
+ (_Bool)createDatabaseRecordIfMissingIn:(id)arg1 key:(id)arg2 balance:(long long)arg3;
+ (id)fetchBudgetRecordFrom:(id)arg1 key:(id)arg2;
+ (id)budgetWithName:(id)arg1;
+ (void)removeBudgetWithName:(id)arg1;
+ (_Bool)debit:(unsigned long long)arg1 budgetWithName:(id)arg2;
+ (_Bool)credit:(unsigned long long)arg1 budgetWithName:(id)arg2;
+ (long long)balanceForBudgetWithName:(id)arg1;
+ (void)resetLastUpdateDateForName:(id)arg1;
+ (void)updateAllBudgetsIn:(id)arg1;
+ (void)createBudgetRecordsIn:(id)arg1;
+ (id)fetchBudgetKeyNamesFrom:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithName:(id)arg1 budgetProperties:(id)arg2;
- (_Bool)initializeBudgetRecordFrom:(id)arg1;

@end
