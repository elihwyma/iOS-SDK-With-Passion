/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <UIKit/UIView.h>

@class FBScene, NSArray, NSMutableArray, NSString;

@protocol FBSceneLayerHostContainerViewDataSource;

@interface FBSceneLayerHostContainerView : UIView

{
    FBScene *_scene;
    id <FBSceneLayerHostContainerViewDataSource> _dataSource;
    NSMutableArray *_hostViews;
    NSMutableArray *_hostedLayers;
    _Bool _clippingDisabled;
}

@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly) NSArray *hostedLayers;
@property (weak, nonatomic) id <FBSceneLayerHostContainerViewDataSource> dataSource;
@property (nonatomic, getter=isClippingDisabled) _Bool clippingDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)window;
- (id)initWithScene:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateRenderingMode;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (id)_createHostViewForLayer:(id)arg1;
- (_Bool)isHosting;
- (_Bool)hasContent;
- (void)_rebuildLayers;
- (void)_adjustHostViewFrame:(id)arg1;
- (void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2;
- (void)rebuildLayers;
- (void)updateRenderingMode;

@end
