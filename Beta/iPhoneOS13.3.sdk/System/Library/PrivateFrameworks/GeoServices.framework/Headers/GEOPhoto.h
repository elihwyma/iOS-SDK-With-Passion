/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPhoto : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_photoInfos;
    NSString *_uid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _photoType;
    struct {
        unsigned int has_photoType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_photoInfos:1;
        unsigned int read_uid:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_photoInfos:1;
        unsigned int wrote_uid:1;
        unsigned int wrote_photoType:1;
    } _flags;
}

@property (nonatomic) _Bool hasPhotoType;
@property (nonatomic) int photoType;
@property (retain, nonatomic) NSMutableArray *photoInfos;
@property (nonatomic, readonly) _Bool hasUid;
@property (retain, nonatomic) NSString *uid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)photoInfoType;

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
- (void)_readUid;
- (id)initWithPlaceDataPhoto:(id)arg1;
- (void)addPhotoInfo:(id)arg1;
- (void)_readPhotoInfos;
- (void)_addNoFlagsPhotoInfo:(id)arg1;
- (unsigned long long)photoInfosCount;
- (void)clearPhotoInfos;
- (id)photoInfoAtIndex:(unsigned long long)arg1;
- (id)photoTypeAsString:(int)arg1;
- (int)StringAsPhotoType:(id)arg1;

@end
