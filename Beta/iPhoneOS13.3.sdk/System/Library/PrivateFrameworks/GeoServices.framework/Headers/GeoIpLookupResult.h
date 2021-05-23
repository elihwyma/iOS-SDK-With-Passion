/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GeoIpLookupResult : NSObject

{
    NSString *_ipAddress;
    CDStruct_2c43369c _latLong;
    NSString *_countryCode;
    NSString *_timeZone;
}

@property (nonatomic, readonly) NSString *ipAddress;
@property (nonatomic, readonly) CDStruct_c3b9c2ee latLong;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *timeZone;

- (id)initWithGEOPDPlaceResponse:(id)arg1;

@end
