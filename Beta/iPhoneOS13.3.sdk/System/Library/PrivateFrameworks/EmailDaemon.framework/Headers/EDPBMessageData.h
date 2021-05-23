/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/Swift-Protocol.h>

@class EDPBMessageHeaders;

@interface EDPBMessageData : PBCodable <Swift>

{
    long long _accountId;
    long long _conversationId;
    long long _mailboxId;
    long long _messageId;
    EDPBMessageHeaders *_headers;
    int _mailboxType;
    CDStruct_11e5c17e _has;
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
@property (nonatomic, readonly) _Bool hasHeaders;
@property (retain, nonatomic) EDPBMessageHeaders *headers;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (int)messageFrameType;
- (void)withHasher:(id)arg1 setDataFromMessage:(id)arg2 account:(id)arg3;
- (void)withHasher:(id)arg1 setDataFromMessage:(id)arg2;
- (id)mailboxTypeAsString:(int)arg1;
- (int)StringAsMailboxType:(id)arg1;

@end
