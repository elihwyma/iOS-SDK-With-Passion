/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOEquatorialCelestialBodyData : NSObject

{
    double _rightAscension;
    double _declination;
}

@property (nonatomic, readonly) double rightAscension;
@property (nonatomic, readonly) double declination;

- (id)initWithDate:(id)arg1 body:(long long)arg2 useHighPrecision:(_Bool)arg3;
- (id)initWithJulianDay:(double)arg1 body:(long long)arg2 useHighPrecision:(_Bool)arg3;
- (id)initWithDate:(id)arg1 body:(long long)arg2;
- (id)initWithJulianDay:(double)arg1 body:(long long)arg2;

@end
