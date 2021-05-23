/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOMapServiceTraits, NSDictionary, NSString;

@protocol GEOMapServiceCompletionTicket <Swift>

@property (nonatomic, readonly, getter=_searchQuery) NSString *searchQuery;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;

- (unsigned short)cancel;
- (unsigned short)shouldDisplayNoResults;
- (unsigned short)hasShouldDisplayNoResults;
- (unsigned short)retainSearchTime;
- (unsigned short)submitWithAutoCompletionHandler:networkActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)matchesFragment: /* Error: Ran out of types for this method. */;
- (unsigned short)applyToSuggestionList: /* Error: Ran out of types for this method. */;
- (unsigned short)applyToSuggestionEntry:withAutocompleteSearchResultIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)isRapEnabled;
- (unsigned short)clientRankingModel;
- (unsigned short)sortPriorityMapping;
- (unsigned short)autocompleteTopSectionIsQuerySuggestions;
- (unsigned short)showAutocompleteClientSource;

@end
