/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoard/RBProcessState.h>

@interface RBMutableProcessState : RBProcessState

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setTerminationResistance:(unsigned char)arg1;
- (void)setRole:(unsigned char)arg1;
- (void)addTag:(id)arg1;
- (void)setJetsamBand:(unsigned char)arg1;
- (void)setPreventIdleSleep:(_Bool)arg1;
- (void)addPreventIdleSleepIdentifier:(id)arg1;
- (void)setGPUAllowed:(_Bool)arg1;
- (void)setJetsamLenientMode:(_Bool)arg1;
- (void)setThrottleBestEffortNetworking:(_Bool)arg1;
- (void)setMaxCPUUsageLimits:(id)arg1 forRole:(unsigned char)arg2;
- (void)setLegacyFinishTaskReason:(unsigned long long)arg1;
- (void)setIsBeingDebugged:(_Bool)arg1;
- (void)unionState:(id)arg1;
- (void)addInheritance:(id)arg1;
- (void)removeInheritance:(id)arg1;
- (void)removePreventIdleSleepIdentifier:(id)arg1;
- (void)removeAllPreventIdleSleepIdentifiers;
- (void)setMinCPUUsageLimits:(id)arg1 forRole:(unsigned char)arg2;
- (void)setPreventLaunch:(_Bool)arg1;
- (void)removeAllInheritances;
- (void)addLegacyAssertion:(id)arg1;
- (void)addRBAssertion:(id)arg1;

@end
