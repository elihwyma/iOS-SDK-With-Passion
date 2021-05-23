/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTransitPlaceCard, NSString, PBDataReader;

@interface GEOPlaceActionDetails : PBCodable

{
    PBDataReader *_reader;
    NSString *_actionUrl;
    unsigned long long _animationID;
    unsigned long long _businessID;
    NSString *_destinationApp;
    NSString *_photoId;
    long long _placeID;
    NSString *_richProviderId;
    double _searchResponseRelativeTimestamp;
    unsigned long long _targetID;
    GEOTransitPlaceCard *_transitPlaceCard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _localSearchProviderID;
    int _resultIndex;
    struct {
        unsigned int has_animationID:1;
        unsigned int has_businessID:1;
        unsigned int has_placeID:1;
        unsigned int has_searchResponseRelativeTimestamp:1;
        unsigned int has_targetID:1;
        unsigned int has_localSearchProviderID:1;
        unsigned int has_resultIndex:1;
        unsigned int read_actionUrl:1;
        unsigned int read_destinationApp:1;
        unsigned int read_photoId:1;
        unsigned int read_richProviderId:1;
        unsigned int read_transitPlaceCard:1;
        unsigned int wrote_actionUrl:1;
        unsigned int wrote_animationID:1;
        unsigned int wrote_businessID:1;
        unsigned int wrote_destinationApp:1;
        unsigned int wrote_photoId:1;
        unsigned int wrote_placeID:1;
        unsigned int wrote_richProviderId:1;
        unsigned int wrote_searchResponseRelativeTimestamp:1;
        unsigned int wrote_targetID:1;
        unsigned int wrote_transitPlaceCard:1;
        unsigned int wrote_localSearchProviderID:1;
        unsigned int wrote_resultIndex:1;
    } _flags;
}

@property (nonatomic) _Bool hasBusinessID;
@property (nonatomic) unsigned long long businessID;
@property (nonatomic) _Bool hasPlaceID;
@property (nonatomic) long long placeID;
@property (nonatomic) _Bool hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) _Bool hasSearchResponseRelativeTimestamp;
@property (nonatomic) double searchResponseRelativeTimestamp;
@property (nonatomic) _Bool hasResultIndex;
@property (nonatomic) int resultIndex;
@property (nonatomic) _Bool hasAnimationID;
@property (nonatomic) unsigned long long animationID;
@property (nonatomic) _Bool hasTargetID;
@property (nonatomic) unsigned long long targetID;
@property (nonatomic, readonly) _Bool hasPhotoId;
@property (retain, nonatomic) NSString *photoId;
@property (nonatomic, readonly) _Bool hasActionUrl;
@property (retain, nonatomic) NSString *actionUrl;
@property (nonatomic, readonly) _Bool hasTransitPlaceCard;
@property (retain, nonatomic) GEOTransitPlaceCard *transitPlaceCard;
@property (nonatomic, readonly) _Bool hasRichProviderId;
@property (retain, nonatomic) NSString *richProviderId;
@property (nonatomic, readonly) _Bool hasDestinationApp;
@property (retain, nonatomic) NSString *destinationApp;

+ (_Bool)isValid:(id)arg1;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4;
+ (id)actionDetailsWithMapItem:(id)arg1 childPlace:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8;
+ (id)actionDetailsWithTargetID:(unsigned long long)arg1;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
+ (id)actionDetailsWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
+ (id)actionDetailsWithDetails:(id)arg1 timestamp:(double)arg2;

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
- (void)_readPhotoId;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4;
- (id)initWithMapItem:(id)arg1 childPlace:(id)arg2 relativeTimestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3;
- (void)_readActionUrl;
- (void)_readTransitPlaceCard;
- (void)_readRichProviderId;
- (void)_readDestinationApp;

@end
