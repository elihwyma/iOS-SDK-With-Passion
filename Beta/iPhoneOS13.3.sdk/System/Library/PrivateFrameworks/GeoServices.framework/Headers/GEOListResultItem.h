/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOListResultItem : PBCodable

{
    unsigned long long _businessId;
    long long _latency;
    int _resultType;
    int _tappedCount;
    _Bool _eventuallyVisible;
    _Bool _initiallyVisible;
    struct {
        unsigned int has_businessId:1;
        unsigned int has_latency:1;
        unsigned int has_resultType:1;
        unsigned int has_tappedCount:1;
        unsigned int has_eventuallyVisible:1;
        unsigned int has_initiallyVisible:1;
    } _flags;
}

@property (nonatomic) _Bool hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) _Bool hasInitiallyVisible;
@property (nonatomic) _Bool initiallyVisible;
@property (nonatomic) _Bool hasEventuallyVisible;
@property (nonatomic) _Bool eventuallyVisible;
@property (nonatomic) _Bool hasLatency;
@property (nonatomic) long long latency;
@property (nonatomic) _Bool hasTappedCount;
@property (nonatomic) int tappedCount;
@property (nonatomic) _Bool hasBusinessId;
@property (nonatomic) unsigned long long businessId;

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
- (id)resultTypeAsString:(int)arg1;
- (int)StringAsResultType:(id)arg1;

@end
