/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSPointerArray, NSString, SBLayoutStateTransitionContext, SBSceneManager;

@protocol SBLayoutStateTransitionSceneEntityFrameProvider;

@interface SBLayoutStateTransitionCoordinator : NSObject

{
    NSPointerArray *_observerPointerArray;
    SBLayoutStateTransitionContext *_transitionContext;
    SBSceneManager *_sceneManager;
    id <SBLayoutStateTransitionSceneEntityFrameProvider> _sceneEntityFrameProvider;
}

@property (weak, nonatomic, readonly) SBSceneManager *sceneManager;
@property (weak, nonatomic) id <SBLayoutStateTransitionSceneEntityFrameProvider> sceneEntityFrameProvider;
@property (nonatomic, readonly, getter=isTransitioning) _Bool transitioning;
@property (nonatomic, readonly) SBLayoutStateTransitionContext *transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)willEndTransition;
- (void)beginTransitionForWorkspaceTransaction:(id)arg1;
- (void)endTransitionWithError:(id)arg1;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (id)initWithSceneManager:(id)arg1;

@end
