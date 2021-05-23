/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDSymptomsNetworkAnalyticsHistorical : PBCodable

{
    unsigned long long _bytesIn;
    unsigned long long _bytesOut;
    unsigned long long _connAttempts;
    unsigned long long _connSuccess;
    unsigned long long _dnsCompleteFailures;
    unsigned long long _dnsPartialFailures;
    unsigned long long _epochs;
    unsigned long long _faultyStaySecs;
    unsigned long long _packetsIn;
    unsigned long long _packetsOut;
    unsigned long long _secsSinceLastTrimmed;
    unsigned long long _timestamp;
    unsigned long long _totalStaySecs;
    NSString *_identifier;
    int _networkType;
    struct {
        unsigned int bytesIn:1;
        unsigned int bytesOut:1;
        unsigned int connAttempts:1;
        unsigned int connSuccess:1;
        unsigned int dnsCompleteFailures:1;
        unsigned int dnsPartialFailures:1;
        unsigned int epochs:1;
        unsigned int faultyStaySecs:1;
        unsigned int packetsIn:1;
        unsigned int packetsOut:1;
        unsigned int secsSinceLastTrimmed:1;
        unsigned int timestamp:1;
        unsigned int totalStaySecs:1;
        unsigned int networkType:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) _Bool hasEpochs;
@property (nonatomic) unsigned long long epochs;
@property (nonatomic) _Bool hasTotalStaySecs;
@property (nonatomic) unsigned long long totalStaySecs;
@property (nonatomic) _Bool hasFaultyStaySecs;
@property (nonatomic) unsigned long long faultyStaySecs;
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
@property (nonatomic) _Bool hasSecsSinceLastTrimmed;
@property (nonatomic) unsigned long long secsSinceLastTrimmed;
@property (nonatomic) _Bool hasDnsPartialFailures;
@property (nonatomic) unsigned long long dnsPartialFailures;
@property (nonatomic) _Bool hasDnsCompleteFailures;
@property (nonatomic) unsigned long long dnsCompleteFailures;

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
