/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@interface MKMapCameraZoomRange : NSObject

{
    double _minCenterCoordinateDistance;
    double _maxCenterCoordinateDistance;
}

@property (nonatomic, readonly) double minCenterCoordinateDistance;
@property (nonatomic, readonly) double maxCenterCoordinateDistance;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinCenterCoordinateDistance:(double)arg1 maxCenterCoordinateDistance:(double)arg2;
- (_Bool)isEqualToMapCameraZoomRange:(id)arg1;
- (id)initWithMinCenterCoordinateDistance:(double)arg1;
- (id)initWithMaxCenterCoordinateDistance:(double)arg1;

@end
