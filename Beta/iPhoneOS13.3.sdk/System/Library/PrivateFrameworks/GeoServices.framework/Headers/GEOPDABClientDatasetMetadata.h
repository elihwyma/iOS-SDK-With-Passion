/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOPDABClientDatasetMetadata : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned int _bucketId;
    unsigned int _datasetId;
    struct {
        unsigned int has_bucketId:1;
        unsigned int has_datasetId:1;
    } _flags;
}

@property (nonatomic) _Bool hasBucketId;
@property (nonatomic) unsigned int bucketId;
@property (nonatomic) _Bool hasDatasetId;
@property (nonatomic) unsigned int datasetId;
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
