/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSuggestionEntry : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOHighlight *_textHighlights;
    unsigned long long _textHighlightsCount;
    unsigned long long _textHighlightsSpace;
    NSString *_calloutTitle;
    NSMutableArray *_displayLines;
    NSString *_iconID;
    GEOLatLng *_latlng;
    NSMutableArray *_namedFeatures;
    NSString *_searchQueryDisplayString;
    NSData *_suggestionEntryMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_textHighlights:1;
        unsigned int read_calloutTitle:1;
        unsigned int read_displayLines:1;
        unsigned int read_iconID:1;
        unsigned int read_latlng:1;
        unsigned int read_namedFeatures:1;
        unsigned int read_searchQueryDisplayString:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_textHighlights:1;
        unsigned int wrote_calloutTitle:1;
        unsigned int wrote_displayLines:1;
        unsigned int wrote_iconID:1;
        unsigned int wrote_latlng:1;
        unsigned int wrote_namedFeatures:1;
        unsigned int wrote_searchQueryDisplayString:1;
        unsigned int wrote_suggestionEntryMetadata:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *displayLines;
@property (nonatomic, readonly) unsigned long long textHighlightsCount;
@property (nonatomic, readonly) struct GEOHighlight *textHighlights;
@property (nonatomic, readonly) _Bool hasIconID;
@property (retain, nonatomic) NSString *iconID;
@property (nonatomic, readonly) _Bool hasLatlng;
@property (retain, nonatomic) GEOLatLng *latlng;
@property (nonatomic, readonly) _Bool hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) _Bool hasSearchQueryDisplayString;
@property (retain, nonatomic) NSString *searchQueryDisplayString;
@property (nonatomic, readonly) _Bool hasCalloutTitle;
@property (retain, nonatomic) NSString *calloutTitle;
@property (retain, nonatomic) NSMutableArray *namedFeatures;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)namedFeatureType;
+ (Class)displayLineType;

- (id)init;
- (void)dealloc;
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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readNamedFeatures;
- (void)_addNoFlagsNamedFeature:(id)arg1;
- (unsigned long long)namedFeaturesCount;
- (void)clearNamedFeatures;
- (id)namedFeatureAtIndex:(unsigned long long)arg1;
- (void)addNamedFeature:(id)arg1;
- (void)_readSuggestionEntryMetadata;
- (void)addDisplayLine:(id)arg1;
- (unsigned long long)displayLinesCount;
- (void)clearDisplayLines;
- (id)displayLineAtIndex:(unsigned long long)arg1;
- (void)clearTextHighlights;
- (void)_readDisplayLines;
- (void)_addNoFlagsDisplayLine:(id)arg1;
- (void)_readTextHighlights;
- (void)_addNoFlagsTextHighlights:(struct GEOHighlight)arg1;
- (void)_readIconID;
- (void)_readLatlng;
- (void)_readSearchQueryDisplayString;
- (void)_readCalloutTitle;
- (struct GEOHighlight)textHighlightsAtIndex:(unsigned long long)arg1;
- (void)addTextHighlights:(struct GEOHighlight)arg1;
- (void)setTextHighlights:(struct GEOHighlight *)arg1 count:(unsigned long long)arg2;

@end
