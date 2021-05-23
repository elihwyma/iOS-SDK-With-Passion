/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineUpdateManifest : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_datas;
    NSMutableArray *_patchs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_datas:1;
        unsigned int read_patchs:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_datas:1;
        unsigned int wrote_patchs:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *patchs;
@property (retain, nonatomic) NSMutableArray *datas;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)dataType;
+ (_Bool)isValid:(id)arg1;
+ (Class)patchType;

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
- (id)dataAtIndex:(unsigned long long)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readPatchs;
- (void)_addNoFlagsPatch:(id)arg1;
- (void)_readDatas;
- (void)_addNoFlagsData:(id)arg1;
- (unsigned long long)patchsCount;
- (void)clearPatchs;
- (id)patchAtIndex:(unsigned long long)arg1;
- (void)addPatch:(id)arg1;
- (unsigned long long)datasCount;
- (void)clearDatas;
- (void)addData:(id)arg1;

@end
