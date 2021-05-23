/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIRepeatingPressGestureRecognizer.h>

@class UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface UIScrollViewDirectionalPressGestureRecognizer : _UIRepeatingPressGestureRecognizer

{
    _Bool _hasBeenModified;
    UIView *_originalView;
    UIScrollView *_scrollView;
    long long _activePressType;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic, readonly) long long activePressType;

- (void)setEnabled:(_Bool)arg1;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setAllowedPressTypes:(id)arg1;
- (_Bool)_shouldReceivePress:(id)arg1;
- (void)_setEnabledIfAllowed:(_Bool)arg1;
- (void)_addToViewIfAllowed:(id)arg1;
- (void)_resetToOriginalViewIfAllowed;

@end
