/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <MapKit/MKCircle.h>

@interface HUReverseCircleOverlay : MKCircle

{
    CDStruct_02837cd9 _boundingRect;
}

@property (nonatomic) CDStruct_02837cd9 boundingRect;

+ (id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 boundingMapRect:(CDStruct_02837cd9)arg3;

- (CDStruct_02837cd9)boundingMapRect;
- (CDStruct_02837cd9)innerCircleBoundingMapRect;

@end
