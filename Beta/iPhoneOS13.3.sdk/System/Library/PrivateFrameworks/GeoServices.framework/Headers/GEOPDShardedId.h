/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDShardedId : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned long long _basemapId;
    GEOLatLng *_center;
    unsigned long long _muid;
    int _resultProviderId;
    struct {
        unsigned int has_basemapId:1;
        unsigned int has_muid:1;
        unsigned int has_resultProviderId:1;
    } _flags;
}

@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) _Bool hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (nonatomic) _Bool hasBasemapId;
@property (nonatomic) unsigned long long basemapId;
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

@end
