/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface NWAWDLBClientConnectionReport : PBCodable

{
    long long _bytesReceived;
    long long _bytesSent;
    long long _connectionDuration;
    unsigned long long _connectionServiceId;
    long long _timeToConnectionFailure;
    long long _timeToFirstResponse;
    unsigned long long _timestamp;
    int _connectionJoiningFailure;
    int _connectionJoiningLbConnectionMigration;
    int _connectionJoiningLbConnectionState;
    int _dataPathResult;
    struct {
        unsigned int bytesReceived:1;
        unsigned int bytesSent:1;
        unsigned int connectionDuration:1;
        unsigned int connectionServiceId:1;
        unsigned int timeToConnectionFailure:1;
        unsigned int timeToFirstResponse:1;
        unsigned int timestamp:1;
        unsigned int connectionJoiningFailure:1;
        unsigned int connectionJoiningLbConnectionMigration:1;
        unsigned int connectionJoiningLbConnectionState:1;
        unsigned int dataPathResult:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasConnectionJoiningFailure;
@property (nonatomic) int connectionJoiningFailure;
@property (nonatomic) _Bool hasConnectionJoiningLbConnectionState;
@property (nonatomic) int connectionJoiningLbConnectionState;
@property (nonatomic) _Bool hasConnectionJoiningLbConnectionMigration;
@property (nonatomic) int connectionJoiningLbConnectionMigration;
@property (nonatomic) _Bool hasConnectionServiceId;
@property (nonatomic) unsigned long long connectionServiceId;
@property (nonatomic) _Bool hasConnectionDuration;
@property (nonatomic) long long connectionDuration;
@property (nonatomic) _Bool hasDataPathResult;
@property (nonatomic) int dataPathResult;
@property (nonatomic) _Bool hasBytesSent;
@property (nonatomic) long long bytesSent;
@property (nonatomic) _Bool hasBytesReceived;
@property (nonatomic) long long bytesReceived;
@property (nonatomic) _Bool hasTimeToFirstResponse;
@property (nonatomic) long long timeToFirstResponse;
@property (nonatomic) _Bool hasTimeToConnectionFailure;
@property (nonatomic) long long timeToConnectionFailure;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
