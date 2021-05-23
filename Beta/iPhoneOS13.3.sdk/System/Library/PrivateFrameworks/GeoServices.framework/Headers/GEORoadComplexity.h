/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

@interface GEORoadComplexity : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributes;
    unsigned int _offset;
    struct {
        unsigned int has_offset:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *attributes;
@property (nonatomic) _Bool hasOffset;
@property (nonatomic) unsigned int offset;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributeType;
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
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)addAttribute:(id)arg1;
- (id)attributeAtIndex:(unsigned long long)arg1;

@end
