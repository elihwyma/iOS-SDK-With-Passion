/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOCacheMiss : PBCodable

{
    NSMutableArray *_errors;
    unsigned int _bytes;
    unsigned int _count;
    unsigned int _httpStatus;
    int _missType;
    int _requestorType;
    struct {
        unsigned int has_bytes:1;
        unsigned int has_count:1;
        unsigned int has_httpStatus:1;
        unsigned int has_missType:1;
        unsigned int has_requestorType:1;
    } _flags;
}

@property (nonatomic) _Bool hasRequestorType;
@property (nonatomic) int requestorType;
@property (nonatomic) _Bool hasMissType;
@property (nonatomic) int missType;
@property (nonatomic) _Bool hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) _Bool hasBytes;
@property (nonatomic) unsigned int bytes;
@property (retain, nonatomic) NSMutableArray *errors;
@property (nonatomic) _Bool hasHttpStatus;
@property (nonatomic) unsigned int httpStatus;

+ (_Bool)isValid:(id)arg1;
+ (Class)errorsType;

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
- (void)addErrors:(id)arg1;
- (unsigned long long)errorsCount;
- (void)clearErrors;
- (id)errorsAtIndex:(unsigned long long)arg1;
- (id)requestorTypeAsString:(int)arg1;
- (int)StringAsRequestorType:(id)arg1;
- (id)missTypeAsString:(int)arg1;
- (int)StringAsMissType:(id)arg1;

@end
