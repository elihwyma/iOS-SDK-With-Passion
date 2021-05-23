/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoardServices/RBSPreventLaunchLimitation.h>

@interface RBSPreventLaunchLimitation (RBProcessState)

- (void)applyToAcquisitionContext:(id)arg1;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;
- (_Bool)conflictsWithAttribute:(id)arg1;
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;

@end
