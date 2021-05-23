/*
 Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _DASSharedMemoryBudgetPersistence : NSObject

{
    struct {
        unsigned char _field1;
        struct {
            char _field1[32];
            double _field2;
            double _field3;
            unsigned char _field4;
        } _field2[32];
        double _field3;
    } *_currentData;
    NSMutableDictionary *_budgetToIndex;
}

@property (retain, nonatomic) NSMutableDictionary *budgetToIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)log;
+ (id)persistence;

- (id)init;
- (id)validatedStringFromStoredValue:(char *)arg1 withAllowedNames:(id)arg2;
- (id)loadBudgetsWithExpectedNames:(id)arg1;
- (void)saveBudgets:(id)arg1;
- (void)updateBudget:(id)arg1;
- (void)saveModulationDate:(id)arg1;
- (id)lastModulationDate;

@end
