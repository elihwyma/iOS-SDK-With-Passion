/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOTransitSectionOption : PBCodable

{
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _sections;
    unsigned int _defaultSectionIndex;
    struct {
        unsigned int has_defaultSectionIndex:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long sectionsCount;
@property (nonatomic, readonly) unsigned int *sections;
@property (nonatomic) _Bool hasDefaultSectionIndex;
@property (nonatomic) unsigned int defaultSectionIndex;
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
- (unsigned int)sectionAtIndex:(unsigned long long)arg1;
- (void)addSection:(unsigned int)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearSections;
- (void)setSections:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
