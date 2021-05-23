/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOHorizontalCelestialBodyData : NSObject

{
    double _altitude;
    double _azimuth;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double azimuth;

- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(_Bool)arg4;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 julianDay:(double)arg2 body:(long long)arg3 useHighPrecision:(_Bool)arg4;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3;

@end
