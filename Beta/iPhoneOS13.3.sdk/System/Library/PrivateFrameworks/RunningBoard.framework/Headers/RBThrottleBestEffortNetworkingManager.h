/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

#import <RunningBoard/Swift-Protocol.h>

@class NSString, RBProcessIndex, RBProcessMap, RBSystemState;

@protocol OS_dispatch_queue;

@interface RBThrottleBestEffortNetworkingManager : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    RBSystemState *_systemState;
    _Bool _throttleBestEffortNetworking;
    struct os_unfair_lock_s _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *stateCaptureTitle;

- (id)init;
- (id)captureState;
- (void)removeProcess:(id)arg1;
- (void)addProcess:(id)arg1;
- (void)didUpdateProcessStates:(id)arg1;
- (void)applySystemState:(id)arg1;
- (void)_updateThrottleBestEffortNetworking;
- (_Bool)isThrottleBestEffortNetworkingEnabled;

@end
