/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <PBCodable.h>

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSData, NSString;

@interface VCPBChange : PBCodable <Swift>

{
    int _changeType;
    NSData *_message;
    int _messageType;
    NSString *_uniqueID;
}

@property (nonatomic) int messageType;
@property (nonatomic) int changeType;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSData *message;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)messageTypeAsString:(int)arg1;
- (int)StringAsMessageType:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
- (int)StringAsChangeType:(id)arg1;

@end
