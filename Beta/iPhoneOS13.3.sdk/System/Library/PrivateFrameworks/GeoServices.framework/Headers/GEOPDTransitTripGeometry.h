/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripGeometry : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _tripStepIndexs;
    NSMutableArray *_tripLinks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_tripStepIndexs:1;
        unsigned int read_tripLinks:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_tripStepIndexs:1;
        unsigned int wrote_tripLinks:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *tripLinks;
@property (nonatomic, readonly) unsigned long long tripStepIndexsCount;
@property (nonatomic, readonly) unsigned int *tripStepIndexs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)transitTripGeometryForPlaceData:(id)arg1;
+ (Class)tripLinkType;

- (id)init;
- (void)dealloc;
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
- (unsigned long long)tripLinksCount;
- (unsigned int)tripStepIndexAtIndex:(unsigned long long)arg1;
- (void)_readTripLinks;
- (void)_addNoFlagsTripLink:(id)arg1;
- (void)_readTripStepIndexs;
- (void)_addNoFlagsTripStepIndex:(unsigned int)arg1;
- (void)clearTripLinks;
- (id)tripLinkAtIndex:(unsigned long long)arg1;
- (void)addTripLink:(id)arg1;
- (void)clearTripStepIndexs;
- (void)addTripStepIndex:(unsigned int)arg1;
- (void)setTripStepIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
