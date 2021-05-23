/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/Swift-Protocol.h>

@class NSObject;

@protocol OS_dispatch_queue;

@protocol PLAccountingDistributionManagerDelegate <Swift>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (unsigned short)didDistributeEnergyEstimate: /* Error: Ran out of types for this method. */;
- (unsigned short)addDistributionEventIntervalWithLastDistributionEventForward:withDistributionEventForward: /* Error: Ran out of types for this method. */;
- (unsigned short)addDistributionEventIntervalWithLastDistributionEventBackward:withDistributionEventBackward: /* Error: Ran out of types for this method. */;
- (unsigned short)addDistributionEventInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)addDistributionEventPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)didCreateChildEnergyEstimate:withParentEnergyEstimate: /* Error: Ran out of types for this method. */;

@end
