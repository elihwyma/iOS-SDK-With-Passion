/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBWorkspaceEventQueue, NSString, SBWorkspaceTransaction;

@interface SBWorkspace : NSObject

{
    FBWorkspaceEventQueue *_eventQueue;
    SBWorkspaceTransaction *_currentTransaction;
}

@property (nonatomic, readonly) FBWorkspaceEventQueue *eventQueue;
@property (nonatomic, readonly) SBWorkspaceTransaction *currentTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)mainWorkspace;

- (id)init;
- (_Bool)requestTransitionWithOptions:(unsigned long long)arg1 builder:(CDUnknownBlockType)arg2 validator:(CDUnknownBlockType)arg3;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)createRequestWithOptions:(unsigned long long)arg1;
- (id)transactionForTransitionRequest:(id)arg1;
- (_Bool)requestTransitionWithBuilder:(CDUnknownBlockType)arg1;
- (id)createRequestForApplicationActivation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)executeTransitionRequest:(id)arg1;
- (id)initWithEventQueue:(id)arg1;
- (_Bool)_executeTransitionRequest:(id)arg1 options:(unsigned long long)arg2 validator:(CDUnknownBlockType)arg3;
- (_Bool)executeTransitionRequest:(id)arg1 withValidator:(CDUnknownBlockType)arg2;

@end
