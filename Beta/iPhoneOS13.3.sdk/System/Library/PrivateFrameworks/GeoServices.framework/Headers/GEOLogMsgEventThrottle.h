/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEOLogMsgEventThrottle : PBCodable

{
    PBDataReader *_reader;
    NSString *_manifestEnv;
    NSString *_requestAppIdentifier;
    double _throttleDuration;
    NSString *_throttleReqType;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _networkService;
    unsigned int _throttleCount;
    int _throttleMode;
    unsigned int _throttleTriggerCount;
    unsigned int _throttleTriggerDuration;
    int _throttleType;
    unsigned int _tilesetId;
    struct {
        unsigned int has_throttleDuration:1;
        unsigned int has_networkService:1;
        unsigned int has_throttleCount:1;
        unsigned int has_throttleMode:1;
        unsigned int has_throttleTriggerCount:1;
        unsigned int has_throttleTriggerDuration:1;
        unsigned int has_throttleType:1;
        unsigned int has_tilesetId:1;
        unsigned int read_manifestEnv:1;
        unsigned int read_requestAppIdentifier:1;
        unsigned int read_throttleReqType:1;
        unsigned int wrote_manifestEnv:1;
        unsigned int wrote_requestAppIdentifier:1;
        unsigned int wrote_throttleDuration:1;
        unsigned int wrote_throttleReqType:1;
        unsigned int wrote_networkService:1;
        unsigned int wrote_throttleCount:1;
        unsigned int wrote_throttleMode:1;
        unsigned int wrote_throttleTriggerCount:1;
        unsigned int wrote_throttleTriggerDuration:1;
        unsigned int wrote_throttleType:1;
        unsigned int wrote_tilesetId:1;
    } _flags;
}

@property (nonatomic) _Bool hasNetworkService;
@property (nonatomic) int networkService;
@property (nonatomic, readonly) _Bool hasRequestAppIdentifier;
@property (retain, nonatomic) NSString *requestAppIdentifier;
@property (nonatomic, readonly) _Bool hasManifestEnv;
@property (retain, nonatomic) NSString *manifestEnv;
@property (nonatomic) _Bool hasTilesetId;
@property (nonatomic) unsigned int tilesetId;
@property (nonatomic) _Bool hasThrottleType;
@property (nonatomic) int throttleType;
@property (nonatomic) _Bool hasThrottleMode;
@property (nonatomic) int throttleMode;
@property (nonatomic, readonly) _Bool hasThrottleReqType;
@property (retain, nonatomic) NSString *throttleReqType;
@property (nonatomic) _Bool hasThrottleTriggerCount;
@property (nonatomic) unsigned int throttleTriggerCount;
@property (nonatomic) _Bool hasThrottleTriggerDuration;
@property (nonatomic) unsigned int throttleTriggerDuration;
@property (nonatomic) _Bool hasThrottleCount;
@property (nonatomic) unsigned int throttleCount;
@property (nonatomic) _Bool hasThrottleDuration;
@property (nonatomic) double throttleDuration;

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
- (void)_readRequestAppIdentifier;
- (void)_readManifestEnv;
- (void)_readThrottleReqType;
- (id)networkServiceAsString:(int)arg1;
- (int)StringAsNetworkService:(id)arg1;
- (id)throttleTypeAsString:(int)arg1;
- (int)StringAsThrottleType:(id)arg1;
- (id)throttleModeAsString:(int)arg1;
- (int)StringAsThrottleMode:(id)arg1;

@end
