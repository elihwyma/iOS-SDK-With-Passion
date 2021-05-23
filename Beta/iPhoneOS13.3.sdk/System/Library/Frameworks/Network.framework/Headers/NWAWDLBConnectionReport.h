/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface NWAWDLBConnectionReport : PBCodable

{
    CDStruct_5df41632 _connectionReadyTimes;
    CDStruct_95bda58d _resumptionFailureErrors;
    CDStruct_5df41632 _resumptionFailureTimes;
    CDStruct_5df41632 _resumptionSuccessTimes;
    long long _bytesReceived;
    long long _bytesSent;
    long long _clientConnectionCount;
    long long _connectionDuration;
    unsigned long long _timestamp;
    int _connectionAttemptCount;
    int _connectionCellularFallbackCount;
    int _connectionFailureCount;
    int _connectionSuccessMptcpCount;
    int _connectionSuccessTcpCount;
    int _resumptionFailureCount;
    int _resumptionSuccessCount;
    int _suspensionCount;
    int _upgradeSuccessAndNotNeededCount;
    int _upgradeSuccessAndPrimaryCount;
    struct {
        unsigned int bytesReceived:1;
        unsigned int bytesSent:1;
        unsigned int clientConnectionCount:1;
        unsigned int connectionDuration:1;
        unsigned int timestamp:1;
        unsigned int connectionAttemptCount:1;
        unsigned int connectionCellularFallbackCount:1;
        unsigned int connectionFailureCount:1;
        unsigned int connectionSuccessMptcpCount:1;
        unsigned int connectionSuccessTcpCount:1;
        unsigned int resumptionFailureCount:1;
        unsigned int resumptionSuccessCount:1;
        unsigned int suspensionCount:1;
        unsigned int upgradeSuccessAndNotNeededCount:1;
        unsigned int upgradeSuccessAndPrimaryCount:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasConnectionAttemptCount;
@property (nonatomic) int connectionAttemptCount;
@property (nonatomic) _Bool hasConnectionSuccessMptcpCount;
@property (nonatomic) int connectionSuccessMptcpCount;
@property (nonatomic) _Bool hasConnectionSuccessTcpCount;
@property (nonatomic) int connectionSuccessTcpCount;
@property (nonatomic) _Bool hasConnectionFailureCount;
@property (nonatomic) int connectionFailureCount;
@property (nonatomic) _Bool hasConnectionCellularFallbackCount;
@property (nonatomic) int connectionCellularFallbackCount;
@property (nonatomic, readonly) unsigned long long connectionReadyTimesCount;
@property (nonatomic, readonly) long long *connectionReadyTimes;
@property (nonatomic) _Bool hasSuspensionCount;
@property (nonatomic) int suspensionCount;
@property (nonatomic) _Bool hasResumptionSuccessCount;
@property (nonatomic) int resumptionSuccessCount;
@property (nonatomic) _Bool hasResumptionFailureCount;
@property (nonatomic) int resumptionFailureCount;
@property (nonatomic, readonly) unsigned long long resumptionFailureErrorsCount;
@property (nonatomic, readonly) int *resumptionFailureErrors;
@property (nonatomic, readonly) unsigned long long resumptionSuccessTimesCount;
@property (nonatomic, readonly) long long *resumptionSuccessTimes;
@property (nonatomic, readonly) unsigned long long resumptionFailureTimesCount;
@property (nonatomic, readonly) long long *resumptionFailureTimes;
@property (nonatomic) _Bool hasUpgradeSuccessAndPrimaryCount;
@property (nonatomic) int upgradeSuccessAndPrimaryCount;
@property (nonatomic) _Bool hasUpgradeSuccessAndNotNeededCount;
@property (nonatomic) int upgradeSuccessAndNotNeededCount;
@property (nonatomic) _Bool hasConnectionDuration;
@property (nonatomic) long long connectionDuration;
@property (nonatomic) _Bool hasBytesSent;
@property (nonatomic) long long bytesSent;
@property (nonatomic) _Bool hasBytesReceived;
@property (nonatomic) long long bytesReceived;
@property (nonatomic) _Bool hasClientConnectionCount;
@property (nonatomic) long long clientConnectionCount;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearConnectionReadyTimes;
- (void)addConnectionReadyTimes:(long long)arg1;
- (long long)connectionReadyTimesAtIndex:(unsigned long long)arg1;
- (void)setConnectionReadyTimes:(long long *)arg1 count:(unsigned long long)arg2;
- (void)clearResumptionFailureErrors;
- (void)addResumptionFailureErrors:(int)arg1;
- (int)resumptionFailureErrorsAtIndex:(unsigned long long)arg1;
- (void)setResumptionFailureErrors:(int *)arg1 count:(unsigned long long)arg2;
- (void)clearResumptionSuccessTimes;
- (void)addResumptionSuccessTimes:(long long)arg1;
- (long long)resumptionSuccessTimesAtIndex:(unsigned long long)arg1;
- (void)setResumptionSuccessTimes:(long long *)arg1 count:(unsigned long long)arg2;
- (void)clearResumptionFailureTimes;
- (void)addResumptionFailureTimes:(long long)arg1;
- (long long)resumptionFailureTimesAtIndex:(unsigned long long)arg1;
- (void)setResumptionFailureTimes:(long long *)arg1 count:(unsigned long long)arg2;

@end
