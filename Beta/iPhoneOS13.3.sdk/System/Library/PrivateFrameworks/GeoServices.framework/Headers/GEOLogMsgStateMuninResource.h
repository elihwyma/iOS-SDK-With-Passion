/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString;

@interface GEOLogMsgStateMuninResource : PBCodable

{
    NSString *_assetBucket;
    unsigned int _levelOfDetail;
    struct {
        unsigned int has_levelOfDetail:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasAssetBucket;
@property (retain, nonatomic) NSString *assetBucket;
@property (nonatomic) _Bool hasLevelOfDetail;
@property (nonatomic) unsigned int levelOfDetail;

+ (_Bool)isValid:(id)arg1;

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

@end
