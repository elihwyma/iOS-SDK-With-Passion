/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDSymptomsNetworkTCPFlowThroughputEvent : PBCodable

{
    unsigned long long _connAttempts;
    unsigned long long _connSuccess;
    unsigned long long _delayedACKFactor;
    unsigned long long _dlThroughputBytesPerSec;
    unsigned long long _estimatorConfidence;
    unsigned long long _estimatorDelayMsecs;
    unsigned long long _flowDurationMsecs;
    unsigned long long _invalidResponses;
    long long _lQM;
    unsigned long long _maxCongestionWindow;
    unsigned long long _packetErrorRate;
    unsigned long long _retransmissionTimeoutMsecs;
    unsigned long long _rttAverageMsecs;
    unsigned long long _rttMinimumMsecs;
    unsigned long long _rttVariation;
    unsigned long long _rxBytes;
    unsigned long long _rxDuplicateBytes;
    unsigned long long _rxOutOfOrderBytes;
    unsigned long long _timeToNetworkEventsMsecs;
    unsigned long long _txBytes;
    unsigned long long _txRetransmittedBytes;
    unsigned long long _ulThroughputBytesPerSec;
    int _snapshotType;
    int _throughputType;
    struct {
        unsigned int connAttempts:1;
        unsigned int connSuccess:1;
        unsigned int delayedACKFactor:1;
        unsigned int dlThroughputBytesPerSec:1;
        unsigned int estimatorConfidence:1;
        unsigned int estimatorDelayMsecs:1;
        unsigned int flowDurationMsecs:1;
        unsigned int invalidResponses:1;
        unsigned int lQM:1;
        unsigned int maxCongestionWindow:1;
        unsigned int packetErrorRate:1;
        unsigned int retransmissionTimeoutMsecs:1;
        unsigned int rttAverageMsecs:1;
        unsigned int rttMinimumMsecs:1;
        unsigned int rttVariation:1;
        unsigned int rxBytes:1;
        unsigned int rxDuplicateBytes:1;
        unsigned int rxOutOfOrderBytes:1;
        unsigned int timeToNetworkEventsMsecs:1;
        unsigned int txBytes:1;
        unsigned int txRetransmittedBytes:1;
        unsigned int ulThroughputBytesPerSec:1;
        unsigned int snapshotType:1;
        unsigned int throughputType:1;
    } _has;
}

@property (nonatomic) _Bool hasTimeToNetworkEventsMsecs;
@property (nonatomic) unsigned long long timeToNetworkEventsMsecs;
@property (nonatomic) _Bool hasThroughputType;
@property (nonatomic) int throughputType;
@property (nonatomic) _Bool hasSnapshotType;
@property (nonatomic) int snapshotType;
@property (nonatomic) _Bool hasTxBytes;
@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) _Bool hasRxBytes;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) _Bool hasFlowDurationMsecs;
@property (nonatomic) unsigned long long flowDurationMsecs;
@property (nonatomic) _Bool hasUlThroughputBytesPerSec;
@property (nonatomic) unsigned long long ulThroughputBytesPerSec;
@property (nonatomic) _Bool hasDlThroughputBytesPerSec;
@property (nonatomic) unsigned long long dlThroughputBytesPerSec;
@property (nonatomic) _Bool hasEstimatorDelayMsecs;
@property (nonatomic) unsigned long long estimatorDelayMsecs;
@property (nonatomic) _Bool hasEstimatorConfidence;
@property (nonatomic) unsigned long long estimatorConfidence;
@property (nonatomic) _Bool hasInvalidResponses;
@property (nonatomic) unsigned long long invalidResponses;
@property (nonatomic) _Bool hasRxDuplicateBytes;
@property (nonatomic) unsigned long long rxDuplicateBytes;
@property (nonatomic) _Bool hasRxOutOfOrderBytes;
@property (nonatomic) unsigned long long rxOutOfOrderBytes;
@property (nonatomic) _Bool hasTxRetransmittedBytes;
@property (nonatomic) unsigned long long txRetransmittedBytes;
@property (nonatomic) _Bool hasConnAttempts;
@property (nonatomic) unsigned long long connAttempts;
@property (nonatomic) _Bool hasConnSuccess;
@property (nonatomic) unsigned long long connSuccess;
@property (nonatomic) _Bool hasRttMinimumMsecs;
@property (nonatomic) unsigned long long rttMinimumMsecs;
@property (nonatomic) _Bool hasRttAverageMsecs;
@property (nonatomic) unsigned long long rttAverageMsecs;
@property (nonatomic) _Bool hasRttVariation;
@property (nonatomic) unsigned long long rttVariation;
@property (nonatomic) _Bool hasMaxCongestionWindow;
@property (nonatomic) unsigned long long maxCongestionWindow;
@property (nonatomic) _Bool hasDelayedACKFactor;
@property (nonatomic) unsigned long long delayedACKFactor;
@property (nonatomic) _Bool hasRetransmissionTimeoutMsecs;
@property (nonatomic) unsigned long long retransmissionTimeoutMsecs;
@property (nonatomic) _Bool hasPacketErrorRate;
@property (nonatomic) unsigned long long packetErrorRate;
@property (nonatomic) _Bool hasLQM;
@property (nonatomic) long long lQM;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)throughputTypeAsString:(int)arg1;
- (int)StringAsThroughputType:(id)arg1;
- (id)snapshotTypeAsString:(int)arg1;
- (int)StringAsSnapshotType:(id)arg1;

@end
