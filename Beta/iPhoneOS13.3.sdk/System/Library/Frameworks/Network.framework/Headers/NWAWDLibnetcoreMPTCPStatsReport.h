/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreMPTCPStatsReport : PBCodable

{
    unsigned long long _mptcpAggregateAllBytes;
    unsigned long long _mptcpAggregateAttempt;
    unsigned long long _mptcpAggregateCellBytes;
    unsigned long long _mptcpBackToWiFi;
    unsigned long long _mptcpCellDenied;
    unsigned long long _mptcpCellProxy;
    unsigned long long _mptcpFirstPartyAggregateAttempt;
    unsigned long long _mptcpFirstPartyHandoverAttempt;
    unsigned long long _mptcpFirstPartyInteractiveAttempt;
    unsigned long long _mptcpHandoverAllBytes;
    unsigned long long _mptcpHandoverAttempts;
    unsigned long long _mptcpHandoverCellBytes;
    unsigned long long _mptcpHandoverCellSubflowFromWiFi;
    unsigned long long _mptcpHandoverWiFiSubflowFromCell;
    unsigned long long _mptcpHandshakeAggregateSuccess;
    unsigned long long _mptcpHandshakeAggregateSuccessFirstParty;
    unsigned long long _mptcpHandshakeHandoverSuccessCell;
    unsigned long long _mptcpHandshakeHandoverSuccessCellFirstParty;
    unsigned long long _mptcpHandshakeHandoverSuccessWiFi;
    unsigned long long _mptcpHandshakeHandoverSuccessWiFiFirstParty;
    unsigned long long _mptcpHandshakeInteractiveSuccess;
    unsigned long long _mptcpHandshakeInteractiveSuccessFirstParty;
    unsigned long long _mptcpHeuristicFallback;
    unsigned long long _mptcpHeuristicFallbackFirstParty;
    unsigned long long _mptcpInteractiveAllBytes;
    unsigned long long _mptcpInteractiveAttempt;
    unsigned long long _mptcpInteractiveCellBytes;
    unsigned long long _mptcpInteractiveCellUsage;
    unsigned long long _mptcpTriggeredCell;
    unsigned long long _mptcpWiFiProxy;
    struct {
        unsigned int mptcpAggregateAllBytes:1;
        unsigned int mptcpAggregateAttempt:1;
        unsigned int mptcpAggregateCellBytes:1;
        unsigned int mptcpBackToWiFi:1;
        unsigned int mptcpCellDenied:1;
        unsigned int mptcpCellProxy:1;
        unsigned int mptcpFirstPartyAggregateAttempt:1;
        unsigned int mptcpFirstPartyHandoverAttempt:1;
        unsigned int mptcpFirstPartyInteractiveAttempt:1;
        unsigned int mptcpHandoverAllBytes:1;
        unsigned int mptcpHandoverAttempts:1;
        unsigned int mptcpHandoverCellBytes:1;
        unsigned int mptcpHandoverCellSubflowFromWiFi:1;
        unsigned int mptcpHandoverWiFiSubflowFromCell:1;
        unsigned int mptcpHandshakeAggregateSuccess:1;
        unsigned int mptcpHandshakeAggregateSuccessFirstParty:1;
        unsigned int mptcpHandshakeHandoverSuccessCell:1;
        unsigned int mptcpHandshakeHandoverSuccessCellFirstParty:1;
        unsigned int mptcpHandshakeHandoverSuccessWiFi:1;
        unsigned int mptcpHandshakeHandoverSuccessWiFiFirstParty:1;
        unsigned int mptcpHandshakeInteractiveSuccess:1;
        unsigned int mptcpHandshakeInteractiveSuccessFirstParty:1;
        unsigned int mptcpHeuristicFallback:1;
        unsigned int mptcpHeuristicFallbackFirstParty:1;
        unsigned int mptcpInteractiveAllBytes:1;
        unsigned int mptcpInteractiveAttempt:1;
        unsigned int mptcpInteractiveCellBytes:1;
        unsigned int mptcpInteractiveCellUsage:1;
        unsigned int mptcpTriggeredCell:1;
        unsigned int mptcpWiFiProxy:1;
    } _has;
}

