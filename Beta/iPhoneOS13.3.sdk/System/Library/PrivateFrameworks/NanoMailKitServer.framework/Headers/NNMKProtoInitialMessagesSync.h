/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NNMKProtoMailbox, NSData, NSMutableArray, NSString;

@interface NNMKProtoInitialMessagesSync : PBCodable

{
    NSData *_dateForRequestingMoreMessages;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSMutableArray *_initialMessages;
    NNMKProtoMailbox *_mailbox;
    unsigned int _mailboxSyncVersion;
    NSString *_syncedMailboxAccountId;
    NSString *_syncedMailboxCustomName;
    unsigned int _syncedMailboxType;
    NSString *_syncedMailboxURL;
    _Bool _organizedByThread;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int mailboxSyncVersion:1;
        unsigned int syncedMailboxType:1;
        unsigned int organizedByThread:1;
    } _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) _Bool hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (retain, nonatomic) NSMutableArray *initialMessages;
@property (nonatomic, readonly) _Bool hasDateForRequestingMoreMessages;
@property (retain, nonatomic) NSData *dateForRequestingMoreMessages;
@property (nonatomic) _Bool hasSyncedMailboxType;
@property (nonatomic) unsigned int syncedMailboxType;
@property (nonatomic, readonly) _Bool hasSyncedMailboxAccountId;
@property (retain, nonatomic) NSString *syncedMailboxAccountId;
@property (nonatomic, readonly) _Bool hasSyncedMailboxURL;
@property (retain, nonatomic) NSString *syncedMailboxURL;
@property (nonatomic, readonly) _Bool hasSyncedMailboxCustomName;
@property (retain, nonatomic) NSString *syncedMailboxCustomName;
@property (nonatomic, readonly) _Bool hasMailbox;
@property (retain, nonatomic) NNMKProtoMailbox *mailbox;
@property (nonatomic) _Bool hasMailboxSyncVersion;
@property (nonatomic) unsigned int mailboxSyncVersion;
@property (nonatomic) _Bool hasOrganizedByThread;
@property (nonatomic) _Bool organizedByThread;

+ (Class)initialMessageType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addInitialMessage:(id)arg1;
- (unsigned long long)initialMessagesCount;
- (void)clearInitialMessages;
- (id)initialMessageAtIndex:(unsigned long long)arg1;

@end
