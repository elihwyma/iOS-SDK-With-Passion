/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOPBTransitScheduleLookupParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned long long _lineId;
    unsigned long long _referenceTripId;
    unsigned long long _transitId;
    struct {
        unsigned int has_lineId:1;
        unsigned int has_referenceTripId:1;
        unsigned int has_transitId:1;
    } _flags;
}

@property (nonatomic) _Bool hasLineId;
@property (nonatomic) unsigned long long lineId;
@property (nonatomic) _Bool hasTransitId;
@property (nonatomic) unsigned long long transitId;
@property (nonatomic) _Bool hasReferenceTripId;
@property (nonatomic) unsigned long long referenceTripId;
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
