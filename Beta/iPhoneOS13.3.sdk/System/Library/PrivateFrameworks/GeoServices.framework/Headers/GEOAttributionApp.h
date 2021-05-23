/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOAttributionApp : PBCodable

{
    PBDataReader *_reader;
    NSString *_appBundleIdentifier;
    NSMutableArray *_handledSchemes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _restaurantReservationExtensionSupport;
    _Bool _supportsRestaurantQueueing;
    _Bool _supportsRestaurantReservations;
    struct {
        unsigned int has_restaurantReservationExtensionSupport:1;
        unsigned int has_supportsRestaurantQueueing:1;
        unsigned int has_supportsRestaurantReservations:1;
        unsigned int read_appBundleIdentifier:1;
        unsigned int read_handledSchemes:1;
        unsigned int wrote_appBundleIdentifier:1;
        unsigned int wrote_handledSchemes:1;
        unsigned int wrote_restaurantReservationExtensionSupport:1;
        unsigned int wrote_supportsRestaurantQueueing:1;
        unsigned int wrote_supportsRestaurantReservations:1;
    } _flags;
}

@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (retain, nonatomic) NSMutableArray *handledSchemes;
@property (nonatomic) _Bool hasSupportsRestaurantReservations;
@property (nonatomic) _Bool supportsRestaurantReservations;
@property (nonatomic) _Bool hasSupportsRestaurantQueueing;
@property (nonatomic) _Bool supportsRestaurantQueueing;
@property (nonatomic) _Bool hasRestaurantReservationExtensionSupport;
@property (nonatomic) int restaurantReservationExtensionSupport;

+ (_Bool)isValid:(id)arg1;
+ (Class)handledSchemesType;

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
- (void)_readAppBundleIdentifier;
- (void)_readHandledSchemes;
- (void)_addNoFlagsHandledSchemes:(id)arg1;
- (unsigned long long)handledSchemesCount;
- (void)clearHandledSchemes;
- (id)handledSchemesAtIndex:(unsigned long long)arg1;
- (void)addHandledSchemes:(id)arg1;
- (id)restaurantReservationExtensionSupportAsString:(int)arg1;
- (int)StringAsRestaurantReservationExtensionSupport:(id)arg1;

@end
