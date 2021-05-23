/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIView, UIVisualEffectView, _UIInteractiveHighlightEnvironment, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIInteractiveHighlightEffect : NSObject

{
    UIView *_view;
    UIVisualEffectView *_effectView;
    _UIInteractiveHighlightEnvironment *_environment;
    UIView *_superview;
    _UIPortalView *_portalView;
    struct UIEdgeInsets _preferredContentInsets;
}

@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) _UIInteractiveHighlightEnvironment *environment;
@property (weak, nonatomic) UIView *superview;
@property (weak, nonatomic) _UIPortalView *portalView;
@property (nonatomic) struct UIEdgeInsets preferredContentInsets;

- (void)dealloc;
- (void)applyBackgroundEffectWithMagnitude:(double)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)finalizeEffect;

@end
