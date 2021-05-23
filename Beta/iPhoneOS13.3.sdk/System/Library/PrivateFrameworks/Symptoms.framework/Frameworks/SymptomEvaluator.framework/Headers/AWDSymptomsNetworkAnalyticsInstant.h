/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDSymptomsNetworkAnalyticsInstant : PBCodable

{
    unsigned long long _bytesIn;
    unsigned long long _bytesOut;
    unsigned long long _connAttempts;
    unsigned long long _connSuccess;
    unsigned long long _cumulInternetOutageSecs;
    unsigned long long _lastReportedL2TxFail;
    unsigned long long _lastReportedL2TxFrames;
    unsigned long long _lastReportedL2TxReTry;
    unsigned long long _packetsIn;
    unsigned long long _packetsOut;
    unsigned long long _rttMinUsecs;
    unsigned long long _timestamp;
    unsigned int _arpThreshold;
    unsigned int _dnsServers;
    NSString *_identifier;
    int _lastReportedLQM;
    unsigned int _lastReportedRSSI;
    int _networkType;
    unsigned int _penalizedDnsServers;
    unsigned int _rxSignalThreshold;
    _Bool _arpThresholded;
    _Bool _hasInternetConn;
    _Bool _rxSignalThresholded;
    _Bool _supportsIPv4;
    _Bool _supportsIPv6;
    struct {
        unsigned int bytesIn:1;
        unsigned int bytesOut:1;
        unsigned int connAttempts:1;
        unsigned int connSuccess:1;
        unsigned int cumulInternetOutageSecs:1;
        unsigned int lastReportedL2TxFail:1;
        unsigned int lastReportedL2TxFrames:1;
        unsigned int lastReportedL2TxReTry:1;
        unsigned int packetsIn:1;
        unsigned int packetsOut:1;
        unsigned int rttMinUsecs:1;
        unsigned int timestamp:1;
        unsigned int arpThreshold:1;
        unsigned int dnsServers:1;
        unsigned int lastReportedLQM:1;
        unsigned int lastReportedRSSI:1;
        unsigned int networkType:1;
        unsigned int penalizedDnsServers:1;
        unsigned int rxSignalThreshold:1;
        unsigned int arpThresholded:1;
        unsigned int hasInternetConn:1;
        unsigned int rxSignalThresholded:1;
        unsigned int supportsIPv4:1;
        unsigned int supportsIPv6:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) _Bool hasHasInternetConn;
@property (nonatomic) _Bool hasInternetConn;
@property (nonatomic) _Bool hasCumulInternetOutageSecs;
@property (nonatomic) unsigned long long cumulInternetOutageSecs;
@property (nonatomic) _Bool hasConnAttempts;
@property (nonatomic) unsigned long long connAttempts;
@property (nonatomic) _Bool hasConnSuccess;
@property (nonatomic) unsigned long long connSuccess;
@property (nonatomic) _Bool hasPacketsIn;
@property (nonatomic) unsigned long long packetsIn;
@property (nonatomic) _Bool hasPacketsOut;
@property (nonatomic) unsigned long long packetsOut;
@property (nonatomic) _Bool hasBytesIn;
@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) _Bool hasBytesOut;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) _Bool hasRttMinUsecs;
@property (nonatomic) unsigned long long rttMinUsecs;
@property (nonatomic) _Bool hasDnsServers;
@property (nonatomic) unsigned int dnsServers;
@property (nonatomic) _Bool hasPenalizedDnsServers;
@property (nonatomic) unsigned int penalizedDnsServers;
@property (nonatomic) _Bool hasRxSignalThreshold;
@property (nonatomic) unsigned int rxSignalThreshold;
@property (nonatomic) _Bool hasRxSignalThresholded;
@property (nonatomic) _Bool rxSignalThresholded;
@property (nonatomic) _Bool hasArpThreshold;
@property (nonatomic) unsigned int arpThreshold;
@property (nonatomic) _Bool hasArpThresholded;
@property (nonatomic) _Bool arpThresholded;
@property (nonatomic) _Bool hasSupportsIPv4;
@property (nonatomic) _Bool supportsIPv4;
@property (nonatomic) _Bool hasSupportsIPv6;
@property (nonatomic) _Bool supportsIPv6;
@property (nonatomic) _Bool hasLastReportedRSSI;
@property (nonatomic) unsigned int lastReportedRSSI;
@property (nonatomic) _Bool hasLastReportedLQM;
@property (nonatomic) int lastReportedLQM;
@property (nonatomic) _Bool hasLastReportedL2TxFrames;
@property (nonatomic) unsigned long long lastReportedL2TxFrames;
@property (nonatomic) _Bool hasLastReportedL2TxReTry;
@property (nonatomic) unsigned long long lastReportedL2TxReTry;
@property (nonatomic) _Bool hasLastReportedL2TxFail;
@property (nonatomic) unsigned long long lastReportedL2TxFail;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)networkTypeAsString:(int)arg1;
- (int)StringAsNetworkType:(id)arg1;

@end
