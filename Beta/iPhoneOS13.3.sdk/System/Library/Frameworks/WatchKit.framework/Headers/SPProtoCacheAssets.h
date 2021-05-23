/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface SPProtoCacheAssets : PBCodable

{
    NSMutableArray *_assets;
}

@property (retain, nonatomic) NSMutableArray *assets;

+ (Class)assetsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)assetsCount;
- (void)addAssets:(id)arg1;
- (void)clearAssets;
- (id)assetsAtIndex:(unsigned long long)arg1;

@end
