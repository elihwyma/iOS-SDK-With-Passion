/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PPM2FeedbackPortraitRegistered : PBCodable

{
    NSString *_clientId;
    int _domain;
    NSString *_mappingId;
    NSMutableArray *_records;
    int _type;
    NSString *_variantId;
    _Bool _fromPortrait;
    struct {
        unsigned int domain:1;
        unsigned int type:1;
        unsigned int fromPortrait:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic, readonly) _Bool hasVariantId;
@property (retain, nonatomic) NSString *variantId;
@property (nonatomic) _Bool hasDomain;
@property (nonatomic) int domain;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (nonatomic) _Bool hasFromPortrait;
@property (nonatomic) _Bool fromPortrait;
@property (retain, nonatomic) NSMutableArray *records;

+ (Class)recordsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (id)domainAsString:(int)arg1;
- (int)StringAsDomain:(id)arg1;
- (void)addRecords:(id)arg1;
- (unsigned long long)recordsCount;
- (void)clearRecords;
- (id)recordsAtIndex:(unsigned long long)arg1;

@end
