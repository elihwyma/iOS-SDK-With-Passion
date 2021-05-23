/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEORPGroundViewImageResource : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned int _cameraNumber;
    int _loadStatus;
    unsigned int _lod;
    struct {
        unsigned int has_cameraNumber:1;
        unsigned int has_loadStatus:1;
        unsigned int has_lod:1;
    } _flags;
}

@property (nonatomic) _Bool hasCameraNumber;
@property (nonatomic) unsigned int cameraNumber;
@property (nonatomic) _Bool hasLod;
@property (nonatomic) unsigned int lod;
@property (nonatomic) _Bool hasLoadStatus;
@property (nonatomic) int loadStatus;
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
- (id)loadStatusAsString:(int)arg1;
- (int)StringAsLoadStatus:(id)arg1;

@end
