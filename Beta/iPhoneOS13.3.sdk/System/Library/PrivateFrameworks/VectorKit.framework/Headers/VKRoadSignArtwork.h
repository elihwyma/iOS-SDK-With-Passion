/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKRoadSignArtwork : NSObject

{
    struct __CTLine *_line;
    struct __CTFrame *_frame;
    struct __CTFramesetter *_framesetter;
    struct RoadSignMetrics _signMetrics;
    struct RoadSignTextMetrics _textMetrics;
    struct RoadSignGeneratedMetrics _generatedMetrics;
    struct RoadSignColoring _signColoring;
    struct CGImage *_glyph;
    struct mutex _imageLock;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)image;
- (id)initWithString:(id)arg1 signMetrics:(struct RoadSignMetrics)arg2 textMetrics:(struct RoadSignTextMetrics)arg3 signColoring:(struct RoadSignColoring)arg4 glyph:(struct CGImage *)arg5;
- (Matrix_8746f91e)offsetPixelForPixel:(Matrix_8746f91e)arg1;
- (Box_8bd38d92)localSignBounds;
- (Box_8bd38d92)localRenderBounds;
- (Box_8bd38d92)localCollisionBounds;

@end
