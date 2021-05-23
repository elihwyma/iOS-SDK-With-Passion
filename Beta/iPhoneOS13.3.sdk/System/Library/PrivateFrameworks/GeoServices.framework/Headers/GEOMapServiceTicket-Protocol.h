/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOCategorySearchResultSection, GEODirectionIntent, GEOMapRegion, GEOMapServiceTraits, GEOPDMerchantLookupResult, GEORelatedSearchSuggestion, GEOResolvedItem, NSArray, NSDictionary, NSString;

@protocol GEOMapServiceTicket <Swift>

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

- (unsigned short)submitWithHandler:networkActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithRefinedHandler:networkActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithHandler:auditToken:timeout:networkActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithHandler:timeout:networkActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithHandler:timeout:networkActivity:queue: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithHandler:auditToken:timeout:networkActivity:queue: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithRefinedHandler:timeout:networkActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithRefinedHandler:auditToken:timeout:networkActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithRefinedHandler:timeout:networkActivity:queue: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithRefinedHandler:auditToken:timeout:networkActivity:queue: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithHandler:networkActivity:queue: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithRefinedHandler:networkActivity:queue: /* Error: Ran out of types for this method. */;
- (unsigned short)applyToPlaceInfo: /* Error: Ran out of types for this method. */;

@end
