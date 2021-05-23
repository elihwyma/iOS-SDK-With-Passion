/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NNMKProtoInitialMessagesSyncBatch : PBCodable

{
    unsigned int _fullSyncVersion;
    NSMutableArray *_initialMessagesSyncs;
    CDStruct_a125a100 _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (retain, nonatomic) NSMutableArray *initialMessagesSyncs;

+ (Class)initialMessagesSyncType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addInitialMessagesSync:(id)arg1;
- (unsigned long long)initialMessagesSyncsCount;
- (void)clearInitialMessagesSyncs;
- (id)initialMessagesSyncAtIndex:(unsigned long long)arg1;

@end
