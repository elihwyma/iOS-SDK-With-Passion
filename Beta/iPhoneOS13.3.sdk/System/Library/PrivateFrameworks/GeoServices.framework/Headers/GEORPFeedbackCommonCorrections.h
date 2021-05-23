/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackCommonCorrections : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_comments;
    NSMutableArray *_imageIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_comments:1;
        unsigned int read_imageIds:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_comments:1;
        unsigned int wrote_imageIds:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasComments;
@property (retain, nonatomic) NSString *comments;
@property (retain, nonatomic) NSMutableArray *imageIds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)imageIdType;

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
- (void)addImageId:(id)arg1;
- (unsigned long long)imageIdsCount;
- (void)clearImageIds;
- (id)imageIdAtIndex:(unsigned long long)arg1;
- (void)_readComments;
- (void)_readImageIds;
- (void)_addNoFlagsImageId:(id)arg1;

@end
