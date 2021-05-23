/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString;

@interface GEOLogMsgStateRealtimeTrafficProbe : PBCodable

{
    long long _recvTime;
    NSString *_tripId;
    int _probeCount;
    struct {
        unsigned int has_recvTime:1;
        unsigned int has_probeCount:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasTripId;
@property (retain, nonatomic) NSString *tripId;
@property (nonatomic) _Bool hasRecvTime;
@property (nonatomic) long long recvTime;
@property (nonatomic) _Bool hasProbeCount;
@property (nonatomic) int probeCount;

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

@end
