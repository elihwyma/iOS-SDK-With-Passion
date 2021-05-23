/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEONameInfo, PBUnknownFields;

@interface GEORouteName : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEONameInfo *_nameInfo;
    int _lastZilchStitchedIndex;
    struct {
        unsigned int has_lastZilchStitchedIndex:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasNameInfo;
@property (retain, nonatomic) GEONameInfo *nameInfo;
@property (nonatomic) _Bool hasLastZilchStitchedIndex;
@property (nonatomic) int lastZilchStitchedIndex;
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
