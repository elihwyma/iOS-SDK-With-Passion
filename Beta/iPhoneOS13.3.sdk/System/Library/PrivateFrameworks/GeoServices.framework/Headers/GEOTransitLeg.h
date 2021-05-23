/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOTransitLeg : PBCodable

{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _restrictedToSectionIndexs;
    int _sectionOptionIndex;
    struct {
        unsigned int has_sectionOptionIndex:1;
    } _flags;
}

@property (nonatomic) _Bool hasSectionOptionIndex;
@property (nonatomic) int sectionOptionIndex;
@property (nonatomic, readonly) unsigned long long restrictedToSectionIndexsCount;
@property (nonatomic, readonly) int *restrictedToSectionIndexs;
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
- (void)clearRestrictedToSectionIndexs;
- (int)restrictedToSectionIndexAtIndex:(unsigned long long)arg1;
- (void)addRestrictedToSectionIndex:(int)arg1;
- (void)setRestrictedToSectionIndexs:(int *)arg1 count:(unsigned long long)arg2;

@end
