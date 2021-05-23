/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface KCellularDownlinkIpPacketDiscarded : PBCodable

{
    unsigned long long _timestamp;
    NSData *_packet;
    unsigned int _port;
    unsigned int _protocol;
    unsigned int _subsId;
    struct {
        unsigned int timestamp:1;
        unsigned int port:1;
        unsigned int protocol:1;
        unsigned int subsId:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasProtocol;
@property (nonatomic) unsigned int protocol;
@property (nonatomic) _Bool hasPort;
@property (nonatomic) unsigned int port;
@property (nonatomic, readonly) _Bool hasPacket;
@property (retain, nonatomic) NSData *packet;
@property (nonatomic) _Bool hasSubsId;
@property (nonatomic) unsigned int subsId;

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
