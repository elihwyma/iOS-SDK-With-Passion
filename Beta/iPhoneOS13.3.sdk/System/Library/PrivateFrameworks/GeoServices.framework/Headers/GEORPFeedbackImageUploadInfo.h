/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackImageUploadInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_clientImageUuid;
    NSString *_imageId;
    NSString *_imageUploadUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_clientImageUuid:1;
        unsigned int read_imageId:1;
        unsigned int read_imageUploadUrl:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientImageUuid:1;
        unsigned int wrote_imageId:1;
        unsigned int wrote_imageUploadUrl:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasImageId;
@property (retain, nonatomic) NSString *imageId;
@property (nonatomic, readonly) _Bool hasClientImageUuid;
@property (retain, nonatomic) NSString *clientImageUuid;
@property (nonatomic, readonly) _Bool hasImageUploadUrl;
@property (retain, nonatomic) NSString *imageUploadUrl;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readImageId;
- (void)_readClientImageUuid;
- (void)_readImageUploadUrl;

@end
