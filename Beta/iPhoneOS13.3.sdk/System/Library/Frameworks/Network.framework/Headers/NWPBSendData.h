/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NWPBSendData : PBCodable

{
    NSString *_clientUUID;
    NSData *_messageData;
    unsigned int _receiveWindow;
    struct {
        unsigned int receiveWindow:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasClientUUID;
@property (retain, nonatomic) NSString *clientUUID;
@property (nonatomic, readonly) _Bool hasMessageData;
@property (retain, nonatomic) NSData *messageData;
@property (nonatomic) _Bool hasReceiveWindow;
@property (nonatomic) unsigned int receiveWindow;

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
