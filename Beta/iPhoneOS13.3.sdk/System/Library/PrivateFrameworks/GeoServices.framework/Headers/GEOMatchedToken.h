/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOMatchedToken : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _geoIds;
    NSString *_matchedToken;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _geoType;
    struct {
        unsigned int has_geoType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_geoIds:1;
        unsigned int read_matchedToken:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_geoIds:1;
        unsigned int wrote_matchedToken:1;
        unsigned int wrote_geoType:1;
    } _flags;
}

@property (retain, nonatomic) NSString *matchedToken;
@property (nonatomic) _Bool hasGeoType;
@property (nonatomic) int geoType;
@property (nonatomic, readonly) unsigned long long geoIdsCount;
@property (nonatomic, readonly) unsigned long long *geoIds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readGeoIds;
- (void)clearGeoIds;
- (void)setGeoIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)geoIdAtIndex:(unsigned long long)arg1;
- (void)addGeoId:(unsigned long long)arg1;
- (void)_readMatchedToken;
- (void)_addNoFlagsGeoId:(unsigned long long)arg1;

@end
