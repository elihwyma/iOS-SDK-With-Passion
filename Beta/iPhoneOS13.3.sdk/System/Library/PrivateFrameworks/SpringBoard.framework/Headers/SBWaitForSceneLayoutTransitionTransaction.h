/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransaction.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBLayoutStateTransitionCoordinator;

@interface SBWaitForSceneLayoutTransitionTransaction : SBTransaction <Swift>

{
    SBLayoutStateTransitionCoordinator *_transitionCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_begin;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (id)initWithSceneLayoutTransitionCoordinator:(id)arg1;

@end
