/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEODirectionIntent, GEOMapItemIdentifier, GEOResolvedItem, GEORetainedSearchMetadata, GEOSearchCategory, GEOServerResultScoreMetadata, NSArray, NSData, NSString;

@protocol GEOMapItem;

@protocol GEOCompletionItem <Swift>

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

- (unsigned short)queryLine;
- (unsigned short)highlightsForLine: /* Error: Ran out of types for this method. */;
- (unsigned short)calloutTitle;
- (unsigned short)getCoordinate: /* Error: Ran out of types for this method. */;
- (unsigned short)sendFeedback;

@end
