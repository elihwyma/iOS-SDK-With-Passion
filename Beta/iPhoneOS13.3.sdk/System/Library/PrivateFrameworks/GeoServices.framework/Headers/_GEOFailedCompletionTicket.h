/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/_GEOFailedTicket.h>

@class GEOMapServiceTraits, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOFailedCompletionTicket : _GEOFailedTicket

{
    NSString *searchQuery;
    NSString *_searchQuery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly) CDStruct_d1a7ebee dataRequestKind;
@property (nonatomic, readonly, getter=_searchQuery) NSString *searchQuery;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;

- (_Bool)shouldDisplayNoResults;
- (_Bool)hasShouldDisplayNoResults;
- (double)retainSearchTime;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (id)initWithError:(id)arg1 searchQuery:(id)arg2 traits:(id)arg3;
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (_Bool)matchesFragment:(id)arg1;
- (void)applyToSuggestionList:(id)arg1;
- (void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2;
- (_Bool)isRapEnabled;
- (id)clientRankingModel;
- (id)sortPriorityMapping;
- (_Bool)autocompleteTopSectionIsQuerySuggestions;
- (_Bool)showAutocompleteClientSource;

@end
