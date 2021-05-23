/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SPProtoCacheSyncData;

@interface SPProtoCacheMessage : PBCodable

{
    NSData *_assetData;
    NSString *_assetKey;
    int _cacheType;
    NSString *_gizmoCacheIdentifier;
    int _messageType;
    SPProtoCacheSyncData *_syncData;
}

@property (nonatomic) int messageType;
@property (nonatomic) int cacheType;
@property (nonatomic, readonly) _Bool hasAssetKey;
@property (retain, nonatomic) NSString *assetKey;
@property (nonatomic, readonly) _Bool hasGizmoCacheIdentifier;
@property (retain, nonatomic) NSString *gizmoCacheIdentifier;
@property (nonatomic, readonly) _Bool hasAssetData;
@property (retain, nonatomic) NSData *assetData;
@property (nonatomic, readonly) _Bool hasSyncData;
@property (retain, nonatomic) SPProtoCacheSyncData *syncData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
