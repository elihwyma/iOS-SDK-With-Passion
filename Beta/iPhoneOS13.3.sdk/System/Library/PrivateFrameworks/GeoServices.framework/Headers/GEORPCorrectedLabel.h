/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOMapRegion, NSMutableArray, NSString, PBDataReader;

@interface GEORPCorrectedLabel : PBCodable

{
    PBDataReader *_reader;
    GEOLatLng *_coordinate;
    NSString *_correctedValue;
    NSMutableArray *_featureHandles;
    GEOMapRegion *_featureRegion;
    NSString *_originalValue;
    unsigned long long _uid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _localizedLabels;
    struct {
        unsigned int has_uid:1;
        unsigned int has_localizedLabels:1;
        unsigned int read_coordinate:1;
        unsigned int read_correctedValue:1;
        unsigned int read_featureHandles:1;
        unsigned int read_featureRegion:1;
        unsigned int read_originalValue:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_correctedValue:1;
        unsigned int wrote_featureHandles:1;
        unsigned int wrote_featureRegion:1;
        unsigned int wrote_originalValue:1;
        unsigned int wrote_uid:1;
        unsigned int wrote_localizedLabels:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasOriginalValue;
@property (retain, nonatomic) NSString *originalValue;
@property (nonatomic, readonly) _Bool hasCorrectedValue;
@property (retain, nonatomic) NSString *correctedValue;
@property (nonatomic, readonly) _Bool hasFeatureRegion;
@property (retain, nonatomic) GEOMapRegion *featureRegion;
@property (retain, nonatomic) NSMutableArray *featureHandles;
@property (nonatomic, readonly) _Bool hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (nonatomic) _Bool hasUid;
@property (nonatomic) unsigned long long uid;
@property (nonatomic) _Bool hasLocalizedLabels;
@property (nonatomic) _Bool localizedLabels;

+ (_Bool)isValid:(id)arg1;
+ (Class)featureHandleType;

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
- (void)_readOriginalValue;
- (void)_readCorrectedValue;
- (void)_readCoordinate;
- (void)_readFeatureRegion;
- (void)_readFeatureHandles;
- (void)_addNoFlagsFeatureHandle:(id)arg1;
- (unsigned long long)featureHandlesCount;
- (void)clearFeatureHandles;
- (id)featureHandleAtIndex:(unsigned long long)arg1;
- (void)addFeatureHandle:(id)arg1;

@end
