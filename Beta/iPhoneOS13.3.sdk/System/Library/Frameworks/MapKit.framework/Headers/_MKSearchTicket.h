/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKTicket.h>

@class GEOCategorySearchResultSection, GEODirectionIntent, GEOMapRegion, GEOMapServiceTraits, GEORelatedSearchSuggestion, GEOResolvedItem, NSArray, NSError, NSString;

__attribute__((visibility("hidden")))
@interface _MKSearchTicket : _MKTicket

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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
@property (nonatomic, readonly) NSString *searchQuery;

- (id)initWithSearchTicket:(id)arg1;

@end
