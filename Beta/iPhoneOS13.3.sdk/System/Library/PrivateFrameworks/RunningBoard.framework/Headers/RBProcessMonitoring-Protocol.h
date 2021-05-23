/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoard/Swift-Protocol.h>

@class MISSING_TYPE, NSObject;

@protocol OS_dispatch_queue;

@protocol RBProcessMonitoring <Swift>

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *monitorSerializationQueue;

- (MISSING_TYPE *)addObserver: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)removeObserver: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didUpdateProcessStates: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)removeStateForProcessIdentity: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)suppressUpdatesForIdentity: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)unsuppressUpdatesForIdentity: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)statesMatchingPredicate: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didRemoveProcess:withState: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)statesMatchingConfiguration: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)didAddProcess:withState: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)trackStateForProcessIdentity: /* Error: Ran out of types for this method. */;

@end
