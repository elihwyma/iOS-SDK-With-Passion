/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class CLLocation, CLRegion, GEOMapItemStorage, NSArray, NSDictionary, NSTimeZone;

@interface CLPlacemarkInternal : NSObject

{
    CLLocation *location;
    NSDictionary *addressDictionary;
    CLRegion *region;
    NSArray *areasOfInterest;
    GEOMapItemStorage *geoMapItemStorage;
    NSTimeZone *timeZone;
}

- (id)init;

@end
