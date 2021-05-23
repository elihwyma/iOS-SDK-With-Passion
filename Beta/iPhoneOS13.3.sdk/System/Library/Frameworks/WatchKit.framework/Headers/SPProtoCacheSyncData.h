/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SPProtoCacheAssets;

@interface SPProtoCacheSyncData : PBCodable

{
    NSString *_cacheIdentifier;
    SPProtoCacheAssets *_permanentCache;
    SPProtoCacheAssets *_transientCache;
}

@property (retain, nonatomic) NSString *cacheIdentifier;
@property (retain, nonatomic) SPProtoCacheAssets *permanentCache;
@property (retain, nonatomic) SPProtoCacheAssets *transientCache;

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
