/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@interface PPM2DatabaseCheckViolationCount : PBCodable

{
    int _pragmaCheckType;
    unsigned int _schemaVersion;
    struct {
        unsigned int pragmaCheckType:1;
        unsigned int schemaVersion:1;
    } _has;
}

@property (nonatomic) _Bool hasSchemaVersion;
@property (nonatomic) unsigned int schemaVersion;
@property (nonatomic) _Bool hasPragmaCheckType;
@property (nonatomic) int pragmaCheckType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)pragmaCheckTypeAsString:(int)arg1;
- (int)StringAsPragmaCheckType:(id)arg1;

@end
