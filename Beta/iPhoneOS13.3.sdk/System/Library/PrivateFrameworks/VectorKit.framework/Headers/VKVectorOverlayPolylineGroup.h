/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKVectorOverlayData.h>

@class NSArray;

@interface VKVectorOverlayPolylineGroup : VKVectorOverlayData

{
    struct CGColor *_color;
    double _lineWidth;
    double _alpha;
    long long _lineJoin;
    long long _lineCap;
    double _miterLimit;
    struct unfair_lock _propertiesLock;
    shared_ptr_e2cb55c7 _style;
    NSArray *_polylines;
}

@property (nonatomic, readonly) shared_ptr_e2cb55c7 style;
@property (nonatomic, readonly) NSArray *polylines;
@property (nonatomic) double lineWidth;
@property (nonatomic) long long lineJoin;
@property (nonatomic) long long lineCap;
@property (nonatomic) struct CGColor *color;
@property (nonatomic) double alpha;
@property (nonatomic) double miterLimit;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithPolylines:(id)arg1;
- (void)_updateStyleColor;

@end
