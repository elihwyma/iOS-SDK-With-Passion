/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapItemIdentifier, GEOMapRegion, MSPTransitStorageAttribution, MSPTransitStorageLine, NSArray, NSMutableArray, NSString, PBUnknownFields;

@protocol GEOEncyclopedicInfo, GEOTransitArtworkDataSource, GEOTransitAttribution, GEOTransitSystem;

@interface MSPTransitStorageLineItem : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_incidents;
    MSPTransitStorageLine *_line;
    GEOMapRegion *_storedMapRegion;
    MSPTransitStorageAttribution *_transitAttribution;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) id <GEOTransitSystem> system;
@property (nonatomic, readonly) unsigned long long departureTimeDisplayStyle;
@property (nonatomic, readonly) _Bool departuresAreVehicleSpecific;
@property (nonatomic, readonly) _Bool isBus;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> artwork;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> modeArtwork;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> alternateArtwork;
@property (nonatomic, readonly) _Bool hasLineColorString;
@property (nonatomic, readonly) NSString *lineColorString;
@property (nonatomic, readonly) _Bool showVehicleNumber;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) id <GEOTransitAttribution> attribution;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) _Bool isIncidentsTTLExpired;
@property (nonatomic, readonly) _Bool hasIncidentComponent;
@property (nonatomic, readonly) _Bool hasEncyclopedicInfo;
@property (nonatomic, readonly) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property (nonatomic, readonly) _Bool hasLine;
@property (retain, nonatomic) MSPTransitStorageLine *line;
@property (nonatomic, readonly) _Bool hasStoredMapRegion;
@property (retain, nonatomic) GEOMapRegion *storedMapRegion;
@property (nonatomic, readonly) _Bool hasTransitAttribution;
@property (retain, nonatomic) MSPTransitStorageAttribution *transitAttribution;
@property (retain, nonatomic) NSMutableArray *incidents;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)incidentsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)incidentsCount;
- (void)clearIncidents;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (void)addIncidents:(id)arg1;
- (id)initWithLineItem:(id)arg1;

@end
