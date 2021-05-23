/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORouteTrafficDetail : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_spokenRouteName;
    NSString *_unabbreviatedRouteName;
    NSString *_writtenRouteName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _routeTrafficCondition;
    struct {
        unsigned int has_routeTrafficCondition:1;
        unsigned int read_unknownFields:1;
        unsigned int read_spokenRouteName:1;
        unsigned int read_unabbreviatedRouteName:1;
        unsigned int read_writtenRouteName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_spokenRouteName:1;
        unsigned int wrote_unabbreviatedRouteName:1;
        unsigned int wrote_writtenRouteName:1;
        unsigned int wrote_routeTrafficCondition:1;
    } _flags;
}

@property (nonatomic) _Bool hasRouteTrafficCondition;
@property (nonatomic) int routeTrafficCondition;
@property (nonatomic, readonly) _Bool hasWrittenRouteName;
@property (retain, nonatomic) NSString *writtenRouteName;
@property (nonatomic, readonly) _Bool hasSpokenRouteName;
@property (retain, nonatomic) NSString *spokenRouteName;
@property (nonatomic, readonly) _Bool hasUnabbreviatedRouteName;
@property (retain, nonatomic) NSString *unabbreviatedRouteName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

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
- (void)_readWrittenRouteName;
- (void)_readSpokenRouteName;
- (void)_readUnabbreviatedRouteName;
- (id)routeTrafficConditionAsString:(int)arg1;
- (int)StringAsRouteTrafficCondition:(id)arg1;

@end
