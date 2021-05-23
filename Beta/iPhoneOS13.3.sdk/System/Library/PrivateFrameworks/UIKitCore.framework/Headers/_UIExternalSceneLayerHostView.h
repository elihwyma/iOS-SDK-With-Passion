/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISceneLayerHostView.h>

@class FBScene, NSString, UIExternalScenePairingObserver, UIScenePresentationManager;

@protocol UIScenePresenter;

__attribute__((visibility("hidden")))
@interface _UIExternalSceneLayerHostView : _UISceneLayerHostView

{
    FBScene *_parentScene;
    FBScene *_targetScene;
    NSString *_targetSceneID;
    UIExternalScenePairingObserver *_pairingObserver;
    UIScenePresentationManager *_presentationManager;
    id <UIScenePresenter> _presenter;
}

@property (nonatomic, readonly) FBScene *targetScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_updateHostingState;
- (void)setCurrentPresentationContext:(id)arg1;
- (void)_updateTargetScene;
- (void)externalScenePairingObserver:(id)arg1 pairingsDidChange:(id)arg2;
- (id)initWithSceneLayer:(id)arg1 parentScene:(id)arg2;

@end
