/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/Swift-Protocol.h>

@class NSObject;

@protocol OS_dispatch_queue;

@protocol PLAccountingCorrectionManagerDelegate <Swift>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (unsigned short)addPowerMeasurementEventIntervalWithPower:withStartDate:withEndDate: /* Error: Ran out of types for this method. */;
- (unsigned short)didCorrectEnergyEstimate: /* Error: Ran out of types for this method. */;

@end
