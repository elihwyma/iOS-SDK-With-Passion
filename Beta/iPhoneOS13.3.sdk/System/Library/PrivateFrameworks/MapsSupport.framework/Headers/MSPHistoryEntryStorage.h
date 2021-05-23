/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class MSPDirectionsSearch, MSPPlaceDisplay, MSPQuerySearch, MSPRidesharingTrip, MSPTransitStorageLineItem, NSString, PBUnknownFields;

@interface MSPHistoryEntryStorage : PBCodable

{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    MSPDirectionsSearch *_directionsSearch;
    NSString *_identifier;
    MSPPlaceDisplay *_placeDisplay;
    MSPQuerySearch *_querySearch;
    MSPRidesharingTrip *_ridesharingTrip;
    int _searchType;
    MSPTransitStorageLineItem *_transitLineItem;
    _Bool _tracksRAPRecordingOnly;
    struct {
        unsigned int position:1;
        unsigned int timestamp:1;
        unsigned int searchType:1;
        unsigned int tracksRAPRecordingOnly:1;
    } _has;
}

@property (nonatomic) _Bool hasSearchType;
@property (nonatomic) int searchType;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasPosition;
@property (nonatomic) double position;
@property (nonatomic, readonly) _Bool hasQuerySearch;
@property (retain, nonatomic) MSPQuerySearch *querySearch;
@property (nonatomic, readonly) _Bool hasDirectionsSearch;
@property (retain, nonatomic) MSPDirectionsSearch *directionsSearch;
@property (nonatomic, readonly) _Bool hasPlaceDisplay;
@property (retain, nonatomic) MSPPlaceDisplay *placeDisplay;
@property (nonatomic, readonly) _Bool hasTransitLineItem;
@property (retain, nonatomic) MSPTransitStorageLineItem *transitLineItem;
@property (nonatomic, readonly) _Bool hasRidesharingTrip;
@property (retain, nonatomic) MSPRidesharingTrip *ridesharingTrip;
@property (nonatomic) _Bool hasTracksRAPRecordingOnly;
@property (nonatomic) _Bool tracksRAPRecordingOnly;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)searchTypeAsString:(int)arg1;
- (int)StringAsSearchType:(id)arg1;

@end
