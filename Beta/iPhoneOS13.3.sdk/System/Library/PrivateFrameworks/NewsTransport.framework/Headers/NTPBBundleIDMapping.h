/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBBundleIDMapping : PBCodable

{
    NSMutableArray *_bundleIds;
}

@property (retain, nonatomic) NSMutableArray *bundleIds;

+ (Class)bundleIdsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)bundleIdsCount;
- (void)clearBundleIds;
- (void)addBundleIds:(id)arg1;
- (id)bundleIdsAtIndex:(unsigned long long)arg1;

@end
