/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class FBScene, NSMapTable, NSString, UIScenePresentationContext, _UIScenePresenterOwner;

@protocol UIScenePresentationManagerDelegate;

@interface UIScenePresentationManager : NSObject

{
    FBScene *_scene;
    _UIScenePresenterOwner *_scenePresenterOwner;
    NSMapTable *_mapLayersToPresenterOwners;
    _Bool _invalidated;
    UIScenePresentationContext *_defaultScenePresentationContext;
    id <UIScenePresentationManagerDelegate> _delegate;
    struct {
        _Bool defaultPriorityBand;
    } _delegateFlags;
}

@property (weak, nonatomic, readonly) FBScene *scene;
@property (weak, nonatomic) id <UIScenePresentationManagerDelegate> delegate;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;
@property (copy, nonatomic, readonly) UIScenePresentationContext *defaultPresentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)_defaultPresentationPriority;
- (id)createPresenterWithIdentifier:(id)arg1 priority:(long long)arg2;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (id)snapshotContext;
- (void)ownerDidInvalidateLastPresenter:(id)arg1;
- (void)owner:(id)arg1 willPrioritizePresenter:(id)arg2 deactivatePresenter:(id)arg3;
- (_Bool)_hasPresenterWithIdentifier:(id)arg1;
- (id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2 priority:(long long)arg3;
- (void)modifyDefaultPresentationContext:(CDUnknownBlockType)arg1;
- (id)_initWithScene:(id)arg1;
- (id)createPresenterWithIdentifier:(id)arg1;
- (id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2;
- (id)snapshotPresentationForSnapshot:(id)arg1;
- (id)_presenterWithIdentifier:(id)arg1;

@end
