/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <CALayer.h>

__attribute__((visibility("hidden")))
@interface LegacyTileLayer : CALayer

{
    struct LegacyTileGrid *_tileGrid;
    unsigned int _paintCount;
    _Bool _isRenderingInContext;
}

@property (nonatomic) unsigned int paintCount;
@property (nonatomic) struct LegacyTileGrid *tileGrid;
@property (nonatomic, readonly) _Bool isRenderingInContext;

- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)renderInContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)actionForKey:(id)arg1;
- (void)layoutSublayers;

@end
