/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKLowPowerModeMonitor : _DKMonitor

+ (id)eventStream;
+ (_Bool)shouldMergeUnchangedEvents;
+ (id)_eventWithLowPowerModeState:(_Bool)arg1;
+ (void)setLowPowerMode:(_Bool)arg1;

- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)lowPowerModeStateChanged:(id)arg1;
- (void)updateLowPowerMode;

@end
