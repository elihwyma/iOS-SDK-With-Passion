/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKVectorOverlayData.h>

@interface VKVectorOverlayCircle : VKVectorOverlayData

{
    CDStruct_02837cd9 _mapRect;
    Box_3d7e3c2c _bounds;
    struct CGColor *_fillColor;
    struct CGColor *_strokeColor;
    double _lineWidth;
    double _alpha;
    struct unfair_lock _propertiesLock;
    shared_ptr_9852d3ba _renderable;
    struct shared_ptr<md::CircleOverlayRenderable::Style> _style;
}

@property (nonatomic, readonly, getter=_renderable) shared_ptr_9852d3ba renderable;
@property (nonatomic, readonly, getter=_bounds) Box_3d7e3c2c bounds;
@property (nonatomic) double lineWidth;
@property (nonatomic) struct CGColor *fillColor;
@property (nonatomic) struct CGColor *strokeColor;
@property (nonatomic) double alpha;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithMapRect:(CDStruct_02837cd9)arg1 lineWidth:(double)arg2 fillColor:(struct CGColor *)arg3 strokeColor:(struct CGColor *)arg4 alpha:(double)arg5;
- (void)_updateStyleColor;

@end
