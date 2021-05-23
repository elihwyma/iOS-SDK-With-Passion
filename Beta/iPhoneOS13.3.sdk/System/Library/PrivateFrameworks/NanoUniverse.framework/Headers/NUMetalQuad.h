/*
 Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

#import <ClockKitUI/CLKUIQuad.h>

@class NURenderer, NUResources, NUScene;

@interface NUMetalQuad : CLKUIQuad

{
    double _baseTime;
    NURenderer *_renderer;
    NUResources *_resources;
    struct CGSize _viewport;
    unsigned int _isPrepared:1;
    NUScene *_scene;
}

@property (retain, nonatomic) NUScene *scene;

- (id)initWithResources:(id)arg1;
- (void)setupForQuadView:(id)arg1;
- (_Bool)prepareForTime:(double)arg1;
- (void)renderForDisplayWithEncoder:(id)arg1;

@end
