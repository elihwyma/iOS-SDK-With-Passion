/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPCategoryCorrections : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_addeds;
    NSMutableArray *_removeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addeds:1;
        unsigned int read_removeds:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addeds:1;
        unsigned int wrote_removeds:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *addeds;
@property (retain, nonatomic) NSMutableArray *removeds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)addedType;
+ (Class)removedType;

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
- (void)_readAddeds;
- (void)_addNoFlagsAdded:(id)arg1;
- (void)_readRemoveds;
- (void)_addNoFlagsRemoved:(id)arg1;
- (unsigned long long)addedsCount;
- (void)clearAddeds;
- (id)addedAtIndex:(unsigned long long)arg1;
- (void)addAdded:(id)arg1;
- (unsigned long long)removedsCount;
- (void)clearRemoveds;
- (id)removedAtIndex:(unsigned long long)arg1;
- (void)addRemoved:(id)arg1;

@end
