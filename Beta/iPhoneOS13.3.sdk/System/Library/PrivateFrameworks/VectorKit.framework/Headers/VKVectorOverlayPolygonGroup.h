/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKVectorOverlayData.h>

@class NSArray;

@interface VKVectorOverlayPolygonGroup : VKVectorOverlayData

{
    NSArray *_polygons;
    shared_ptr_e0acdecc _style;
    struct CGColor *_fillColor;
    struct CGColor *_strokeColor;
    double _lineWidth;
    long long _lineJoin;
    double _miterLimit;
    double _alpha;
    struct unfair_lock _propertiesLock;
}

@property (nonatomic, readonly, getter=_style) shared_ptr_e0acdecc style;
@property (nonatomic, readonly) NSArray *polygons;
@property (nonatomic) double lineWidth;
@property (nonatomic) long long lineJoin;
@property (nonatomic) struct CGColor *fillColor;
@property (nonatomic) struct CGColor *strokeColor;
@property (nonatomic) double alpha;
@property (nonatomic) double miterLimit;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithPolygons:(id)arg1;
- (void)_updateStyleColor;

@end
