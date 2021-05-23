/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransaction.h>

@class SBMainWorkspace, SBStartupTransitionContext;

@interface SBBaseStartupTransition : SBTransaction

{
    unsigned long long _destination;
    SBStartupTransitionContext *_context;
    SBMainWorkspace *_mainWorkspace;
}

@property (nonatomic, readonly) SBMainWorkspace *mainWorkspace;
@property (nonatomic, readonly) SBStartupTransitionContext *context;
@property (nonatomic, readonly) unsigned long long destination;

- (void)_begin;
- (void)performTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;

@end
