/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackLayoutFormConfig : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_layoutFields;
    int _formType;
    unsigned int _ttl;
    struct {
        unsigned int has_formType:1;
        unsigned int has_ttl:1;
    } _flags;
}

@property (nonatomic) _Bool hasTtl;
@property (nonatomic) unsigned int ttl;
@property (nonatomic) _Bool hasFormType;
@property (nonatomic) int formType;
@property (retain, nonatomic) NSMutableArray *layoutFields;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)layoutFieldType;

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
- (id)formTypeAsString:(int)arg1;
- (int)StringAsFormType:(id)arg1;
- (void)addLayoutField:(id)arg1;
- (unsigned long long)layoutFieldsCount;
- (void)clearLayoutFields;
- (id)layoutFieldAtIndex:(unsigned long long)arg1;

@end
