/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <UIKit/_UIRootWindow.h>

@class CALayer, NSHashTable, NSString, UIView;

@interface FBRootWindow : _UIRootWindow

{
    UIView *_sceneContainerView;
    NSHashTable *_transforms;
    CALayer *_bezelLayer;
    CALayer *_maskLayer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_isSecure;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithScreen:(id)arg1;
- (id)initWithDisplay:(id)arg1;
- (void)_updateTransforms;
- (id)initWithDisplayConfiguration:(id)arg1;
- (_Bool)_usesWindowServerHitTesting;
- (_Bool)_appearsInLoupe;
- (_Bool)_shouldPrepareScreenForWindow;
- (_Bool)_canBecomeKeyWindow;
- (void)transformDidInvalidate:(id)arg1;
- (void)transformDidUpdate:(id)arg1;
- (void)attachSceneTransform:(id)arg1;
- (void)removeSceneTransform:(id)arg1;
- (id)sceneContainerView;

@end
