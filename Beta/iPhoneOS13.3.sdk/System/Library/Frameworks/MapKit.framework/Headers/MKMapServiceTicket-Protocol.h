/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@class GEOCategorySearchResultSection, GEODirectionIntent, GEOMapRegion, GEOMapServiceTraits, GEORelatedSearchSuggestion, GEOResolvedItem, NSArray, NSError, NSString;

@protocol MKMapServiceTicket <Swift>

@property (nonatomic, readonly) GEOMapServiceTraits *traits;
@property (nonatomic, readonly) NSArray *exactMapItems;
@property (nonatomic, readonly) NSArray *refinedMapItems;
@property (nonatomic, readonly) GEOMapRegion *boundingRegion;
@property (nonatomic, readonly, getter=isChainResultSet) _Bool chainResultSet;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (nonatomic, readonly) NSArray *browseCategories;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) NSArray *displayHeaderSubstitutes;
@property (nonatomic, readonly) _Bool shouldEnableRedoSearch;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) GEOResolvedItem *clientResolvedResult;
@property (nonatomic, readonly) NSArray *retainedSearchMetadata;
@property (nonatomic, readonly) GEODirectionIntent *directionIntent;
@property (nonatomic, readonly) unsigned int dymSuggestionVisibleTime;
@property (nonatomic, readonly) _Bool showDymSuggestionCloseButton;
@property (nonatomic, readonly) double requestResponseTime;
@property (nonatomic, readonly) NSString *sectionHeader;
@property (nonatomic, readonly) NSArray *searchResultSections;
@property (nonatomic, readonly) GEOCategorySearchResultSection *categorySearchResultSection;

- (unsigned short)cancel;
- (unsigned short)submitWithHandler:networkActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithRefinedHandler:networkActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithHandler:timeout:networkActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithRefinedHandler:timeout:networkActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)applyToCorrectedSearch: /* Error: Ran out of types for this method. */;
- (unsigned short)applyToPlaceInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithHandler:queue:networkActivity: /* Error: Ran out of types for this method. */;

@end
