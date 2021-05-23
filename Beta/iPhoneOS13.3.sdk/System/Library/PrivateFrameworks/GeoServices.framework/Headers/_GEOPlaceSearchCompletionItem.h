/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEODirectionIntent, GEOMapItemIdentifier, GEOMapServiceTraits, GEOPDAutocompleteEntry, GEOResolvedItem, GEORetainedSearchMetadata, GEOSearchCategory, GEOServerResultScoreMetadata, NSArray, NSData, NSString;

@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchCompletionItem : NSObject

{
    GEOMapServiceTraits *_traits;
    int _entryListIndex;
    int _entryIndex;
    GEOPDAutocompleteEntry *_entry;
    NSArray *_displayLines;
    NSArray *_lineHighlights;
    id <GEOMapItem> _mapItem;
    GEOSearchCategory *_category;
}

@property (nonatomic, readonly) GEOPDAutocompleteEntry *entry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *displayLines;
@property (nonatomic, readonly) id <GEOMapItem> geoMapItem;
@property (nonatomic, readonly) GEOSearchCategory *searchCategory;
@property (nonatomic, readonly) GEOResolvedItem *clientResolved;
@property (nonatomic, readonly) GEODirectionIntent *directionIntent;
@property (nonatomic, readonly) GEORetainedSearchMetadata *retainedSearchMetadata;
@property (nonatomic, readonly) _Bool hasSortPriority;
@property (nonatomic, readonly) long long sortPriority;
@property (nonatomic, readonly) long long entryTapBehavior;
@property (nonatomic, readonly) long long autocompleteCellType;
@property (nonatomic, readonly) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property (nonatomic, readonly) NSData *entryMetadata;
@property (nonatomic, readonly) NSData *metadata;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) int placeType;
@property (nonatomic, readonly) _Bool hasDisambiguationRadiusMeters;
@property (nonatomic, readonly) float disambiguationRadiusMeters;
@property (nonatomic, readonly) _Bool hasQueryAcceleratorAffordanceEnabled;
@property (nonatomic, readonly) NSString *queryAcceleratorCompletionString;
@property (nonatomic, readonly, getter=_placeDataAutocompleteEntry) GEOPDAutocompleteEntry *placeDataAutocompleteEntry;

- (_Bool)isEqual:(id)arg1;
- (id)initWithEntry:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4 mapItems:(id)arg5;
- (id)queryLine;
- (id)highlightsForLine:(unsigned long long)arg1;
- (id)calloutTitle;
- (_Bool)getCoordinate:(CDStruct_c3b9c2ee *)arg1;
- (void)sendFeedback;

@end
