/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBGradient.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIKBColorGradient : UIKBGradient

{
    UIColor *_color;
}

+ (id)gradientWithUIColor:(id)arg1;

- (void)dealloc;
- (id)initWithUIColor:(id)arg1;
- (struct CGGradient *)CGGradient;

@end
