/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MDRenderTarget;

@interface VKAnchorWrapper : NSObject

{
    shared_ptr_2fc78ff4 _anchor;
    _Bool _followsTerrain;
    struct CGPoint _screenPointInCanvas;
    struct CGSize _canvasSize;
    const struct CameraContext *_cameraContext;
    struct AnchorManager *_anchorManager;
    struct Coordinate2D<Degrees, double> _lastCoordinate;
    _Bool _isUpdating;
    double _pointsPerMeter;
    id <MDRenderTarget> _displayLayer;
}

@property (nonatomic) id <MDRenderTarget> displayLayer;
@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic) _Bool followsTerrain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)updateIfNeeded;
- (double)pointOffsetForDistanceOffset:(double)arg1;
- (struct CGPoint)pointInLayer:(id)arg1 bound:(struct CGRect)arg2;
- (void)layoutWithContext:(const struct LayoutContext *)arg1;
- (void)destroyAnchor;
- (shared_ptr_2fc78ff4)_anchorWithContext:(struct AnchorManager *)arg1;
- (void)_updateCachedPoint;
- (void)anchorWorldPointDidChange:(void *)arg1;

@end
