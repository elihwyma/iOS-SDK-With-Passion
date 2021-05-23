/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapView;

@interface MKMapCamera : NSObject

{
    struct CLLocationCoordinate2D _centerCoordinate;
    double _heading;
    double _pitch;
    double _altitude;
    MKMapView *_mapView;
    _Bool _pitchAdjustsAltitude;
}

@property (nonatomic, getter=_precisePitch, setter=_setPrecisePitch:) double precisePitch;
@property (nonatomic) struct CLLocationCoordinate2D centerCoordinate;
@property (nonatomic) double centerCoordinateDistance;
@property (nonatomic) double heading;
@property (nonatomic) double pitch;
@property (nonatomic) double altitude;

+ (_Bool)supportsSecureCoding;
+ (id)camera;
+ (id)_cameraLookingAtGEOMapRect:(const CDStruct_02837cd9 *)arg1 aspectRatio:(float)arg2;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D)arg1 fromEyeCoordinate:(struct CLLocationCoordinate2D)arg2 eyeAltitude:(double)arg3;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D)arg1 fromDistance:(double)arg2 pitch:(double)arg3 heading:(double)arg4;
+ (id)_cameraLookingAtMapRect:(CDStruct_02837cd9)arg1 forViewSize:(struct CGSize)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_validate;
- (void)_updateState;
- (id)_mapView;
- (void)_setMapView:(id)arg1;
- (CDStruct_02837cd9)_enclosingGEOMapRectForAspectRatio:(float)arg1;

@end
