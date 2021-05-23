/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/Swift-Protocol.h>

@class GEOLatLng, GEOMapItemIdentifier, MSPTransitStorageArtwork, MSPTransitStorageSystem, NSArray, NSString, PBUnknownFields;

@protocol GEOTransitArtworkDataSource, GEOTransitSystem;

@interface MSPTransitStorageLine : PBCodable <Swift>

{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    MSPTransitStorageArtwork *_alternateArtwork;
    MSPTransitStorageArtwork *_artwork;
    NSString *_lineColorString;
    GEOLatLng *_locationHint;
    MSPTransitStorageArtwork *_modeArtwork;
    NSString *_name;
    MSPTransitStorageSystem *_system;
    CDStruct_e99c65f7 _has;
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
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasLineColorString;
@property (retain, nonatomic) NSString *lineColorString;
@property (nonatomic, readonly) _Bool hasArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *artwork;
@property (nonatomic, readonly) _Bool hasModeArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *modeArtwork;
@property (nonatomic, readonly) _Bool hasSystem;
@property (retain, nonatomic) MSPTransitStorageSystem *system;
@property (nonatomic, readonly) _Bool hasAlternateArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *alternateArtwork;
@property (nonatomic, readonly) _Bool hasLocationHint;
@property (retain, nonatomic) GEOLatLng *locationHint;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithLine:(id)arg1;

@end
