/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NNMKProtoMessagesFilteredOutWarning : PBCodable

{
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    NSMutableArray *_removedMessageIds;
    CDStruct_a125a100 _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (retain, nonatomic) NSMutableArray *removedMessageIds;
@property (nonatomic, readonly) _Bool hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;

+ (Class)removedMessageIdType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addRemovedMessageId:(id)arg1;
- (unsigned long long)removedMessageIdsCount;
- (void)clearRemovedMessageIds;
- (id)removedMessageIdAtIndex:(unsigned long long)arg1;

@end
