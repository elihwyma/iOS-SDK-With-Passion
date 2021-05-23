/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEORPCorrectedFlag : PBCodable

{
    int _flag;
    _Bool _correctedValue;
    _Bool _originalValue;
    struct {
        unsigned int has_flag:1;
        unsigned int has_correctedValue:1;
        unsigned int has_originalValue:1;
    } _flags;
}

@property (nonatomic) _Bool hasFlag;
@property (nonatomic) int flag;
@property (nonatomic) _Bool hasOriginalValue;
@property (nonatomic) _Bool originalValue;
@property (nonatomic) _Bool hasCorrectedValue;
@property (nonatomic) _Bool correctedValue;

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
- (id)flagAsString:(int)arg1;
- (int)StringAsFlag:(id)arg1;

@end
