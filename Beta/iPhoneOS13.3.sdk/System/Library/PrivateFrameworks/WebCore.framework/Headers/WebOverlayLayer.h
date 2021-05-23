/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <CALayer.h>

__attribute__((visibility("hidden")))
@interface WebOverlayLayer : CALayer

{
    struct ResourceUsageOverlay *m_overlay;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithResourceUsageOverlay:(struct ResourceUsageOverlay *)arg1;

@end
