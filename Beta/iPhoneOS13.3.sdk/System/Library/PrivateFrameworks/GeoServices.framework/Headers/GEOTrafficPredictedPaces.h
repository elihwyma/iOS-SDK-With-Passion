/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficPredictedPaces : PBCodable

{
    PBDataReader *_reader;
    CDStruct_9f2792e4 _encodedPaces;
    CDStruct_9f2792e4 _secondsInFutures;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_encodedPaces:1;
        unsigned int read_secondsInFutures:1;
        unsigned int wrote_encodedPaces:1;
        unsigned int wrote_secondsInFutures:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long secondsInFuturesCount;
@property (nonatomic, readonly) unsigned int *secondsInFutures;
@property (nonatomic, readonly) unsigned long long encodedPacesCount;
@property (nonatomic, readonly) unsigned int *encodedPaces;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (void)_readSecondsInFutures;
- (void)_addNoFlagsSecondsInFuture:(unsigned int)arg1;
- (void)_readEncodedPaces;
- (void)_addNoFlagsEncodedPace:(unsigned int)arg1;
- (void)clearSecondsInFutures;
- (unsigned int)secondsInFutureAtIndex:(unsigned long long)arg1;
- (void)addSecondsInFuture:(unsigned int)arg1;
- (void)clearEncodedPaces;
- (unsigned int)encodedPaceAtIndex:(unsigned long long)arg1;
- (void)addEncodedPace:(unsigned int)arg1;
- (void)setSecondsInFutures:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setEncodedPaces:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
