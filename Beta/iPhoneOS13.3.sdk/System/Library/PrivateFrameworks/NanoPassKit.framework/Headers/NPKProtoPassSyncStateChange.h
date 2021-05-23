/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoCatalog, NPKProtoPassSyncStateItem, NSData, NSMutableArray, NSString;

@interface NPKProtoPassSyncStateChange : PBCodable

{
    NSData *_baseManifestHashForPartialUpdate;
    NPKProtoCatalog *_catalog;
    int _changeType;
    NSData *_changeUUID;
    NSData *_lastKnownReconciledPassSyncStateHash;
    NSData *_passData;
    unsigned int _passSegmentIndex;
    unsigned int _passSegmentTotal;
    NSMutableArray *_remoteAssetsForPartialUpdates;
    NPKProtoPassSyncStateItem *_syncStateItem;
    NSString *_uniqueID;
    struct {
        unsigned int passSegmentIndex:1;
        unsigned int passSegmentTotal:1;
    } _has;
}

@property (retain, nonatomic) NSData *changeUUID;
@property (nonatomic, readonly) _Bool hasLastKnownReconciledPassSyncStateHash;
@property (retain, nonatomic) NSData *lastKnownReconciledPassSyncStateHash;
@property (nonatomic) int changeType;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic, readonly) _Bool hasSyncStateItem;
@property (retain, nonatomic) NPKProtoPassSyncStateItem *syncStateItem;
@property (nonatomic, readonly) _Bool hasPassData;
@property (retain, nonatomic) NSData *passData;
@property (nonatomic) _Bool hasPassSegmentIndex;
@property (nonatomic) unsigned int passSegmentIndex;
@property (nonatomic) _Bool hasPassSegmentTotal;
@property (nonatomic) unsigned int passSegmentTotal;
@property (nonatomic, readonly) _Bool hasCatalog;
@property (retain, nonatomic) NPKProtoCatalog *catalog;
@property (nonatomic, readonly) _Bool hasBaseManifestHashForPartialUpdate;
@property (retain, nonatomic) NSData *baseManifestHashForPartialUpdate;
@property (retain, nonatomic) NSMutableArray *remoteAssetsForPartialUpdates;

+ (Class)remoteAssetsForPartialUpdateType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
- (int)StringAsChangeType:(id)arg1;
- (id)npkDescription;
- (void)addRemoteAssetsForPartialUpdate:(id)arg1;
- (unsigned long long)remoteAssetsForPartialUpdatesCount;
- (void)clearRemoteAssetsForPartialUpdates;
- (id)remoteAssetsForPartialUpdateAtIndex:(unsigned long long)arg1;

@end
