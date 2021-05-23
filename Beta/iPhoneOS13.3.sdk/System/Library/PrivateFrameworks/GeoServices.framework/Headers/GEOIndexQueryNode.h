/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOIndexQueryNode : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_field;
    NSMutableArray *_operands;
    NSString *_value;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _type;
    CDStruct_24aeab2f _flags;
}

@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasField;
@property (retain, nonatomic) NSString *field;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSMutableArray *operands;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)operandsType;

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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)_readValue;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readField;
- (void)_readOperands;
- (void)_addNoFlagsOperands:(id)arg1;
- (unsigned long long)operandsCount;
- (void)clearOperands;
- (id)operandsAtIndex:(unsigned long long)arg1;
- (void)addOperands:(id)arg1;

@end
