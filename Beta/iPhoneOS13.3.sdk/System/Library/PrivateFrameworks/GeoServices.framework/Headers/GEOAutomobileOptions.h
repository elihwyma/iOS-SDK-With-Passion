/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOUserPreferences, PBUnknownFields;

@interface GEOAutomobileOptions : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOUserPreferences *_userPreferences;
    int _trafficType;
    _Bool _includeHistoricTravelTime;
    _Bool _includeStaticTravelTime;
    struct {
        unsigned int has_trafficType:1;
        unsigned int has_includeHistoricTravelTime:1;
        unsigned int has_includeStaticTravelTime:1;
    } _flags;
}

@property (nonatomic) _Bool hasIncludeHistoricTravelTime;
@property (nonatomic) _Bool includeHistoricTravelTime;
@property (nonatomic) _Bool hasTrafficType;
@property (nonatomic) int trafficType;
@property (nonatomic) _Bool hasIncludeStaticTravelTime;
@property (nonatomic) _Bool includeStaticTravelTime;
@property (nonatomic, readonly) _Bool hasUserPreferences;
@property (retain, nonatomic) GEOUserPreferences *userPreferences;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (id)trafficTypeAsString:(int)arg1;
- (int)StringAsTrafficType:(id)arg1;

@end
