/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKOverlayPathRenderer.h>

@class MKPolyline, VKVectorOverlayPolylineGroup;

@interface MKPolylineRenderer : MKOverlayPathRenderer

{
    VKVectorOverlayPolylineGroup *_vectorGeometry;
}

@property (nonatomic, readonly) MKPolyline *polyline;

+ (Class)_mapkitLeafClass;

- (void)setLineWidth:(double)arg1;
- (void)setAlpha:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setLineCap:(int)arg1;
- (void)setLineJoin:(int)arg1;
- (void)createPath;
- (void)_updateRenderColors;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)overlayCanProvideVectorData:(id)arg1;
- (id)vectorDataForOverlay:(id)arg1;
- (id)initWithPolyline:(id)arg1;
- (_Bool)_canProvideVectorGeometry;
- (id)_vectorGeometry;

@end
