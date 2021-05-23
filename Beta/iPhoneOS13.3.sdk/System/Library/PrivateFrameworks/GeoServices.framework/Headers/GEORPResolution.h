/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapRegion, NSMutableArray, NSString, PBDataReader;

@interface GEORPResolution : PBCodable

{
    PBDataReader *_reader;
    GEOMapRegion *_displayRegion;
    NSString *_localizedAlertText;
    NSMutableArray *_localizedChangeLists;
    NSString *_localizedDescription;
    double _resolutionDate;
    unsigned long long _transitLineMuid;
    NSMutableArray *_updatedPlaces;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _displayStyle;
    struct {
        unsigned int has_resolutionDate:1;
        unsigned int has_transitLineMuid:1;
        unsigned int has_displayStyle:1;
        unsigned int read_displayRegion:1;
        unsigned int read_localizedAlertText:1;
        unsigned int read_localizedChangeLists:1;
        unsigned int read_localizedDescription:1;
        unsigned int read_updatedPlaces:1;
        unsigned int wrote_displayRegion:1;
        unsigned int wrote_localizedAlertText:1;
        unsigned int wrote_localizedChangeLists:1;
        unsigned int wrote_localizedDescription:1;
        unsigned int wrote_resolutionDate:1;
        unsigned int wrote_transitLineMuid:1;
        unsigned int wrote_updatedPlaces:1;
        unsigned int wrote_displayStyle:1;
    } _flags;
}

@property (nonatomic) _Bool hasResolutionDate;
@property (nonatomic) double resolutionDate;
@property (nonatomic, readonly) _Bool hasDisplayRegion;
@property (retain, nonatomic) GEOMapRegion *displayRegion;
@property (retain, nonatomic) NSMutableArray *localizedChangeLists;
@property (retain, nonatomic) NSMutableArray *updatedPlaces;
@property (nonatomic) _Bool hasTransitLineMuid;
@property (nonatomic) unsigned long long transitLineMuid;
@property (nonatomic, readonly) _Bool hasLocalizedDescription;
@property (retain, nonatomic) NSString *localizedDescription;
@property (nonatomic, readonly) _Bool hasLocalizedAlertText;
@property (retain, nonatomic) NSString *localizedAlertText;
@property (nonatomic) _Bool hasDisplayStyle;
@property (nonatomic) int displayStyle;

+ (_Bool)isValid:(id)arg1;
+ (Class)localizedChangeListType;
+ (Class)updatedPlaceType;

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
- (void)_readDisplayRegion;
- (void)_readLocalizedDescription;
- (id)displayStyleAsString:(int)arg1;
- (int)StringAsDisplayStyle:(id)arg1;
- (void)_readLocalizedChangeLists;
- (void)_addNoFlagsLocalizedChangeList:(id)arg1;
- (void)_readUpdatedPlaces;
- (void)_addNoFlagsUpdatedPlace:(id)arg1;
- (void)_readLocalizedAlertText;
- (unsigned long long)localizedChangeListsCount;
- (void)clearLocalizedChangeLists;
- (id)localizedChangeListAtIndex:(unsigned long long)arg1;
- (void)addLocalizedChangeList:(id)arg1;
- (unsigned long long)updatedPlacesCount;
- (void)clearUpdatedPlaces;
- (id)updatedPlaceAtIndex:(unsigned long long)arg1;
- (void)addUpdatedPlace:(id)arg1;

@end
