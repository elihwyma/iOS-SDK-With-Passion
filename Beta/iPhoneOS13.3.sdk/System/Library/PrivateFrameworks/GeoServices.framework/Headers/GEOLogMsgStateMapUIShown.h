/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOLogMsgStateMapUIShown : PBCodable

{
    _Bool _isAirQualityShown;
    _Bool _isLookAroundEntryIconShown;
    _Bool _isVenueExperienceShown;
    _Bool _isWeatherShown;
    struct {
        unsigned int has_isAirQualityShown:1;
        unsigned int has_isLookAroundEntryIconShown:1;
        unsigned int has_isVenueExperienceShown:1;
        unsigned int has_isWeatherShown:1;
    } _flags;
}

@property (nonatomic) _Bool hasIsAirQualityShown;
@property (nonatomic) _Bool isAirQualityShown;
@property (nonatomic) _Bool hasIsWeatherShown;
@property (nonatomic) _Bool isWeatherShown;
@property (nonatomic) _Bool hasIsVenueExperienceShown;
@property (nonatomic) _Bool isVenueExperienceShown;
@property (nonatomic) _Bool hasIsLookAroundEntryIconShown;
@property (nonatomic) _Bool isLookAroundEntryIconShown;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;

@end
