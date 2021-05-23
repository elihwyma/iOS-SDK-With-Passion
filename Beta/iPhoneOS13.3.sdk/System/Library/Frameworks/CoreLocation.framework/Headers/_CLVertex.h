/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@interface _CLVertex : NSObject

{
    struct CLLocationCoordinate2D _coordinate;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (double)getDistanceFrom:(struct CLLocationCoordinate2D)arg1;

@end
