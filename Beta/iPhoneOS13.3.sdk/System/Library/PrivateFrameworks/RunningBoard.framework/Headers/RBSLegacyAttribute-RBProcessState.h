/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoardServices/RBSLegacyAttribute.h>

@interface RBSLegacyAttribute (RBProcessState)

- (unsigned char)_role;
- (unsigned long long)_startPolicy;
- (unsigned long long)_endPolicy;
- (unsigned char)_terminationResistance;
- (void)_mutateReasonWithContext:(id)arg1;
- (double)_invalidationDurationExpiringTaskCompletionsQuickly:(_Bool)arg1;
- (_Bool)_suspendsOnTaskSuspension;
- (_Bool)_definesRelativeStartTime;
- (unsigned long long)_maxCPUUsageViolationPolicy;
- (unsigned char)_jetsamBand;
- (_Bool)_preventIdleSleep;
- (_Bool)_gpuAllowed;
- (unsigned long long)_maxCPUPercentage;
- (unsigned long long)_maxCPUDuration;
- (_Bool)_isLegacyReasonFinishableTask:(unsigned long long)arg1;
- (_Bool)_isOriginatorValidForContext:(id)arg1 errorReason:(out id *)arg2;
- (_Bool)_isTargetValidForContext:(id)arg1 errorReason:(out id *)arg2;
- (void)applyToAcquisitionContext:(id)arg1;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;
- (_Bool)conflictsWithAttribute:(id)arg1;

@end
