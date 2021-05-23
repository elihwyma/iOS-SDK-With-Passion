/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineIdentifier : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_latLng;
    unsigned long long _offlineId;
    NSString *_offlineName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_offlineId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_latLng:1;
        unsigned int read_offlineName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_latLng:1;
        unsigned int wrote_offlineId:1;
        unsigned int wrote_offlineName:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasOfflineName;
@property (retain, nonatomic) NSString *offlineName;
@property (nonatomic) _Bool hasOfflineId;
@property (nonatomic) unsigned long long offlineId;
@property (nonatomic, readonly) _Bool hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;
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
- (void)_readLatLng;
- (void)_readOfflineName;

@end
