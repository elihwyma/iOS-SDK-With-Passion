/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEODrivingWalkingInstruction, GEODrivingWalkingSpokenInstruction, GEOFormattedString, GEOGenericInstruction, GEOTransitListInstruction, GEOTransitSignInstruction, NSString, PBDataReader, PBUnknownFields;

@protocol GEOServerFormattedString;

@interface GEOInstructionSet : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_countStopsText;
    GEOFormattedString *_departureBar;
    GEODrivingWalkingInstruction *_drivingWalkingListInstruction;
    GEODrivingWalkingInstruction *_drivingWalkingSignInstruction;
    GEODrivingWalkingSpokenInstruction *_drivingWalkingSpokenInstruction;
    GEOGenericInstruction *_genericInstruction;
    GEOTransitListInstruction *_transitListInstruction;
    GEOTransitSignInstruction *_transitSignInstruction;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _departureBarStyle;
    struct {
        unsigned int has_departureBarStyle:1;
        unsigned int read_unknownFields:1;
        unsigned int read_countStopsText:1;
        unsigned int read_departureBar:1;
        unsigned int read_drivingWalkingListInstruction:1;
        unsigned int read_drivingWalkingSignInstruction:1;
        unsigned int read_drivingWalkingSpokenInstruction:1;
        unsigned int read_genericInstruction:1;
        unsigned int read_transitListInstruction:1;
        unsigned int read_transitSignInstruction:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_countStopsText:1;
        unsigned int wrote_departureBar:1;
        unsigned int wrote_drivingWalkingListInstruction:1;
        unsigned int wrote_drivingWalkingSignInstruction:1;
        unsigned int wrote_drivingWalkingSpokenInstruction:1;
        unsigned int wrote_genericInstruction:1;
        unsigned int wrote_transitListInstruction:1;
        unsigned int wrote_transitSignInstruction:1;
        unsigned int wrote_departureBarStyle:1;
    } _flags;
}

@property (nonatomic, readonly) id <GEOServerFormattedString> departureBarFormattedString;
@property (nonatomic, readonly) long long departureBarFormatStyle;
@property (nonatomic, readonly) id <GEOServerFormattedString> countStopsFormattedString;
@property (nonatomic, readonly) id <GEOServerFormattedString> expandableListFormattedString;
@property (nonatomic, readonly) id <GEOServerFormattedString> primaryTimeFormattedString;
@property (nonatomic, readonly) id <GEOServerFormattedString> secondaryTimeFormattedString;
@property (nonatomic, readonly) _Bool hideTimeInstructionsIfCollapsed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasTransitSignInstruction;
@property (retain, nonatomic) GEOTransitSignInstruction *transitSignInstruction;
@property (nonatomic, readonly) _Bool hasTransitListInstruction;
@property (retain, nonatomic) GEOTransitListInstruction *transitListInstruction;
@property (nonatomic, readonly) _Bool hasGenericInstruction;
@property (retain, nonatomic) GEOGenericInstruction *genericInstruction;
@property (nonatomic, readonly) _Bool hasDepartureBar;
@property (retain, nonatomic) GEOFormattedString *departureBar;
@property (nonatomic) _Bool hasDepartureBarStyle;
@property (nonatomic) int departureBarStyle;
@property (nonatomic, readonly) _Bool hasCountStopsText;
@property (retain, nonatomic) GEOFormattedString *countStopsText;
@property (nonatomic, readonly) _Bool hasDrivingWalkingSignInstruction;
@property (retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingSignInstruction;
@property (nonatomic, readonly) _Bool hasDrivingWalkingListInstruction;
@property (retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingListInstruction;
@property (nonatomic, readonly) _Bool hasDrivingWalkingSpokenInstruction;
@property (retain, nonatomic) GEODrivingWalkingSpokenInstruction *drivingWalkingSpokenInstruction;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readTransitSignInstruction;
- (void)_readTransitListInstruction;
- (void)_readGenericInstruction;
- (void)_readDepartureBar;
- (void)_readCountStopsText;
- (void)_readDrivingWalkingSignInstruction;
- (void)_readDrivingWalkingListInstruction;
- (void)_readDrivingWalkingSpokenInstruction;
- (id)departureBarStyleAsString:(int)arg1;
- (int)StringAsDepartureBarStyle:(id)arg1;
- (void)_transit_prepareForDeepMergeFrom:(id)arg1;

@end
