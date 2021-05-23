/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class FBSSceneSettings, FBScene, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, UIScenePresentationContext;

@protocol _UISceneLayerHostContainerViewDataSource;

__attribute__((visibility("hidden")))
@interface _UISceneLayerHostContainerView : UIView

{
    FBScene *_scene;
    id <_UISceneLayerHostContainerViewDataSource> _dataSource;
    NSMutableOrderedSet *_hostViews;
    NSMutableOrderedSet *_hostedLayers;
    NSMutableSet *_hiddenLayers;
    FBSSceneSettings *_effectiveSceneSettings;
    UIScenePresentationContext *_presentationContext;
}

@property (weak, nonatomic, readonly) FBScene *scene;
@property (weak, nonatomic, readonly) id <_UISceneLayerHostContainerViewDataSource> dataSource;
@property (nonatomic, readonly) NSSet *hostedLayers;
@property (nonatomic, readonly) NSSet *nonHostedLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)window;
- (id)initWithScene:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_rebuildLayersForReason:(id)arg1;
- (void)_setDataSource:(id)arg1;
- (void)_refreshDataSource;
- (void)_adjustHostViewFrameAlignment:(id)arg1;
- (void)_updateRenderingMode;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)_setPresentationContext:(id)arg1;
- (void)_presentationContextChangedFrom:(id)arg1 toContext:(id)arg2 force:(_Bool)arg3;
- (void)_toggleClippingDisabledWithNewContext:(id)arg1;
- (id)_presentationContextForLayer:(id)arg1;
- (id)_filteredLayersToPresent;
- (id)_createHostViewForLayer:(id)arg1;
- (void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)pushDataSource:(id)arg1;
- (void)popDataSource:(id)arg1;
- (void)refreshDataSource:(id)arg1;
- (void)updateForGeometrySettingsChanges:(id)arg1;

@end
