/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/_GEOPlaceRequestTicket.h>

@class GEOCategorySearchResultSection, GEODirectionIntent, GEOMapRegion, GEOMapServiceTraits, GEOPDMerchantLookupResult, GEORelatedSearchSuggestion, GEOResolvedItem, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchRequestTicket : _GEOPlaceRequestTicket

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly) CDStruct_d1a7ebee dataRequestKind;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (nonatomic, readonly, getter=isChainResultSet) _Bool chainResultSet;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) NSArray *browseCategories;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (nonatomic, readonly) NSString *resultSectionHeader;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) NSArray *displayHeaderSubstitutes;
@property (nonatomic, readonly) _Bool shouldEnableRedoSearch;
@property (nonatomic, readonly) GEOResolvedItem *clientResolvedResult;
@property (nonatomic, readonly) GEODirectionIntent *directionIntent;
@property (nonatomic, readonly) NSArray *retainedSearchMetadata;
@property (nonatomic, readonly) NSArray *searchResultSections;
@property (nonatomic, readonly) GEOCategorySearchResultSection *categorySearchResultSection;
@property (nonatomic, readonly) unsigned int dymSuggestionVisibleTime;
@property (nonatomic, readonly) _Bool showDymSuggestionCloseButton;
@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic, readonly) GEOPDMerchantLookupResult *merchantLookupResult;
@property (nonatomic, readonly) NSString *searchQuery;

@end
