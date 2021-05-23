/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIApplicationRotationFollowingWindow.h>

@interface UIAutoRotatingWindow : UIApplicationRotationFollowingWindow

{
    long long _interfaceOrientation;
    _Bool _unknownOrientation;
}

+ (id)sharedPopoverHostingWindow;

- (void)commonInit;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_didRemoveSubview:(id)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 attached:(_Bool)arg2;
- (void)updateForOrientation:(long long)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 windowScene:(id)arg3;

@end
