/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoardServices/RBSHereditaryGrant.h>

@interface RBSHereditaryGrant (RBProcessState)

- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;
- (void)_withEndowmentFromContext:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)effectiveAttributesWithContext:(id)arg1;

@end
