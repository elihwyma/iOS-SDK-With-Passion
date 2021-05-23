/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <UIKit/UIView.h>

#import <FrontBoard/Swift-Protocol.h>

@class FBScene, FBSceneHostManager, FBSceneLayerHostContainerView, FBSceneLayerManager, NSMapTable, NSMutableSet, NSSet, NSString, UIColor;

@protocol FBSceneHostViewDelegate;

@interface FBSceneHostWrapperView : UIView <Swift>

{
    FBScene *_scene;
    NSString *_requester;
    FBSceneLayerManager *_layerManager;
    FBSceneHostManager *_manager;
    FBSceneLayerHostContainerView *_hostContainerView;
    NSMapTable *_layerAlphaMapTable;
    NSMutableSet *_hiddenLayers;
    unsigned long long _appearanceStyle;
    _Bool _usingDefaultClippingDisabled;
    _Bool _usingDefaultHostViewTransform;
    UIColor *_backgroundColorWhileNotHosting;
    UIColor *_backgroundColorWhileHosting;
    unsigned long long _hostedLayerTypes;
    _Bool _usingDefaultLayerTypes;
    unsigned long long _renderingMode;
    _Bool _usingDefaultRenderingMode;
    NSString *_minificationFilterName;
    _Bool _usingDefaultMinificationFilterName;
    _Bool _clippingDisabled;
    id <FBSceneHostViewDelegate> _delegate;
    struct CGAffineTransform _hostViewTransform;
}

@property (nonatomic, readonly) FBScene *scene;
@property (copy, nonatomic, readonly) NSString *requester;
@property (nonatomic, readonly) NSSet *hiddenLayers;
@property (nonatomic, readonly) NSSet *hostingDisabledLayers;
@property (retain, nonatomic) FBSceneLayerHostContainerView *hostContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isClippingDisabled) _Bool clippingDisabled;
@property (nonatomic) struct CGAffineTransform hostViewTransform;
@property (retain, nonatomic) UIColor *backgroundColorWhileHosting;
@property (retain, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property (nonatomic) unsigned long long hostedLayerTypes;
@property (nonatomic) unsigned long long renderingMode;
@property (copy, nonatomic) NSString *minificationFilterName;
@property (nonatomic) unsigned long long appearanceStyle;
@property (nonatomic, readonly, getter=isHosting) _Bool hosting;
@property (nonatomic, readonly) struct CGRect referenceFrame;
@property (nonatomic, readonly) double level;
@property (nonatomic) id <FBSceneHostViewDelegate> delegate;

- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)window;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)_updateFrameAndTransform;
- (void)updateBackgroundColor;
- (void)setDefaultClippingDisabled:(_Bool)arg1;
- (void)setDefaultHostViewTransform:(struct CGAffineTransform)arg1;
- (void)setDefaultHostedLayerTypes:(unsigned long long)arg1;
- (void)setDefaultRenderingMode:(unsigned long long)arg1;
- (void)setDefaultMinificationFilterName:(id)arg1;
- (void)setLayer:(id)arg1 alpha:(double)arg2;
- (void)setLayer:(id)arg1 hidden:(_Bool)arg2;
- (id)initWithScene:(id)arg1 requester:(id)arg2;
- (id)layersForHostContainerView:(id)arg1;
- (double)hostContainerView:(id)arg1 alphaForLayer:(id)arg2;
- (unsigned long long)contextHostRenderingModeForHostContainerView:(id)arg1;
- (id)layerMinificationFilterNameForHostContainerView:(id)arg1;
- (void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2;
- (void)_setAppearanceStyle:(unsigned long long)arg1 force:(_Bool)arg2;
- (void)_hostingStatusChanged;
- (void)_toggleBackgroundColorIfNecessary;
- (_Bool)_isReallyHosting;
- (id)_backgroundColorWhileHosting;
- (id)_backgroundColorWhileNotHosting;
- (id)_stringForAppearanceStyle;

@end
