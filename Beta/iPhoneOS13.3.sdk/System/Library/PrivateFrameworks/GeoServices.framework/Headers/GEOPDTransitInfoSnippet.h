/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOStyleAttributes, GEOTimezone, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitInfoSnippet : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_artworks;
    NSMutableArray *_labels;
    NSString *_searchDisplayName;
    GEOLatLng *_stopLocationForTrip;
    GEOStyleAttributes *_styleAttributesForTrip;
    NSMutableArray *_systemNames;
    GEOTimezone *_timezone;
    unsigned long long _transitId;
    NSString *_transitName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_transitId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_artworks:1;
        unsigned int read_labels:1;
        unsigned int read_searchDisplayName:1;
        unsigned int read_stopLocationForTrip:1;
        unsigned int read_styleAttributesForTrip:1;
        unsigned int read_systemNames:1;
        unsigned int read_timezone:1;
        unsigned int read_transitName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_artworks:1;
        unsigned int wrote_labels:1;
        unsigned int wrote_searchDisplayName:1;
        unsigned int wrote_stopLocationForTrip:1;
        unsigned int wrote_styleAttributesForTrip:1;
        unsigned int wrote_systemNames:1;
        unsigned int wrote_timezone:1;
        unsigned int wrote_transitId:1;
        unsigned int wrote_transitName:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *systemNames;
@property (retain, nonatomic) NSMutableArray *artworks;
@property (nonatomic, readonly) _Bool hasSearchDisplayName;
@property (retain, nonatomic) NSString *searchDisplayName;
@property (retain, nonatomic) NSMutableArray *labels;
@property (nonatomic) _Bool hasTransitId;
@property (nonatomic) unsigned long long transitId;
@property (nonatomic, readonly) _Bool hasTimezone;
@property (retain, nonatomic) GEOTimezone *timezone;
@property (nonatomic, readonly) _Bool hasTransitName;
@property (retain, nonatomic) NSString *transitName;
@property (nonatomic, readonly) _Bool hasStopLocationForTrip;
@property (retain, nonatomic) GEOLatLng *stopLocationForTrip;
@property (nonatomic, readonly) _Bool hasStyleAttributesForTrip;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributesForTrip;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)labelType;
+ (_Bool)isValid:(id)arg1;
+ (Class)artworkType;
+ (id)transitInfoSnippetForPlaceData:(id)arg1;
+ (Class)systemNameType;

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
- (unsigned long long)labelsCount;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readTimezone;
- (unsigned long long)artworksCount;
- (void)_readLabels;
- (void)_addNoFlagsLabel:(id)arg1;
- (void)_readSearchDisplayName;
- (void)clearLabels;
- (id)labelAtIndex:(unsigned long long)arg1;
- (void)addLabel:(id)arg1;
- (id)artworkAtIndex:(unsigned long long)arg1;
- (unsigned long long)systemNamesCount;
- (void)_readSystemNames;
- (void)_addNoFlagsSystemName:(id)arg1;
- (void)_readArtworks;
- (void)_addNoFlagsArtwork:(id)arg1;
- (void)_readTransitName;
- (void)_readStopLocationForTrip;
- (void)_readStyleAttributesForTrip;
- (void)clearSystemNames;
- (id)systemNameAtIndex:(unsigned long long)arg1;
- (void)addSystemName:(id)arg1;
- (void)clearArtworks;
- (void)addArtwork:(id)arg1;

@end
