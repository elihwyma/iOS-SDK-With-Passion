/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/Swift-Protocol.h>

@interface EDPBInteractionEventMessageCopied : PBCodable <Swift>

{
    long long _accountId;
    long long _conversationId;
    long long _fromMailboxId;
    long long _messageId;
    long long _toMailboxId;
    int _fromMailboxType;
    int _toMailboxType;
    CDStruct_b83e950b _has;
}

@property (nonatomic) _Bool hasAccountId;
@property (nonatomic) long long accountId;
@property (nonatomic) _Bool hasConversationId;
@property (nonatomic) long long conversationId;
@property (nonatomic) _Bool hasMessageId;
@property (nonatomic) long long messageId;
@property (nonatomic) _Bool hasFromMailboxId;
@property (nonatomic) long long fromMailboxId;
@property (nonatomic) _Bool hasFromMailboxType;
@property (nonatomic) int fromMailboxType;
@property (nonatomic) _Bool hasToMailboxId;
@property (nonatomic) long long toMailboxId;
@property (nonatomic) _Bool hasToMailboxType;
@property (nonatomic) int toMailboxType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)withHasher:(id)arg1 setMessage:(id)arg2 mailbox:(id)arg3;
- (id)fromMailboxTypeAsString:(int)arg1;
- (int)StringAsFromMailboxType:(id)arg1;
- (id)toMailboxTypeAsString:(int)arg1;
- (int)StringAsToMailboxType:(id)arg1;

@end
