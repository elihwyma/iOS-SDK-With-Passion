/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@interface CLVehicleHeadingInternal : NSObject

{
    struct {
        double trueHeading;
        double timestamp;
    } fHeading;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientVehicleHeading:(CDStruct_c3b9c2ee)arg1;

@end
