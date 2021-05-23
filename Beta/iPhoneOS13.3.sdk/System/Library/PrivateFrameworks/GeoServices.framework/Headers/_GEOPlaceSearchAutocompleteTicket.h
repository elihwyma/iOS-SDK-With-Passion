/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractRequestResponseTicket.h>

@class GEOAutocompleteSessionData, GEOMapServiceTraits, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchAutocompleteTicket : GEOAbstractRequestResponseTicket

{
    NSString *_searchQuery;
    GEOAutocompleteSessionData *_sessionData;
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
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (_Bool)matchesFragment:(id)arg1;
- (void)applyToSuggestionList:(id)arg1;
- (void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2;
- (_Bool)isRapEnabled;
- (id)clientRankingModel;
- (id)sortPriorityMapping;
- (_Bool)autocompleteTopSectionIsQuerySuggestions;
- (_Bool)showAutocompleteClientSource;
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 searchQuery:(id)arg3 sessionData:(id)arg4;

@end
