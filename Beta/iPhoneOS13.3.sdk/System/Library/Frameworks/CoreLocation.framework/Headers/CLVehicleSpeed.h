/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CLVehicleSpeed : NSObject

{
    id _internal;
}

@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) NSDate *timestamp;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)initWithClientVehicleSpeed:(CDStruct_6a5f25ec)arg1;

@end
