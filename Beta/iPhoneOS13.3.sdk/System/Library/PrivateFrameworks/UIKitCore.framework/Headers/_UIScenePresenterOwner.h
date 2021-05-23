/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class FBScene, NSMutableOrderedSet, NSMutableSet, NSString, UIScenePresentationContext, UIScenePresentationManager, _UISceneLayerHostContainerView, _UIScenePresenter;

@protocol _UIScenePresenterOwnerDelegate;

__attribute__((visibility("hidden")))
@interface _UIScenePresenterOwner : NSObject <Swift>

{
    id _context;
    UIScenePresentationManager *_scenePresentationManager;
    _UISceneLayerHostContainerView *_realSceneHostViewsContainer;
    NSMutableOrderedSet *_activePresentersByPriority;
    NSMutableSet *_inactivePresentersByPriority;
    _UIScenePresenter *_prioritizedPresenter;
    _Bool _invalidated;
    id <_UIScenePresenterOwnerDelegate> _delegate;
}

@property (weak, nonatomic) id <_UIScenePresenterOwnerDelegate> delegate;
@property (nonatomic, readonly) id context;
@property (weak, nonatomic, readonly) FBScene *scene;
@property (copy, nonatomic, readonly) UIScenePresentationContext *defaultPresentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)addPresenter:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_activatePresenter:(id)arg1;
- (_Bool)_isPresenterActive:(id)arg1;
- (void)_deactivatePresenter:(id)arg1;
- (void)_invalidatePresenter:(id)arg1;
- (_Bool)_isPresenterHosting:(id)arg1;
- (void)_updateActivePrioritizedPresenterIfNecessary;
- (void)_setActivePrioritizedPresenter:(id)arg1;
- (id)initWithScenePresentationManager:(id)arg1 context:(id)arg2;
- (void)enumeratePresentersUsingBlock:(CDUnknownBlockType)arg1;
- (id)activePrioritizedPresenter;
- (id)presenterWithIdentifier:(id)arg1;

@end
