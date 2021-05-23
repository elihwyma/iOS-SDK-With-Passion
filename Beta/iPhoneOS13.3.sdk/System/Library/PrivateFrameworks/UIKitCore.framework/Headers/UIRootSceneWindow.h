/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIRootWindow.h>

@class CALayer, FBSDisplayConfiguration, NSString, UIMutableTransformer, UIView;

@interface UIRootSceneWindow : _UIRootWindow

{
    FBSDisplayConfiguration *_displayConfiguration;
    UIView *_sceneContainerView;
    UIMutableTransformer *_sceneTransformer;
    CALayer *_bezelLayer;
    CALayer *_maskLayer;
}

@property (nonatomic, readonly) UIView *_sceneContainerView;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly) UIMutableTransformer *sceneTransformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_isSecure;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_focusResponder;
- (id)initWithScreen:(id)arg1;
- (id)initWithDisplay:(id)arg1;
- (void)_updateTransforms;
- (void)transformsDidChange:(id)arg1;
- (id)initWithDisplayConfiguration:(id)arg1;
- (_Bool)_usesWindowServerHitTesting;
- (_Bool)_appearsInLoupe;
- (_Bool)_shouldPrepareScreenForWindow;
- (_Bool)_canBecomeKeyWindow;

@end
