/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UIInputSetHostView : UIView

+ (_Bool)requiresConstraintBasedLayout;
+ (_Bool)_shouldHitTestInputViewFirst;
+ (_Bool)_notifyOnExplicitLayout;

- (void)layoutIfNeeded;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (int)textEffectsVisibilityLevel;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (unsigned long long)_clipCornersOfView:(id)arg1;

@end
