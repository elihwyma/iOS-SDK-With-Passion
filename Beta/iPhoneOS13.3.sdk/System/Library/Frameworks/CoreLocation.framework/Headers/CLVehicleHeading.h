/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CLVehicleHeading : NSObject

{
    id _internal;
}

@property (nonatomic, readonly) double trueHeading;
@property (nonatomic, readonly) NSDate *timestamp;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)initWithClientVehicleHeading:(CDStruct_c3b9c2ee)arg1;

@end
