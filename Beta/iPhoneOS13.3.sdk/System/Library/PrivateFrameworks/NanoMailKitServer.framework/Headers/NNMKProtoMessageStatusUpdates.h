/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessageStatusUpdates : PBCodable

{
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    unsigned int _mailboxSyncVersion;
    NSMutableArray *_messageStatusUpdates;
    CDStruct_8d07e858 _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) _Bool hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (retain, nonatomic) NSMutableArray *messageStatusUpdates;
@property (nonatomic, readonly) _Bool hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) _Bool hasMailboxSyncVersion;
@property (nonatomic) unsigned int mailboxSyncVersion;

+ (Class)messageStatusUpdateType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addMessageStatusUpdate:(id)arg1;
- (unsigned long long)messageStatusUpdatesCount;
- (void)clearMessageStatusUpdates;
- (id)messageStatusUpdateAtIndex:(unsigned long long)arg1;

@end
