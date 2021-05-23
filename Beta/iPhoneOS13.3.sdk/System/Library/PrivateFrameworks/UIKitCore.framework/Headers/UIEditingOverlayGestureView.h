/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIWindow;

__attribute__((visibility("hidden")))
@interface UIEditingOverlayGestureView : UIView

{
    UIWindow *_previousWindow;
}

@property (weak, nonatomic) UIWindow *previousWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_isTransparentFocusRegion;
- (int)textEffectsVisibilityLevel;
- (id)_gestureRecognizersForEvent:(id)arg1;

@end
