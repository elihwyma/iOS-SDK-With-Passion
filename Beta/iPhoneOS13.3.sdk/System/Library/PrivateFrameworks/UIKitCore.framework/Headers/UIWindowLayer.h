/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <QuartzCore/CALayer.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface UIWindowLayer : CALayer

{
    UIWindow *_window;
}

- (void)setBounds:(struct CGRect)arg1;
- (void)setTransform:(struct CATransform3D)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)actionForKey:(id)arg1;

@end