@property (nonatomic) _Bool hasMptcpHandoverAttempts;
@property (nonatomic) unsigned long long mptcpHandoverAttempts;
@property (nonatomic) _Bool hasMptcpInteractiveAttempt;
@property (nonatomic) unsigned long long mptcpInteractiveAttempt;
@property (nonatomic) _Bool hasMptcpAggregateAttempt;
@property (nonatomic) unsigned long long mptcpAggregateAttempt;
@property (nonatomic) _Bool hasMptcpFirstPartyHandoverAttempt;
@property (nonatomic) unsigned long long mptcpFirstPartyHandoverAttempt;
@property (nonatomic) _Bool hasMptcpFirstPartyInteractiveAttempt;
@property (nonatomic) unsigned long long mptcpFirstPartyInteractiveAttempt;
@property (nonatomic) _Bool hasMptcpFirstPartyAggregateAttempt;
@property (nonatomic) unsigned long long mptcpFirstPartyAggregateAttempt;
@property (nonatomic) _Bool hasMptcpHeuristicFallback;
@property (nonatomic) unsigned long long mptcpHeuristicFallback;
@property (nonatomic) _Bool hasMptcpHeuristicFallbackFirstParty;
@property (nonatomic) unsigned long long mptcpHeuristicFallbackFirstParty;
@property (nonatomic) _Bool hasMptcpHandshakeHandoverSuccessWiFi;
@property (nonatomic) unsigned long long mptcpHandshakeHandoverSuccessWiFi;
@property (nonatomic) _Bool hasMptcpHandshakeHandoverSuccessCell;
@property (nonatomic) unsigned long long mptcpHandshakeHandoverSuccessCell;
@property (nonatomic) _Bool hasMptcpHandshakeInteractiveSuccess;
@property (nonatomic) unsigned long long mptcpHandshakeInteractiveSuccess;
@property (nonatomic) _Bool hasMptcpHandshakeAggregateSuccess;
@property (nonatomic) unsigned long long mptcpHandshakeAggregateSuccess;
@property (nonatomic) _Bool hasMptcpHandshakeHandoverSuccessWiFiFirstParty;
@property (nonatomic) unsigned long long mptcpHandshakeHandoverSuccessWiFiFirstParty;
@property (nonatomic) _Bool hasMptcpHandshakeHandoverSuccessCellFirstParty;
@property (nonatomic) unsigned long long mptcpHandshakeHandoverSuccessCellFirstParty;
@property (nonatomic) _Bool hasMptcpHandshakeInteractiveSuccessFirstParty;
@property (nonatomic) unsigned long long mptcpHandshakeInteractiveSuccessFirstParty;
@property (nonatomic) _Bool hasMptcpHandshakeAggregateSuccessFirstParty;
@property (nonatomic) unsigned long long mptcpHandshakeAggregateSuccessFirstParty;
@property (nonatomic) _Bool hasMptcpHandoverCellSubflowFromWiFi;
@property (nonatomic) unsigned long long mptcpHandoverCellSubflowFromWiFi;
@property (nonatomic) _Bool hasMptcpHandoverWiFiSubflowFromCell;
@property (nonatomic) unsigned long long mptcpHandoverWiFiSubflowFromCell;
@property (nonatomic) _Bool hasMptcpInteractiveCellUsage;
@property (nonatomic) unsigned long long mptcpInteractiveCellUsage;
@property (nonatomic) _Bool hasMptcpHandoverCellBytes;
@property (nonatomic) unsigned long long mptcpHandoverCellBytes;
@property (nonatomic) _Bool hasMptcpInteractiveCellBytes;
@property (nonatomic) unsigned long long mptcpInteractiveCellBytes;
@property (nonatomic) _Bool hasMptcpAggregateCellBytes;
@property (nonatomic) unsigned long long mptcpAggregateCellBytes;
@property (nonatomic) _Bool hasMptcpHandoverAllBytes;
@property (nonatomic) unsigned long long mptcpHandoverAllBytes;
@property (nonatomic) _Bool hasMptcpInteractiveAllBytes;
@property (nonatomic) unsigned long long mptcpInteractiveAllBytes;
@property (nonatomic) _Bool hasMptcpAggregateAllBytes;
@property (nonatomic) unsigned long long mptcpAggregateAllBytes;
@property (nonatomic) _Bool hasMptcpBackToWiFi;
@property (nonatomic) unsigned long long mptcpBackToWiFi;
@property (nonatomic) _Bool hasMptcpCellDenied;
@property (nonatomic) unsigned long long mptcpCellDenied;
@property (nonatomic) _Bool hasMptcpCellProxy;
@property (nonatomic) unsigned long long mptcpCellProxy;
@property (nonatomic) _Bool hasMptcpWiFiProxy;
@property (nonatomic) unsigned long long mptcpWiFiProxy;
@property (nonatomic) _Bool hasMptcpTriggeredCell;
@property (nonatomic) unsigned long long mptcpTriggeredCell;

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
