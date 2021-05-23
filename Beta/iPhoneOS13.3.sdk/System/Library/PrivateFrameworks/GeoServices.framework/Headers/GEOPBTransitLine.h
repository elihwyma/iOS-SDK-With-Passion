/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPBTransitArtwork, GEOPBTransitLineDisplayHints, GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitLine : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOPBTransitTimeRange *_operatingHours;
    unsigned long long _operatingHoursCount;
    unsigned long long _operatingHoursSpace;
    GEOPBTransitArtwork *_alternateArtwork;
    GEOPBTransitArtwork *_artwork;
    GEOPBTransitLineDisplayHints *_displayHints;
    NSString *_lineColor;
    GEOPBTransitArtwork *_modeArtwork;
    unsigned long long _muid;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _guidanceSnappingType;
    unsigned int _lineIndex;
    int _placeDisplayStyle;
    int _preferredDepartureTimeStyle;
    unsigned int _systemIndex;
    int _transitType;
    struct {
        unsigned int has_muid:1;
        unsigned int has_guidanceSnappingType:1;
        unsigned int has_lineIndex:1;
        unsigned int has_placeDisplayStyle:1;
        unsigned int has_preferredDepartureTimeStyle:1;
        unsigned int has_systemIndex:1;
        unsigned int has_transitType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_operatingHours:1;
        unsigned int read_alternateArtwork:1;
        unsigned int read_artwork:1;
        unsigned int read_displayHints:1;
        unsigned int read_lineColor:1;
        unsigned int read_modeArtwork:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_operatingHours:1;
        unsigned int wrote_alternateArtwork:1;
        unsigned int wrote_artwork:1;
        unsigned int wrote_displayHints:1;
        unsigned int wrote_lineColor:1;
        unsigned int wrote_modeArtwork:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_nameDisplayString:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_guidanceSnappingType:1;
        unsigned int wrote_lineIndex:1;
        unsigned int wrote_placeDisplayStyle:1;
        unsigned int wrote_preferredDepartureTimeStyle:1;
        unsigned int wrote_systemIndex:1;
        unsigned int wrote_transitType:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) _Bool hasLineIndex;
@property (nonatomic) unsigned int lineIndex;
@property (nonatomic, readonly) _Bool hasArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (nonatomic, readonly) _Bool hasModeArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *modeArtwork;
@property (nonatomic, readonly) _Bool hasAlternateArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *alternateArtwork;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) _Bool hasGuidanceSnappingType;
@property (nonatomic) int guidanceSnappingType;
@property (nonatomic, readonly) _Bool hasLineColor;
@property (retain, nonatomic) NSString *lineColor;
@property (nonatomic) _Bool hasSystemIndex;
@property (nonatomic) unsigned int systemIndex;
@property (nonatomic) _Bool hasTransitType;
@property (nonatomic) int transitType;
@property (nonatomic) _Bool hasPreferredDepartureTimeStyle;
@property (nonatomic) int preferredDepartureTimeStyle;
@property (nonatomic, readonly) _Bool hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) unsigned long long operatingHoursCount;
@property (nonatomic, readonly) struct GEOPBTransitTimeRange *operatingHours;
@property (nonatomic, readonly) _Bool hasDisplayHints;
@property (retain, nonatomic) GEOPBTransitLineDisplayHints *displayHints;
@property (nonatomic, readonly) _Bool hasNameDisplayString;
@property (retain, nonatomic) NSString *nameDisplayString;
@property (nonatomic) _Bool hasPlaceDisplayStyle;
@property (nonatomic) int placeDisplayStyle;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (void)_readStyleAttributes;
- (void)_readArtwork;
- (void)_readDisplayHints;
- (void)clearOperatingHours;
- (void)_readOperatingHours;
- (void)_addNoFlagsOperatingHours:(struct GEOPBTransitTimeRange)arg1;
- (struct GEOPBTransitTimeRange)operatingHoursAtIndex:(unsigned long long)arg1;
- (void)addOperatingHours:(struct GEOPBTransitTimeRange)arg1;
- (void)setOperatingHours:(struct GEOPBTransitTimeRange *)arg1 count:(unsigned long long)arg2;
- (void)_readModeArtwork;
- (void)_readAlternateArtwork;
- (void)_readLineColor;
- (void)_readNameDisplayString;
- (id)guidanceSnappingTypeAsString:(int)arg1;
- (int)StringAsGuidanceSnappingType:(id)arg1;
- (id)preferredDepartureTimeStyleAsString:(int)arg1;
- (int)StringAsPreferredDepartureTimeStyle:(id)arg1;
- (id)placeDisplayStyleAsString:(int)arg1;
- (int)StringAsPlaceDisplayStyle:(id)arg1;
- (id)bestName;
- (id)geoTransitLineWithSystem:(id)arg1 locationHint:(CDStruct_c3b9c2ee)arg2;
- (id)identifierWithLocationHint:(CDStruct_c3b9c2ee)arg1;

@end
