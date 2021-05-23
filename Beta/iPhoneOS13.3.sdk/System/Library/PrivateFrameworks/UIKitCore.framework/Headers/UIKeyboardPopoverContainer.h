/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSLayoutConstraint, UIKBVisualEffectView, UIView, _UIKeyboardPopover, _UIKeyboardPopoverAffordance, _UIPopoverView;

__attribute__((visibility("hidden")))
@interface UIKeyboardPopoverContainer : NSObject

{
    _UIKeyboardPopover *_popoverContainerView;
    UIKBVisualEffectView *_backdrop;
    _UIPopoverView *_popover;
    _UIKeyboardPopoverAffordance *_affordance;
    struct CGRect _targetFull;
    double _arrowOffset;
    unsigned long long _direction;
    NSLayoutConstraint *_keyboardAreaHeight;
}

@property (retain, readonly) UIView *affordance;
@property (readonly) struct CGRect frame;

+ (double)shadowRadius;
+ (struct CGSize)shadowOffset;
+ (id)shadowColor;
+ (struct UIEdgeInsets)contentInsets;
+ (id)pillColor;
+ (double)cornerRadius;
+ (double)borderWidth;
+ (double)shadowOpacity;
+ (double)arrowHeight;
+ (id)borderColor;
+ (struct CGSize)pillSize;
+ (double)extraWidth;
+ (id)propertiesForTargetRect:(struct CGRect)arg1 withHeight:(double)arg2 onScreenSize:(struct CGSize)arg3;
+ (id)propertiesForSpecificKeyboardFrame:(struct CGRect)arg1 onScreenSize:(struct CGSize)arg2;
+ (struct CGRect)frameAtOffset:(struct CGPoint)arg1 keyboardSize:(struct CGSize)arg2 screenSize:(struct CGSize)arg3;
+ (double)dragAreaHeight;
+ (double)edgeOffset;
+ (double)pillCornerRadius;
+ (double)pillDistanceToEdge;

- (void)invalidate;
- (id)initWithView:(id)arg1 usingBackdropStyle:(long long)arg2;
- (void)applyProperties:(id)arg1;
- (void)updateBackdropStyle:(long long)arg1;

@end
