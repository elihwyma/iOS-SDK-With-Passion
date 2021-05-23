/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDStorefront : PBCodable

{
    NSMutableArray *_bundleIds;
}

@property (retain, nonatomic) NSMutableArray *bundleIds;

+ (_Bool)isValid:(id)arg1;
+ (Class)bundleIdType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)addBundleId:(id)arg1;
- (unsigned long long)bundleIdsCount;
- (void)clearBundleIds;
- (id)bundleIdAtIndex:(unsigned long long)arg1;

@end
