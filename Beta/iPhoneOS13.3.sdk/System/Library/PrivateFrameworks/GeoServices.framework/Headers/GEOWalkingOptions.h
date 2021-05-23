/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOWalkingOptions : PBCodable

{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _avoidedModes;
    double _preferredSpeed;
    struct {
        unsigned int has_preferredSpeed:1;
    } _flags;
}

@property (nonatomic) _Bool hasPreferredSpeed;
@property (nonatomic) double preferredSpeed;
@property (nonatomic, readonly) unsigned long long avoidedModesCount;
@property (nonatomic, readonly) int *avoidedModes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (void)dealloc;
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
- (int)avoidedModeAtIndex:(unsigned long long)arg1;
- (id)avoidedModesAsString:(int)arg1;
- (void)clearAvoidedModes;
- (void)addAvoidedMode:(int)arg1;
- (void)setAvoidedModes:(int *)arg1 count:(unsigned long long)arg2;
- (int)StringAsAvoidedModes:(id)arg1;

@end
