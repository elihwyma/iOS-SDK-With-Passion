/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NNMKProtoMailboxSelection : PBCodable

{
    unsigned int _fullSyncVersion;
    NSMutableArray *_mailboxes;
    CDStruct_a125a100 _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (retain, nonatomic) NSMutableArray *mailboxes;

+ (Class)mailboxesType;
+ (id)protoMailboxSelectionFromMailboxSelection:(id)arg1 fullSyncVersion:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addMailboxes:(id)arg1;
- (unsigned long long)mailboxesCount;
- (void)clearMailboxes;
- (id)mailboxesAtIndex:(unsigned long long)arg1;
- (id)mailboxSelection;

@end
