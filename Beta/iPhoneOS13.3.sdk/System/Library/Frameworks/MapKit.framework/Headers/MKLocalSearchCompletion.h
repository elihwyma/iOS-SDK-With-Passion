/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEODirectionIntent, GEOResolvedItem, GEORetainedSearchMetadata, GEOSearchCategory, GEOServerResultScoreMetadata, MKMapItem, NSArray, NSString;

@protocol GEOCompletionItem;

@interface MKLocalSearchCompletion : NSObject

{
    id <GEOCompletionItem> _item;
    unsigned long long _serverSectionIndex;
    unsigned long long _serverItemIndexInSection;
    NSString *_sourceID;
    NSString *_localizedSectionHeader;
    MKMapItem *_mapItem;
    _Bool _alreadySentFeedback;
    _Bool _shouldDisplayNoResults;
    _Bool _shouldEnableRAPForNoResults;
    MKLocalSearchCompletion *_directionIntentOrigin;
    MKLocalSearchCompletion *_directionIntentDestination;
}

@property (nonatomic, readonly) id <GEOCompletionItem> geoCompletionItem;
@property (nonatomic, readonly, getter=_alreadySentFeedback) _Bool alreadySentFeedback;
@property (nonatomic, readonly) NSArray *displayLines;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) GEOSearchCategory *category;
@property (nonatomic, readonly) GEOResolvedItem *clientResolved;
@property (nonatomic, readonly) GEODirectionIntent *directionIntent;
@property (retain, nonatomic) MKLocalSearchCompletion *directionIntentOrigin;
@property (retain, nonatomic) MKLocalSearchCompletion *directionIntentDestination;
@property (nonatomic, readonly) GEORetainedSearchMetadata *retainedSearchMetadata;
@property (nonatomic, readonly) _Bool hasSortPriority;
@property (nonatomic, readonly) long long sortPriority;
@property (nonatomic, readonly) long long entryTapBehavior;
@property (nonatomic, readonly) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property (nonatomic, readonly) unsigned long long serverSectionIndex;
@property (nonatomic, readonly) unsigned long long serverItemIndexInSection;
@property (nonatomic, readonly) _Bool hasQueryAcceleratorAffordanceEnabled;
@property (nonatomic, readonly) NSString *queryAcceleratorCompletionString;
@property (nonatomic, readonly) long long autocompleteCellType;
@property (copy, nonatomic) NSString *sourceID;
@property (copy, nonatomic) NSString *localizedSectionHeader;
@property (nonatomic, readonly, getter=_type) long long type;
@property (nonatomic, readonly, getter=_placeType) int placeType;
@property (nonatomic, readonly, getter=_hasDisambiguationRadiusMeters) _Bool hasDisambiguationRadiusMeters;
@property (nonatomic, readonly, getter=_disambiguationRadiusMeters) float disambiguationRadiusMeters;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *titleHighlightRanges;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSArray *subtitleHighlightRanges;

- (_Bool)isEqual:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)queryLine;
- (id)highlightsForLine:(unsigned long long)arg1;
- (id)calloutTitle;
- (_Bool)getCoordinate:(struct CLLocationCoordinate2D *)arg1;
- (void)sendFeedback;
- (id)_geoCompletionItem;
- (id)initWithGeoCompletionItem:(id)arg1 serverSectionIndex:(unsigned long long)arg2 serverItemIndexInSection:(unsigned long long)arg3;
- (id)copyStorage;
- (id)iconWithScale:(double)arg1;

@end
