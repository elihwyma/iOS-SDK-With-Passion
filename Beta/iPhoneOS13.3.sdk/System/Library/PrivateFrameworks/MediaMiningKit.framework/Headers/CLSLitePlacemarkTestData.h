/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLCircularRegion, CLLocation, NSArray, NSString;

@interface CLSLitePlacemarkTestData : NSObject

{
    _Bool _isIsland;
    CLCircularRegion *_region;
    CLLocation *_location;
    NSString *_thoroughfare;
    NSString *_subThoroughfare;
    NSString *_locality;
    NSString *_subLocality;
    NSString *_administrativeArea;
    NSString *_subAdministrativeArea;
    NSString *_ISOcountryCode;
    NSString *_inlandWater;
    NSString *_ocean;
    NSArray *_areasOfInterest;
    NSString *_administrativeAreaCode;
}

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLCircularRegion *region;
@property (retain, nonatomic) NSString *thoroughfare;
@property (retain, nonatomic) NSString *subThoroughfare;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *subLocality;
@property (retain, nonatomic) NSString *administrativeArea;
@property (retain, nonatomic) NSString *administrativeAreaCode;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (retain, nonatomic) NSString *ISOcountryCode;
@property (retain, nonatomic) NSString *inlandWater;
@property (retain, nonatomic) NSString *ocean;
@property (retain, nonatomic) NSArray *areasOfInterest;
@property (nonatomic) _Bool isIsland;

@end
