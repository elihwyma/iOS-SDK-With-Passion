//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitNamedItem-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitStation : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_location;
    NSUInteger _muid;
    NSString *_nameDisplayString;
    NSMutableArray *_zoomNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    unsigned int _stationIndex;
    int _structureType;
    struct {
        unsigned int has_muid:1;
        unsigned int has_stationIndex:1;
        unsigned int has_structureType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_location:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_zoomNames:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_location:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_nameDisplayString:1;
        unsigned int wrote_zoomNames:1;
        unsigned int wrote_stationIndex:1;
        unsigned int wrote_structureType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)zoomNameType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *nameDisplayString;
@property(readonly, nonatomic) BOOL hasNameDisplayString;
- (void)_readNameDisplayString;
- (id)zoomNameAtIndex:(NSUInteger)arg1;
- (NSUInteger)zoomNamesCount;
- (void)_addNoFlagsZoomName:(id)arg1;
- (void)addZoomName:(id)arg1;
- (void)clearZoomNames;
@property(retain, nonatomic) NSMutableArray *zoomNames;
- (void)_readZoomNames;
- (int)StringAsStructureType:(id)arg1;
- (id)structureTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasStructureType;
@property(nonatomic) int structureType;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)_readLocation;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) NSUInteger muid;
@property(nonatomic) BOOL hasStationIndex;
@property(nonatomic) unsigned int stationIndex;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)identifier;
- (id)bestName;

@end

