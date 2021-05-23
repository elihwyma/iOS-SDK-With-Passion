/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <QuartzCore/CALayer.h>

@class UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UITileLayer : CALayer

{
    UIBezierPath *maskPath;
    _Atomic _Bool pendingDeferredOffscreenSetNeedsDisplay;
}

- (void)setNeedsDisplay;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)actionForKey:(id)arg1;

@end
