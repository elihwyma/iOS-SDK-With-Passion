/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOCelestialRiseTransitSet, GEOEquatorialCelestialBodyData, GEOHorizontalCelestialBodyData, GEOSolarEclipticCelestialBodyData, NSDate;

@interface GEOCelestialEphemeris : NSObject

{
    GEOCelestialRiseTransitSet *_riseTransitSet;
    double _julianDay;
    CDStruct_2c43369c _coordinate;
    long long _body;
    GEOSolarEclipticCelestialBodyData *_eclipticCoord;
    GEOEquatorialCelestialBodyData *_equatorialCoord;
    GEOHorizontalCelestialBodyData *_horizontalCoord;
    double _phaseAngle;
    double _illuminatedFraction;
    double _elongation;
    double _parallacticAngle;
    _Bool _highPrecision;
}

@property (nonatomic, readonly) NSDate *rise;
@property (nonatomic, readonly) NSDate *transit;
@property (nonatomic, readonly) _Bool isTransitAboveHorizon;
@property (nonatomic, readonly) NSDate *set;
@property (nonatomic, readonly) double phaseAngle;
@property (nonatomic, readonly) double illuminatedFraction;
@property (nonatomic, readonly) double elongation;
@property (nonatomic, readonly) double parallacticAngle;
@property (nonatomic, readonly) GEOSolarEclipticCelestialBodyData *eclipticCoord;
@property (nonatomic, readonly) GEOEquatorialCelestialBodyData *equatorialCoord;
@property (nonatomic, readonly) GEOHorizontalCelestialBodyData *horizontalCoord;

- (id)description;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(_Bool)arg4;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 julianDay:(double)arg2 body:(long long)arg3 altitude:(double)arg4 useHighPrecision:(_Bool)arg5;

@end
