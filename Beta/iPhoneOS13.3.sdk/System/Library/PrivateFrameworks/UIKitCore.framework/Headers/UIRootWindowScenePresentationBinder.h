/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIScenePresentationBinder.h>

@class FBSDisplayConfiguration, NSMutableSet, UIMutableTransformer, UIRootSceneWindow;

@interface UIRootWindowScenePresentationBinder : UIScenePresentationBinder

{
    FBSDisplayConfiguration *_displayConfiguration;
    UIRootSceneWindow *_rootSceneWindow;
    _Bool _shouldManageWindowLifecycle;
    NSMutableSet *_presentedScenes;
}

@property (nonatomic, readonly) UIMutableTransformer *sceneTransformer;

- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_rootView;
- (id)_initWithIdentifier:(id)arg1 priority:(long long)arg2 appearanceStyle:(unsigned long long)arg3 rootWindow:(id)arg4;
- (id)initWithIdentifier:(id)arg1 priority:(long long)arg2 appearanceStyle:(unsigned long long)arg3 rootWindow:(id)arg4;
- (id)initWithPriority:(long long)arg1 displayConfiguration:(id)arg2;
- (void)_noteWillStartPresentingScene:(id)arg1;
- (void)_noteDidStopPresentingScene:(id)arg1;

@end
