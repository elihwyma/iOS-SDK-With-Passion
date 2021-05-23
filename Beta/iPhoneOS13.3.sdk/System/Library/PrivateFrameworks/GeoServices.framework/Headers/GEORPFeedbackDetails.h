/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPAddressFeedback, GEORPDirectionsFeedback, GEORPGroundViewFeedback, GEORPMerchantLookupFeedback, GEORPPoiFeedback, GEORPSearchFeedback, GEORPTileFeedback, GEORPTransitPoiFeedback, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackDetails : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAddressFeedback *_addressPointFeedback;
    GEORPDirectionsFeedback *_directionsFeedback;
    GEORPGroundViewFeedback *_groundViewFeedback;
    GEORPMerchantLookupFeedback *_merchantLookupFeedback;
    GEORPPoiFeedback *_poiFeedback;
    GEORPSearchFeedback *_searchFeedback;
    GEORPTileFeedback *_tileFeedback;
    GEORPTransitPoiFeedback *_transitPoiFeedback;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addressPointFeedback:1;
        unsigned int read_directionsFeedback:1;
        unsigned int read_groundViewFeedback:1;
        unsigned int read_merchantLookupFeedback:1;
        unsigned int read_poiFeedback:1;
        unsigned int read_searchFeedback:1;
        unsigned int read_tileFeedback:1;
        unsigned int read_transitPoiFeedback:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressPointFeedback:1;
        unsigned int wrote_directionsFeedback:1;
        unsigned int wrote_groundViewFeedback:1;
        unsigned int wrote_merchantLookupFeedback:1;
        unsigned int wrote_poiFeedback:1;
        unsigned int wrote_searchFeedback:1;
        unsigned int wrote_tileFeedback:1;
        unsigned int wrote_transitPoiFeedback:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPoiFeedback;
@property (retain, nonatomic) GEORPPoiFeedback *poiFeedback;
@property (nonatomic, readonly) _Bool hasTransitPoiFeedback;
@property (retain, nonatomic) GEORPTransitPoiFeedback *transitPoiFeedback;
@property (nonatomic, readonly) _Bool hasSearchFeedback;
@property (retain, nonatomic) GEORPSearchFeedback *searchFeedback;
@property (nonatomic, readonly) _Bool hasMerchantLookupFeedback;
@property (retain, nonatomic) GEORPMerchantLookupFeedback *merchantLookupFeedback;
@property (nonatomic, readonly) _Bool hasDirectionsFeedback;
@property (retain, nonatomic) GEORPDirectionsFeedback *directionsFeedback;
@property (nonatomic, readonly) _Bool hasAddressPointFeedback;
@property (retain, nonatomic) GEORPAddressFeedback *addressPointFeedback;
@property (nonatomic, readonly) _Bool hasTileFeedback;
@property (retain, nonatomic) GEORPTileFeedback *tileFeedback;
@property (nonatomic, readonly) _Bool hasGroundViewFeedback;
@property (retain, nonatomic) GEORPGroundViewFeedback *groundViewFeedback;
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
- (void)_readPoiFeedback;
- (void)_readTransitPoiFeedback;
- (void)_readSearchFeedback;
- (void)_readMerchantLookupFeedback;
- (void)_readDirectionsFeedback;
- (void)_readAddressPointFeedback;
- (void)_readTileFeedback;
- (void)_readGroundViewFeedback;

@end
