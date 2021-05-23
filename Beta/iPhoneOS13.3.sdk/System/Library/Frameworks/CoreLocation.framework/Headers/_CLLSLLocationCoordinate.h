/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@interface _CLLSLLocationCoordinate : NSObject

{
    double _latitude;
    double _longitude;
}

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;

@end
