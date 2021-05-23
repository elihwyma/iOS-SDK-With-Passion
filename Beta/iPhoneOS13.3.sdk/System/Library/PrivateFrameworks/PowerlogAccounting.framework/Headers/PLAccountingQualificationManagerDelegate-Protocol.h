/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/Swift-Protocol.h>

@class NSObject;

@protocol OS_dispatch_queue;

@protocol PLAccountingQualificationManagerDelegate <Swift>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (unsigned short)didQualifyEnergyEvent:withRootNodeID:withQualificationID: /* Error: Ran out of types for this method. */;
- (unsigned short)addQualificationEventIntervalWithLastQualificationEventForward:withQualificationEventForward: /* Error: Ran out of types for this method. */;
- (unsigned short)addQualificationEventIntervalWithLastQualificationEventBackward:withQualificationEventBackward: /* Error: Ran out of types for this method. */;
- (unsigned short)addQualificationEventInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)addQualificationEventPoint: /* Error: Ran out of types for this method. */;

@end
