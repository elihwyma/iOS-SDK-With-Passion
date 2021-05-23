/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKCalendarMonitor : _DKMonitor

{
    _Bool _enabled;
}

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithTitle:(id)arg1 interaction:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)update;
- (void)deactivate;
- (void)_receiveDatabaseChangeNotification:(id)arg1;

@end
