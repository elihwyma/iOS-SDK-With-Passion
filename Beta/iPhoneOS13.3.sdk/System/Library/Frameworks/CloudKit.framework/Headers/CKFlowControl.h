/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSDate, NSError;

@interface CKFlowControl : NSObject

{
    unsigned long long _budgetCap;
    double _regenerationPerSecond;
    unsigned long long _totalSamples;
    double _totalCost;
    double _budget;
    double _maximumThrottleTime;
    NSError *_lastReportableError;
    NSDate *_lastRegeneration;
}

@property (retain, nonatomic) NSError *lastReportableError;
@property double budget;
@property (retain) NSDate *lastRegeneration;
@property unsigned long long budgetCap;
@property double regenerationPerSecond;
@property (nonatomic) double maximumThrottleTime;

+ (id)flowControlWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3;

- (id)description;
- (id)initWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3;
- (void)regenerate;
- (double)_secondsUntilBudgetLimitationRemovedNoRegen;
- (void)expendWithCost:(double)arg1 reportableError:(id)arg2;
- (id)CKPropertiesDescription;
- (double)secondsUntilBudgetLimitationRemoved;
- (_Bool)isLimited;
- (_Bool)attemptBudgetedExpenditureWithCost:(double)arg1;

@end
