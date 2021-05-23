/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/Swift-Protocol.h>

@interface EDPBInteractionEventFlagChanged : PBCodable <Swift>

{
    long long _accountId;
    long long _conversationId;
    long long _mailboxId;
    long long _messageId;
    int _mailboxType;
    _Bool _value;
    CDStruct_1b0f2210 _has;
}

@property (nonatomic) long long accountId;
@property (nonatomic) long long mailboxId;
@property (nonatomic) int mailboxType;
@property (nonatomic) long long conversationId;
@property (nonatomic) long long messageId;
@property (nonatomic) _Bool hasAccountId;
@property (nonatomic) long long accountId;
@property (nonatomic) _Bool hasMailboxId;
@property (nonatomic) long long mailboxId;
@property (nonatomic) _Bool hasMailboxType;
@property (nonatomic) int mailboxType;
@property (nonatomic) _Bool hasConversationId;
@property (nonatomic) long long conversationId;
@property (nonatomic) _Bool hasMessageId;
@property (nonatomic) long long messageId;
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
- (void)withHasher:(id)arg1 setMessage:(id)arg2 data:(id)arg3;
- (id)mailboxTypeAsString:(int)arg1;
- (int)StringAsMailboxType:(id)arg1;

@end
