/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSUUID;

@interface CLBeaconInternal : NSObject

{
    NSUUID *proximityUUID;
    NSNumber *major;
    NSNumber *minor;
    long long proximity;
    double accuracy;
    long long rssi;
    double timestamp;
}

@end
