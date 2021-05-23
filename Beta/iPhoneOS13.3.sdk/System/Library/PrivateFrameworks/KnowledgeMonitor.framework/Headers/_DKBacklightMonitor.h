/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKBacklightMonitor : _DKMonitor

{
    int notifyToken;
}

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithState:(id)arg1;
+ (_Bool)shouldMergeUnchangedEvents;
+ (_Bool)indicatesScreenOnWithNotificationState:(id)arg1;
+ (void)setIsBacklit:(_Bool)arg1;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)obtainCurrentValue;

@end
