/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupBatchResponse : PBCodable

{
    NSMutableArray *_responses;
    int _statusCode;
    CDStruct_ade9d5f7 _flags;
}

@property (nonatomic) _Bool hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *responses;

+ (_Bool)isValid:(id)arg1;
+ (Class)responseType;

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
- (void)clearSensitiveFields;
- (void)addResponse:(id)arg1;
- (unsigned long long)responsesCount;
- (void)clearResponses;
- (id)responseAtIndex:(unsigned long long)arg1;
- (id)statusCodeAsString:(int)arg1;
- (int)StringAsStatusCode:(id)arg1;

@end
