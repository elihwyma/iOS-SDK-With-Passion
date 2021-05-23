/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoard/RBSystemState.h>

@interface RBMutableSystemState : RBSystemState

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addTag:(id)arg1;
- (void)setPreventIdleSleep:(_Bool)arg1;
- (void)addPreventIdleSleepIdentifier:(id)arg1;
- (void)setThrottleBestEffortNetworking:(_Bool)arg1;
- (void)unionState:(id)arg1;
- (void)removePreventIdleSleepIdentifier:(id)arg1;
- (void)removeAllPreventIdleSleepIdentifiers;
- (void)setPreventLaunch:(_Bool)arg1;

@end
