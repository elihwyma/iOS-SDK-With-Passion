/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoBatchedFetchResult : PBCodable

{
    NSData *_dateForRequestingMoreMessages;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    unsigned int _mailboxSyncVersion;
    NSMutableArray *_messageAdditions;
    NSMutableArray *_messageDeletions;
    NSMutableArray *_messageUpdates;
    _Bool _shouldTrimDatabase;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int mailboxSyncVersion:1;
        unsigned int shouldTrimDatabase:1;
    } _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) _Bool hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (retain, nonatomic) NSMutableArray *messageAdditions;
@property (retain, nonatomic) NSMutableArray *messageUpdates;
@property (retain, nonatomic) NSMutableArray *messageDeletions;
@property (nonatomic, readonly) _Bool hasDateForRequestingMoreMessages;
@property (retain, nonatomic) NSData *dateForRequestingMoreMessages;
@property (nonatomic) _Bool hasShouldTrimDatabase;
@property (nonatomic) _Bool shouldTrimDatabase;
@property (nonatomic, readonly) _Bool hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) _Bool hasMailboxSyncVersion;
@property (nonatomic) unsigned int mailboxSyncVersion;

+ (Class)messageDeletionType;
+ (Class)messageAdditionType;
+ (Class)messageUpdateType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addMessageAddition:(id)arg1;
- (void)addMessageUpdate:(id)arg1;
- (void)addMessageDeletion:(id)arg1;
- (unsigned long long)messageAdditionsCount;
- (unsigned long long)messageDeletionsCount;
- (void)clearMessageDeletions;
- (id)messageDeletionAtIndex:(unsigned long long)arg1;
- (void)clearMessageAdditions;
- (id)messageAdditionAtIndex:(unsigned long long)arg1;
- (unsigned long long)messageUpdatesCount;
- (void)clearMessageUpdates;
- (id)messageUpdateAtIndex:(unsigned long long)arg1;

@end
