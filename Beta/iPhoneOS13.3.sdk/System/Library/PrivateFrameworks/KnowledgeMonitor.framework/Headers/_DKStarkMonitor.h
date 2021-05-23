/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class CARSessionStatus, NSString;

@interface _DKStarkMonitor : _DKMonitor

{
    CARSessionStatus *_sessionStatus;
}

@property (retain, nonatomic) CARSessionStatus *sessionStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithState:(_Bool)arg1;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (void)updateCurrentState;

@end
