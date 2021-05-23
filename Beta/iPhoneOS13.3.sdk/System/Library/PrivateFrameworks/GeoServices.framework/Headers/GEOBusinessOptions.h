/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOBusinessOptions : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributeKeys;
    NSMutableArray *_photoOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _maxBusinessResults;
    _Bool _includeBusinessHours;
    _Bool _includeCenter;
    struct {
        unsigned int has_maxBusinessResults:1;
        unsigned int has_includeBusinessHours:1;
        unsigned int has_includeCenter:1;
        unsigned int read_unknownFields:1;
        unsigned int read_attributeKeys:1;
        unsigned int read_photoOptions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_attributeKeys:1;
        unsigned int wrote_photoOptions:1;
        unsigned int wrote_maxBusinessResults:1;
        unsigned int wrote_includeBusinessHours:1;
        unsigned int wrote_includeCenter:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *photoOptions;
@property (retain, nonatomic) NSMutableArray *attributeKeys;
@property (nonatomic) _Bool hasIncludeBusinessHours;
@property (nonatomic) _Bool includeBusinessHours;
@property (nonatomic) _Bool hasMaxBusinessResults;
@property (nonatomic) int maxBusinessResults;
@property (nonatomic) _Bool hasIncludeCenter;
@property (nonatomic) _Bool includeCenter;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)photoOptionsType;
+ (Class)attributeKeyType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readPhotoOptions;
- (void)_addNoFlagsPhotoOptions:(id)arg1;
- (void)_readAttributeKeys;
- (void)_addNoFlagsAttributeKey:(id)arg1;
- (unsigned long long)photoOptionsCount;
- (void)clearPhotoOptions;
- (id)photoOptionsAtIndex:(unsigned long long)arg1;
- (void)addPhotoOptions:(id)arg1;
- (unsigned long long)attributeKeysCount;
- (void)clearAttributeKeys;
- (id)attributeKeyAtIndex:(unsigned long long)arg1;
- (void)addAttributeKey:(id)arg1;

@end
