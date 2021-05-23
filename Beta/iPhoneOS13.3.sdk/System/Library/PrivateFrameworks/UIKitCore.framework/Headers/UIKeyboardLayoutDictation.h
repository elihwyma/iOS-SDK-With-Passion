/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardLayout.h>

@class UIKBBackgroundView, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutDictation : UIKeyboardLayout

{
    UIKBBackgroundView *_backgroundView;
    UIKBTree *_keyplane;
}

+ (id)activeInstance;
+ (struct CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;
+ (_Bool)keyboardInputMode:(id)arg1 supportsResizingOffsetForScreenTraits:(id)arg2;

- (_Bool)visible;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setRenderConfig:(id)arg1;
- (id)currentKeyplane;
- (void)_moveWithEvent:(id)arg1;
- (unsigned long long)_clipCornersOfView:(id)arg1;
- (_Bool)usesAutoShift;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (struct CGRect)dragGestureRectInView:(id)arg1;
- (struct CGSize)splitLeftSize;
- (void)setupBackgroundViewForNewSplitTraits:(id)arg1;
- (_Bool)shouldFadeFromLayout;
- (_Bool)shouldFadeToLayout;

@end
