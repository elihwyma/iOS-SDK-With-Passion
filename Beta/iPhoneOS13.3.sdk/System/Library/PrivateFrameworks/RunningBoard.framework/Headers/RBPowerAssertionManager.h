/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

#import <RunningBoard/Swift-Protocol.h>

@class NSString, RBProcessMap, RBSystemPowerAssertion;

@protocol OS_dispatch_queue, RBPowerAssertionManagerDelegate;

@interface RBPowerAssertionManager : NSObject <Swift>

{
    RBProcessMap *_stateMap;
    RBProcessMap *_assertionMap;
    RBSystemPowerAssertion *_systemAssertion;
    unsigned long long _assertionCount;
    NSObject<OS_dispatch_queue> *_queue;
    id <RBPowerAssertionManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <RBPowerAssertionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *stateCaptureTitle;

- (id)init;
- (void)dealloc;
- (id)captureState;
- (void)removeProcess:(id)arg1;
- (void)addProcess:(id)arg1;
- (void)_queue_updateProcessAssertion:(id)arg1 withState:(id)arg2;
- (void)_queue_invalidateAssertion:(id)arg1;
- (void)_queue_didAcquireAssertion;
- (void)_queue_willInvalidateAssertion;
- (void)didUpdateProcessStates:(id)arg1;
- (void)removeStateForProcessIdentity:(id)arg1;
- (void)applySystemState:(id)arg1;
- (_Bool)_unitTest_hasSystemPowerAssertion;
- (_Bool)_unitTest_hasPowerAssertionForProcess:(id)arg1;
- (id)_unitTest_nameOfPowerAssertionForSystem;
- (id)_unitTest_nameOfPowerAssertionForProcess:(id)arg1;

@end
