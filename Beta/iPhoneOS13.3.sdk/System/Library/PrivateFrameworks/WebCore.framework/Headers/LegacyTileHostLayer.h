/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <CALayer.h>

__attribute__((visibility("hidden")))
@interface LegacyTileHostLayer : CALayer

{
    struct LegacyTileGrid *_tileGrid;
}

- (void)renderInContext:(struct CGContext *)arg1;
- (id)actionForKey:(id)arg1;
- (id)initWithTileGrid:(struct LegacyTileGrid *)arg1;

@end
