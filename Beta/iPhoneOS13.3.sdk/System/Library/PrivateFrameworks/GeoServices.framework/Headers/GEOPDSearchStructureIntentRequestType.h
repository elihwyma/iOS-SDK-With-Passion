/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchStructureIntentRequestType : PBCodable

{
    PBUnknownFields *_unknownFields;
    int _intentType;
    int _structureType;
    struct {
        unsigned int has_intentType:1;
        unsigned int has_structureType:1;
    } _flags;
}

@property (nonatomic) _Bool hasStructureType;
@property (nonatomic) int structureType;
@property (nonatomic) _Bool hasIntentType;
@property (nonatomic) int intentType;
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
- (id)structureTypeAsString:(int)arg1;
- (int)StringAsStructureType:(id)arg1;
- (id)intentTypeAsString:(int)arg1;
- (int)StringAsIntentType:(id)arg1;

@end
