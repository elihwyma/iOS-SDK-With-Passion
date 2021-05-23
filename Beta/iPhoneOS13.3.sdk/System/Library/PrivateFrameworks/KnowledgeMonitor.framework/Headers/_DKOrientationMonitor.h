/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class FBSDisplayLayoutMonitor;

@interface _DKOrientationMonitor : _DKMonitor

{
    FBSDisplayLayoutMonitor *_monitor;
}

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithValue:(long long)arg1;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)deactivate;

@end
