/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoardServices/RBSDomainAttribute.h>

@interface RBSDomainAttribute (RBProcessState)

- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (id)effectiveAttributesWithContext:(id)arg1;
- (_Bool)_contextContainsRequiredEndowment:(id)arg1 requiresEndowment:(out _Bool *)arg2;
- (_Bool)_areOriginatorEntitlementsValidForContext:(id)arg1 withError:(id *)arg2;

@end
