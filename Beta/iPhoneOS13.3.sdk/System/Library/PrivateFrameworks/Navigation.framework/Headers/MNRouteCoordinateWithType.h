/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@interface MNRouteCoordinateWithType : NSObject

{
    unsigned long long _significanceType;
    struct PolylineCoordinate _routeCoordinate;
}

@property (nonatomic) unsigned long long significanceType;
@property (nonatomic) struct PolylineCoordinate routeCoordinate;

+ (id)divergenceCoordinate:(struct PolylineCoordinate)arg1;
+ (id)convergenceCoordinate:(struct PolylineCoordinate)arg1;

- (id)description;
- (id).cxx_construct;

@end
