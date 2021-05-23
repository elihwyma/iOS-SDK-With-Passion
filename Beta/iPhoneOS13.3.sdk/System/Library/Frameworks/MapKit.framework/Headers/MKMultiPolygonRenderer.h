/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKOverlayPathRenderer.h>

@class MKMultiPolygon, VKVectorOverlayPolygonGroup;

@interface MKMultiPolygonRenderer : MKOverlayPathRenderer

{
    const struct CGPath **_paths;
    unsigned long long _pathsCount;
    VKVectorOverlayPolygonGroup *_vectorData;
}

@property (nonatomic, readonly) MKMultiPolygon *multiPolygon;

+ (Class)_mapkitLeafClass;

- (void)dealloc;
- (void)setLineWidth:(double)arg1;
- (void)setAlpha:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setLineJoin:(int)arg1;
- (void)createPath;
- (void)_updateRenderColors;
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)overlayCanProvideVectorData:(id)arg1;
- (id)vectorDataForOverlay:(id)arg1;
- (_Bool)_canProvideVectorGeometry;
- (id)_vectorGeometry;
- (id)initWithMultiPolygon:(id)arg1;

@end
