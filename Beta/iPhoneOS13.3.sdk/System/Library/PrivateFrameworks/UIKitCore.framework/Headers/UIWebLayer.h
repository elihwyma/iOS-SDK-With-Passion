/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface UIWebLayer : CALayer

{
    _Bool _layoutsSuspended;
}

- (void)setNeedsLayout;
- (void)setLayoutsSuspended:(_Bool)arg1;

@end
