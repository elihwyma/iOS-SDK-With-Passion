/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class FBSSceneSettingsDiffInspector, NSMutableDictionary, NSMutableSet, NSSet, NSString, UIView;

@protocol UIScenePresentationBinderDelegate;

@interface UIScenePresentationBinder : NSObject <Swift>

{
    NSString *_identifier;
    UIView *_rootView;
    NSMutableSet *_scenes;
    long long _priority;
    unsigned long long _appearanceStyle;
    id <UIScenePresentationBinderDelegate> _delegate;
    _Bool _invalidated;
    NSMutableDictionary *_mapSceneIDToPresenter;
    FBSSceneSettingsDiffInspector *_settingsDiffInspector;
    struct {
        unsigned int delegateShouldPresentWithNoSceneLayers:1;
        unsigned int delegateDidStartPresentingScene:1;
        unsigned int delegateDidStopPresentingScene:1;
    } _delegateFlags;
}

@property (weak, nonatomic) id <UIScenePresentationBinderDelegate> delegate;
@property (nonatomic, readonly) NSSet *scenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_rootView;
- (void)sceneLayerManagerDidStartTrackingLayers:(id)arg1;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)arg1;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)sceneDidInvalidate:(id)arg1;
- (id)initWithIdentifier:(id)arg1 priority:(long long)arg2 rootView:(id)arg3 appearanceStyle:(unsigned long long)arg4;
- (_Bool)_delegateShouldPresentSceneOnlyWhenLayersExist;
- (void)_noteWillStartPresentingScene:(id)arg1;
- (void)_noteDidStopPresentingScene:(id)arg1;
- (void)_evaluateSceneForHosting:(id)arg1 forReason:(id)arg2;
- (void)_removeScene:(id)arg1 forReason:(id)arg2;
- (void)removeScene:(id)arg1;
- (void)_noteSceneChangedLevel:(id)arg1;
- (void)_noteSceneMovedToForeground:(id)arg1;
- (void)_noteSceneMovedToBackground:(id)arg1;
- (void)_deactivatePresenter:(id)arg1 scene:(id)arg2 reason:(id)arg3;
- (void)_activatePresenter:(id)arg1 scene:(id)arg2 reason:(id)arg3;
- (void)_positionPresentationViewInRootViewOrderedCorrectly:(id)arg1;
- (void)_delegateDidStartPresentingScene:(id)arg1;
- (void)_delegateDidStopPresentingScene:(id)arg1;
- (void)addScene:(id)arg1;

@end
