/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class VKCameraRegionRestriction;

@interface MKMapCameraBoundary : NSObject

{
    VKCameraRegionRestriction *_vkRestriction;
    CDStruct_02837cd9 _mapRect;
    CDStruct_b7cb895d _region;
}

@property (nonatomic, readonly, getter=_isEmpty) _Bool _empty;
@property (nonatomic, readonly) CDStruct_02837cd9 mapRect;
@property (nonatomic, readonly) CDStruct_b7cb895d region;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapRect:(CDStruct_02837cd9)arg1;
- (id)initWithCoordinateRegion:(CDStruct_b7cb895d)arg1;
- (_Bool)_containsCoordinate:(struct CLLocationCoordinate2D)arg1;
- (struct CLLocationCoordinate2D)_clampedCoordinateForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (_Bool)isValidMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)_clampedMapRectForMapRect:(CDStruct_02837cd9)arg1;
- (_Bool)isValidCoordinateRegion:(CDStruct_b7cb895d)arg1;
- (CDStruct_b7cb895d)_clampedCoordinateRegionForCoordinateRegion:(CDStruct_b7cb895d)arg1;
- (_Bool)isEqualToMapCameraBoundary:(id)arg1;
- (id)_vkRegionRestriction;

@end
