/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreTCPECNStatsReport : PBCodable

{
    unsigned long long _tcpECNClientSetup;
    unsigned long long _tcpECNClientSuccess;
    unsigned long long _tcpECNConnNoPacketLossCE;
    unsigned long long _tcpECNConnPacketLossCE;
    unsigned long long _tcpECNConnPacketLossNoCE;
    unsigned long long _tcpECNConnRecvCE;
    unsigned long long _tcpECNConnRecvECE;
    unsigned long long _tcpECNFallbackCE;
    unsigned long long _tcpECNFallbackReorder;
    unsigned long long _tcpECNFallbackSynLoss;
    unsigned long long _tcpECNNotSupportedPeer;
    unsigned long long _tcpECNRecvCE;
    unsigned long long _tcpECNRecvECE;
    unsigned long long _tcpECNSentECE;
    unsigned long long _tcpECNServerSetup;
    unsigned long long _tcpECNServerSuccess;
    unsigned long long _tcpECNSynAckLost;
    unsigned long long _tcpECNSynLost;
    _Bool _tcpECNClientNegotiationEnabled;
    _Bool _tcpECNServerNegotiationEnabled;
    struct {
        unsigned int tcpECNClientSetup:1;
        unsigned int tcpECNClientSuccess:1;
        unsigned int tcpECNConnNoPacketLossCE:1;
        unsigned int tcpECNConnPacketLossCE:1;
        unsigned int tcpECNConnPacketLossNoCE:1;
        unsigned int tcpECNConnRecvCE:1;
        unsigned int tcpECNConnRecvECE:1;
        unsigned int tcpECNFallbackCE:1;
        unsigned int tcpECNFallbackReorder:1;
        unsigned int tcpECNFallbackSynLoss:1;
        unsigned int tcpECNNotSupportedPeer:1;
        unsigned int tcpECNRecvCE:1;
        unsigned int tcpECNRecvECE:1;
        unsigned int tcpECNSentECE:1;
        unsigned int tcpECNServerSetup:1;
        unsigned int tcpECNServerSuccess:1;
        unsigned int tcpECNSynAckLost:1;
        unsigned int tcpECNSynLost:1;
        unsigned int tcpECNClientNegotiationEnabled:1;
        unsigned int tcpECNServerNegotiationEnabled:1;
    } _has;
}

@property (nonatomic) _Bool hasTcpECNClientNegotiationEnabled;
@property (nonatomic) _Bool tcpECNClientNegotiationEnabled;
@property (nonatomic) _Bool hasTcpECNServerNegotiationEnabled;
@property (nonatomic) _Bool tcpECNServerNegotiationEnabled;
@property (nonatomic) _Bool hasTcpECNClientSetup;
@property (nonatomic) unsigned long long tcpECNClientSetup;
@property (nonatomic) _Bool hasTcpECNServerSetup;
@property (nonatomic) unsigned long long tcpECNServerSetup;
@property (nonatomic) _Bool hasTcpECNClientSuccess;
@property (nonatomic) unsigned long long tcpECNClientSuccess;
@property (nonatomic) _Bool hasTcpECNServerSuccess;
@property (nonatomic) unsigned long long tcpECNServerSuccess;
@property (nonatomic) _Bool hasTcpECNNotSupportedPeer;
@property (nonatomic) unsigned long long tcpECNNotSupportedPeer;
@property (nonatomic) _Bool hasTcpECNSynLost;
@property (nonatomic) unsigned long long tcpECNSynLost;
@property (nonatomic) _Bool hasTcpECNSynAckLost;
@property (nonatomic) unsigned long long tcpECNSynAckLost;
@property (nonatomic) _Bool hasTcpECNRecvCE;
@property (nonatomic) unsigned long long tcpECNRecvCE;
@property (nonatomic) _Bool hasTcpECNRecvECE;
@property (nonatomic) unsigned long long tcpECNRecvECE;
@property (nonatomic) _Bool hasTcpECNSentECE;
@property (nonatomic) unsigned long long tcpECNSentECE;
@property (nonatomic) _Bool hasTcpECNConnRecvCE;
@property (nonatomic) unsigned long long tcpECNConnRecvCE;
@property (nonatomic) _Bool hasTcpECNConnRecvECE;
@property (nonatomic) unsigned long long tcpECNConnRecvECE;
@property (nonatomic) _Bool hasTcpECNConnPacketLossNoCE;
@property (nonatomic) unsigned long long tcpECNConnPacketLossNoCE;
@property (nonatomic) _Bool hasTcpECNConnPacketLossCE;
@property (nonatomic) unsigned long long tcpECNConnPacketLossCE;
@property (nonatomic) _Bool hasTcpECNConnNoPacketLossCE;
@property (nonatomic) unsigned long long tcpECNConnNoPacketLossCE;
@property (nonatomic) _Bool hasTcpECNFallbackSynLoss;
@property (nonatomic) unsigned long long tcpECNFallbackSynLoss;
@property (nonatomic) _Bool hasTcpECNFallbackReorder;
@property (nonatomic) unsigned long long tcpECNFallbackReorder;
@property (nonatomic) _Bool hasTcpECNFallbackCE;
@property (nonatomic) unsigned long long tcpECNFallbackCE;

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
