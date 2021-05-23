/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <NSObject.h>

@class FUFlightLeg, MKGeodesicPolyline;

__attribute__((visibility("hidden")))
@interface FUFLightTrack : NSObject

{
    MKGeodesicPolyline *_polyline;
    FUFlightLeg *_leg;
}

@property (retain) MKGeodesicPolyline *polyline;
@property (retain) FUFlightLeg *leg;

@end
