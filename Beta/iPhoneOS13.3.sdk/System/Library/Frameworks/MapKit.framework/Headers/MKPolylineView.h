/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKOverlayPathView.h>

@class MKPolyline;

@interface MKPolylineView : MKOverlayPathView

@property (nonatomic, readonly) MKPolyline *polyline;

- (void)createPath;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (id)initWithPolyline:(id)arg1;

@end
