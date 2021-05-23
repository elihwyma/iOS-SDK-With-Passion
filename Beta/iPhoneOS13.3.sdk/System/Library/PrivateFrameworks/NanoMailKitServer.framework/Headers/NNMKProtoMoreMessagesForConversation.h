/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMoreMessagesForConversation : PBCodable

{
    NSMutableArray *_addedMessages;
    NSString *_conversationId;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    unsigned int _mailboxSyncVersion;
    CDStruct_8d07e858 _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) _Bool hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (nonatomic, readonly) _Bool hasConversationId;
@property (retain, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSMutableArray *addedMessages;
@property (nonatomic, readonly) _Bool hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) _Bool hasMailboxSyncVersion;
@property (nonatomic) unsigned int mailboxSyncVersion;

+ (Class)addedMessageType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAddedMessage:(id)arg1;
- (unsigned long long)addedMessagesCount;
- (void)clearAddedMessages;
- (id)addedMessageAtIndex:(unsigned long long)arg1;

@end
