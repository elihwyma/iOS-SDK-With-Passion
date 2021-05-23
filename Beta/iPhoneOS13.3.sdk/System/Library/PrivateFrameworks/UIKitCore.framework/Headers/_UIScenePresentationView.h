/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisibilityPropagationView.h>

#import <UIKitCore/Swift-Protocol.h>

@class FBSSceneSettings, FBSSceneSettingsDiffInspector, FBScene, NSString, UIScenePresentationContext, _UISceneLayerHostContainerView, _UIScenePresenter;

@protocol UIScenePresenter;

__attribute__((visibility("hidden")))
@interface _UIScenePresentationView : _UIVisibilityPropagationView <Swift>

{
    _UIScenePresenter *_presenter;
    FBScene *_scene;
    FBSSceneSettings *_effectiveSettings;
    UIScenePresentationContext *_currentPresentationContext;
    _UISceneLayerHostContainerView *_hostContainerView;
    FBSSceneSettingsDiffInspector *_geometrySettingsDiffInspector;
    _Bool _invalidated;
}

@property (retain, nonatomic) UIScenePresentationContext *currentPresentationContext;
@property (retain, nonatomic) _UISceneLayerHostContainerView *hostContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <UIScenePresenter> presenter;

- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_updateBackgroundColor;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (id)presentationContextForSceneLayerHostContainerView;
- (void)_updateFrameAndTransform;
- (void)_updatePresentationContextFrom:(id)arg1 toContext:(id)arg2;
- (void)_geometryDidUpdateWithTransitionContext:(id)arg1;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
- (id)initWithPresenter:(id)arg1;

@end
