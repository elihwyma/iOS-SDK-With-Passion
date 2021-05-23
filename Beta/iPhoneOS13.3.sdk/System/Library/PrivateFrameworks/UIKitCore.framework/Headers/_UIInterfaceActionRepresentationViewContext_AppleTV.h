/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIMotionEffectGroup, UIView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject

{
    UIMotionEffectGroup *_installedHighlightedActionMotionEffectsGroup;
    _Bool _highlighted;
    _Bool _pressed;
    UIView *_highlightTransformTargetView;
}

@property (weak, nonatomic) UIView *highlightTransformTargetView;
@property (nonatomic) _Bool highlighted;
@property (nonatomic) _Bool pressed;

- (id)initWithHighlightTransformTargetView:(id)arg1;
- (void)_applyHighlightTransform;
- (struct CATransform3D)_enlargedTransformForSize:(struct CGSize)arg1 pressed:(_Bool)arg2;
- (void)_removeMotionEffects;
- (void)_insertMotionEffects;
- (id)_newMotionEffectsGroupForHighlightedAction;

@end
