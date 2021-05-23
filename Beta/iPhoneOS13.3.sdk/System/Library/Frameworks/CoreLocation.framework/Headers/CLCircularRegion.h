/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <CoreLocation/CLRegion.h>

@interface CLCircularRegion : CLRegion

@property (nonatomic, readonly) struct CLLocationCoordinate2D center;
@property (nonatomic, readonly) double radius;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)initWithCenter:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initNearbyAllowedWithCenter:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3;

@end
