/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class DNDStateService, NSString;

@interface _DKDoNotDisturbMonitor : _DKMonitor

{
    DNDStateService *_dndStateService;
}

@property (retain, nonatomic) DNDStateService *dndStateService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)eventStream;
+ (id)_eventWithState:(_Bool)arg1;

- (void)stop;
- (void)start;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;

@end
