/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoard/RBPowerAssertion.h>

@class RBSystemState;

__attribute__((visibility("hidden")))
@interface RBSystemPowerAssertion : RBPowerAssertion

{
    RBSystemState *_state;
}

@property (copy, nonatomic) RBSystemState *state;

- (id)init;
- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;

@end
