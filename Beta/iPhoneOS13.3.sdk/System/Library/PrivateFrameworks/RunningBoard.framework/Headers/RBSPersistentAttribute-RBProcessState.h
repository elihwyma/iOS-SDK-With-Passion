/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoardServices/RBSPersistentAttribute.h>

@interface RBSPersistentAttribute (RBProcessState)

- (void)applyToAcquisitionContext:(id)arg1;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;

@end
