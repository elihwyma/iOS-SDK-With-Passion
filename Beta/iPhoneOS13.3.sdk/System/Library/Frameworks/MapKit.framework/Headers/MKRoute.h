/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOComposedRoute, MKPolyline, MKRoutePolyline, NSArray, NSString;

@interface MKRoute : NSObject

{
    GEOComposedRoute *_geoComposedRoute;
    MKRoutePolyline *_polyline;
    NSArray *_steps;
}

@property (nonatomic, readonly, getter=_geoComposedRoute) GEOComposedRoute *geoComposedRoute;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *advisoryNotices;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double expectedTravelTime;
@property (nonatomic, readonly) unsigned long long transportType;
@property (nonatomic, readonly) MKPolyline *polyline;
@property (nonatomic, readonly) NSArray *steps;

- (id)_initWithGEOComposedRoute:(id)arg1;
- (id)_maneuverImageForStep:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;

@end
