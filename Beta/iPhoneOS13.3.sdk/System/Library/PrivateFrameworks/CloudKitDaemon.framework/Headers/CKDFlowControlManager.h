/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDFlowControlManager : NSObject

{
    unsigned long long _defaultBudget;
    double _defaultRegeneration;
    double _maximumThrottleTime;
    NSMutableDictionary *_operationFlowControls;
}

@property (retain, nonatomic) NSMutableDictionary *operationFlowControls;
@property (nonatomic) unsigned long long defaultBudget;
@property (nonatomic) double defaultRegeneration;
@property double maximumThrottleTime;

- (id)description;
- (id)CKPropertiesDescription;
- (id)CKStatusReportArray;
- (_Bool)hasStatusToReport;
- (id)initWithDefaultBudget:(unsigned long long)arg1 maximumThrottleTime:(double)arg2 andDefaultRegeneration:(double)arg3;
- (_Bool)checkFlowControlIsLimited:(id)arg1 outReportableError:(id *)arg2;
- (double)secondsUntilFlowControlNotLimited:(id)arg1;
- (void)updateFlowControlForOperation:(id)arg1 reportableError:(id)arg2;
- (void)updateFlowControl:(id)arg1 withRetryAfter:(unsigned long long)arg2 reportableError:(id)arg3;
- (double)currentBudget:(id)arg1;
- (unsigned long long)currentBudgetCap:(id)arg1;
- (double)currentRegeneration:(id)arg1;
- (void)updateFlowControl:(id)arg1 withCost:(unsigned long long)arg2 reportableError:(id)arg3;
- (id)_flowControlForOperation:(id)arg1 createIfNecessary:(_Bool)arg2;
- (id)_flowControlForOperation:(id)arg1;

@end
