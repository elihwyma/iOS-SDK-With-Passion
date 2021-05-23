/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <MapKit/MKOverlayPathRenderer.h>

@class HKRouteMapGenerator;

@interface _GradientPolylineRenderer : MKOverlayPathRenderer

{
    HKRouteMapGenerator *_generator;
}

- (void)drawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)canDrawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2;
- (CDStruct_c3b9c2ee)_originMapPoint;
- (id)initWithOverlay:(id)arg1 locationReadings:(id)arg2;

@end
