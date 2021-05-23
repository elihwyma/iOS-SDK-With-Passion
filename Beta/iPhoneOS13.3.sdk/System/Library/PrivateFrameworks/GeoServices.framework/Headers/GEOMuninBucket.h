/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBUnknownFields;

@interface GEOMuninBucket : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_bucketURL;
    unsigned int _bucketID;
    unsigned int _lodLevel;
    struct {
        unsigned int has_bucketID:1;
        unsigned int has_lodLevel:1;
    } _flags;
}

@property (nonatomic) _Bool hasBucketID;
@property (nonatomic) unsigned int bucketID;
@property (nonatomic, readonly) _Bool hasBucketURL;
@property (retain, nonatomic) NSString *bucketURL;
@property (nonatomic) _Bool hasLodLevel;
@property (nonatomic) unsigned int lodLevel;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;

@end
