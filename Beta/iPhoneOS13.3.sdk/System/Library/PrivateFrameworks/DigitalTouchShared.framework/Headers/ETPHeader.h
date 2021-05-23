/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface ETPHeader : PBCodable

{
    long long _sendDate;
    double _startDelay;
    unsigned int _baseColor;
    NSString *_identifier;
    NSData *_messageData;
    int _messageType;
    _Bool _supportsPlaybackTimeOffsets;
    struct {
        unsigned int sendDate:1;
        unsigned int startDelay:1;
        unsigned int baseColor:1;
        unsigned int messageType:1;
        unsigned int supportsPlaybackTimeOffsets:1;
    } _has;
}

@property (nonatomic) _Bool hasMessageType;
@property (nonatomic) int messageType;
@property (nonatomic) _Bool hasSendDate;
@property (nonatomic) long long sendDate;
@property (nonatomic, readonly) _Bool hasMessageData;
@property (retain, nonatomic) NSData *messageData;
@property (nonatomic) _Bool hasBaseColor;
@property (nonatomic) unsigned int baseColor;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasSupportsPlaybackTimeOffsets;
@property (nonatomic) _Bool supportsPlaybackTimeOffsets;
@property (nonatomic) _Bool hasStartDelay;
@property (nonatomic) double startDelay;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)messageTypeAsString:(int)arg1;
- (int)StringAsMessageType:(id)arg1;

@end
