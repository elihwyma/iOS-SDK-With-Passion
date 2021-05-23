/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoard/RBPowerAssertion.h>

@class RBProcess, RBProcessState;

__attribute__((visibility("hidden")))
@interface RBProcessPowerAssertion : RBPowerAssertion

{
    RBProcessState *_state;
    RBProcess *_process;
}

@property (nonatomic, readonly) RBProcess *process;
@property (copy, nonatomic) RBProcessState *state;

- (id)initWithProcess:(id)arg1;
- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;

@end
