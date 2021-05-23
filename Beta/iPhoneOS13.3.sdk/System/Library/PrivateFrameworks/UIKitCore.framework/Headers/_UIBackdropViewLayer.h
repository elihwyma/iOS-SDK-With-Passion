/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <QuartzCore/CALayer.h>

@class _UIBackdropView;

__attribute__((visibility("hidden")))
@interface _UIBackdropViewLayer : CALayer

{
    _UIBackdropView *_backdropView;
}

@property (nonatomic) _UIBackdropView *backdropView;

- (void)dealloc;
- (void)renderInContext:(struct CGContext *)arg1;

@end
