/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NWPBCommandMessage : PBCodable

{
    int _command;
    NSData *_messageData;
    struct {
        unsigned int command:1;
    } _has;
}

@property (nonatomic) _Bool hasCommand;
@property (nonatomic) int command;
@property (nonatomic, readonly) _Bool hasMessageData;
@property (retain, nonatomic) NSData *messageData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)commandAsString:(int)arg1;
- (int)StringAsCommand:(id)arg1;

@end
