/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <CALayer.h>

__attribute__((visibility("hidden")))
@interface WebSimpleLayer : CALayer

{
    _Bool _isRenderingInContext;
}

@property (nonatomic, readonly) _Bool isRenderingInContext;

- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)renderInContext:(struct CGContext *)arg1;
- (void)setNeedsDisplay;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)actionForKey:(id)arg1;
- (void)display;

@end
