/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreTCPStatsReport : PBCodable

{
    unsigned long long _tcpConnectionAccepts;
    unsigned long long _tcpConnectionAttempts;
    unsigned long long _tcpIPv4AvgRTT;
    unsigned long long _tcpIPv6AvgRTT;
    unsigned long long _tcpRecvPLR;
    unsigned long long _tcpSendPLR;
    unsigned long long _tcpSendReorderRate;
    unsigned long long _tcpSendTLRTO;
    struct {
        unsigned int tcpConnectionAccepts:1;
        unsigned int tcpConnectionAttempts:1;
        unsigned int tcpIPv4AvgRTT:1;
        unsigned int tcpIPv6AvgRTT:1;
        unsigned int tcpRecvPLR:1;
        unsigned int tcpSendPLR:1;
        unsigned int tcpSendReorderRate:1;
        unsigned int tcpSendTLRTO:1;
    } _has;
}

@property (nonatomic) _Bool hasTcpIPv4AvgRTT;
@property (nonatomic) unsigned long long tcpIPv4AvgRTT;
@property (nonatomic) _Bool hasTcpIPv6AvgRTT;
@property (nonatomic) unsigned long long tcpIPv6AvgRTT;
@property (nonatomic) _Bool hasTcpSendPLR;
@property (nonatomic) unsigned long long tcpSendPLR;
@property (nonatomic) _Bool hasTcpRecvPLR;
@property (nonatomic) unsigned long long tcpRecvPLR;
@property (nonatomic) _Bool hasTcpSendTLRTO;
@property (nonatomic) unsigned long long tcpSendTLRTO;
@property (nonatomic) _Bool hasTcpSendReorderRate;
@property (nonatomic) unsigned long long tcpSendReorderRate;
@property (nonatomic) _Bool hasTcpConnectionAttempts;
@property (nonatomic) unsigned long long tcpConnectionAttempts;
@property (nonatomic) _Bool hasTcpConnectionAccepts;
@property (nonatomic) unsigned long long tcpConnectionAccepts;

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
