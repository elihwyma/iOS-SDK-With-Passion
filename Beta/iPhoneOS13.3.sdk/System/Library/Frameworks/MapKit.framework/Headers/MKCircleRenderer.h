/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKOverlayPathRenderer.h>

@class MKCircle, VKVectorOverlayCircle;

@interface MKCircleRenderer : MKOverlayPathRenderer

{
    VKVectorOverlayCircle *_vectorData;
}

@property (nonatomic, readonly) MKCircle *circle;

+ (Class)_mapkitLeafClass;

- (void)setLineWidth:(double)arg1;
- (void)setAlpha:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)initWithCircle:(id)arg1;
- (void)createPath;
- (void)_updateRenderColors;
- (_Bool)overlayCanProvideVectorData:(id)arg1;
- (id)vectorDataForOverlay:(id)arg1;
- (_Bool)_canProvideVectorGeometry;
- (id)_vectorData;

@end
