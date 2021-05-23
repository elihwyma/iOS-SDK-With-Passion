/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOComposedRouteStep, MKPolyline, MKRouteStepPolyline, NSString;

@interface MKRouteStep : NSObject

{
    GEOComposedRouteStep *_geoComposedRouteStep;
    NSString *_instructions;
    unsigned long long _transportType;
    MKRouteStepPolyline *_polyline;
}

@property (nonatomic, readonly, getter=_geoComposedRouteStep) GEOComposedRouteStep *geoComposedRouteStep;
@property (nonatomic, readonly) NSString *instructions;
@property (nonatomic, readonly) NSString *notice;
@property (nonatomic, readonly) MKPolyline *polyline;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) unsigned long long transportType;

- (id)_initWithGEOComposedRouteStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned long long)arg3 polyline:(id)arg4;

@end
