/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOSolarEclipticCelestialBodyData : NSObject

{
    double _latitude;
    double _longitude;
}

@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;

- (id)initWithDate:(id)arg1 body:(long long)arg2 useHighPrecision:(_Bool)arg3;
- (id)initWithJulianDay:(double)arg1 body:(long long)arg2 useHighPrecision:(_Bool)arg3;
- (id)initWithDate:(id)arg1 body:(long long)arg2;

@end
