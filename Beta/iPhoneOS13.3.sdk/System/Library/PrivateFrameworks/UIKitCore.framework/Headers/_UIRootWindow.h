/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWindow.h>

@class NSString, RBSAssertion;

@interface _UIRootWindow : UIWindow

{
    double _scale;
    struct os_unfair_lock_s _visibilityLock;
    _Bool _visibilityLock_enabled;
    NSString *_visibilityLock_environment;
    NSString *_visibilityLock_identifier;
    _Bool _visibilityLock_updateEnqueued;
    struct os_unfair_lock_s _visibilityProcessingLock;
    NSString *_visibilityProcessingLock_identifier;
    RBSAssertion *_visibilityProcessingLock_assertion;
    struct CGAffineTransform _additionalRootLayerAffineTransform;
}

@property (nonatomic, getter=_additionalRootLayerAffineTransform, setter=_setAdditionalRootLayerAffineTransform:) struct CGAffineTransform additionalRootLayerAffineTransform;
@property (copy, nonatomic, readonly) NSString *visibilityEnvironment;

- (void)dealloc;
- (id)_context;
- (void)setHidden:(_Bool)arg1;
- (CDStruct_a002d41c)_bindingDescription;
- (_Bool)_isWindowServerHostingManaged;
- (_Bool)_extendsScreenSceneLifetime;
- (id)initWithScreen:(id)arg1;
- (id)initWithDisplay:(id)arg1;
- (_Bool)_touchesInsideShouldHideCalloutBar;
- (_Bool)_wantsSceneAssociation;
- (id)_layerForCoordinateSpaceConversion;
- (void)_configureRootLayer:(id)arg1 sceneTransformLayer:(id)arg2 transformLayer:(id)arg3;
- (void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2;
- (void)_configureContextOptions:(id)arg1;
- (_Bool)_transformLayerIncludesScreenRotation;
- (void)_updateVisibility;
- (id)_visibilityLock_environment;
- (void)_visibilityLock_enqueueUpdateIfNecessary;
- (void)_noteScreenDidChangeMode:(id)arg1;
- (void)_visibilityLock_enqueueUpdateIfNecessary_body;
- (void)setVisibilityIdentifier:(id)arg1;

@end
