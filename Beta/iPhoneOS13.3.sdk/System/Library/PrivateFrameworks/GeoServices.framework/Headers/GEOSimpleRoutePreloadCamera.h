/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOSimpleRoutePreloadCamera : NSObject

{
    unsigned long long _zoomLevel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)zoomLevel;
- (id)initWithZoomLevel:(unsigned long long)arg1;
- (void)implicateTilesForCoordinate:(CDStruct_c3b9c2ee)arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(_Bool)arg4 into:(id)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7 tileSetStyles:(id)arg8;

@end
