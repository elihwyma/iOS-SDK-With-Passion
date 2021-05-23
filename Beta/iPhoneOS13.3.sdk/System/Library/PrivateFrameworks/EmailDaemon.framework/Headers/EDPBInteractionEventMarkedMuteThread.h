/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/Swift-Protocol.h>

@interface EDPBInteractionEventMarkedMuteThread : PBCodable <Swift>

{
    long long _conversationId;
    _Bool _value;
    struct {
        unsigned int conversationId:1;
        unsigned int value:1;
    } _has;
}

@property (nonatomic) _Bool hasConversationId;
@property (nonatomic) long long conversationId;
@property (nonatomic) _Bool hasValue;
@property (nonatomic) _Bool value;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)withHasher:(id)arg1 setConversationID:(long long)arg2 data:(id)arg3;

@end
