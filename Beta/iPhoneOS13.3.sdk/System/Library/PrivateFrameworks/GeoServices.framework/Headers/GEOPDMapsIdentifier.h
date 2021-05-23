/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDShardedId, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsIdentifier : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOPDShardedId *_shardedId;
}

@property (nonatomic, readonly) _Bool hasShardedId;
@property (retain, nonatomic) GEOPDShardedId *shardedId;
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
