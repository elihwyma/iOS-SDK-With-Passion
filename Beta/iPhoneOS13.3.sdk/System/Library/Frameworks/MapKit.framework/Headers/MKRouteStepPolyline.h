/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPolyline.h>

@class MKRoutePolyline;

__attribute__((visibility("hidden")))
@interface MKRouteStepPolyline : MKPolyline

{
    MKRoutePolyline *_fullRoute;
}

- (void)dealloc;
- (struct CLLocationCoordinate2D)coordinate;
- (id)_initWithRoute:(id)arg1 range:(struct _NSRange)arg2;

@end
