/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, _CPCBAEngagementFeedback, _CPCacheHitFeedback, _CPCardSectionEngagementFeedback, _CPCardSectionFeedback, _CPCardViewAppearFeedback, _CPCardViewDisappearFeedback, _CPClearInputFeedback, _CPClientTimingFeedback, _CPConnectionInvalidatedFeedback, _CPCustomFeedback, _CPDidGoToSearchFeedback, _CPDidGoToSiteFeedback, _CPEndLocalSearchFeedback, _CPEndNetworkSearchFeedback, _CPEndSearchFeedback, _CPErrorFeedback, _CPFeedback, _CPLateSectionsAppendedFeedback, _CPLookupHintRelevancyFeedback, _CPMapsCardSectionEngagementFeedback, _CPRankingFeedback, _CPResultEngagementFeedback, _CPResultFeedback, _CPResultGradingFeedback, _CPResultRankingFeedback, _CPResultsReceivedAfterTimeoutFeedback, _CPSearchViewAppearFeedback, _CPSearchViewDisappearFeedback, _CPSectionEngagementFeedback, _CPSectionRankingFeedback, _CPSessionEndFeedback, _CPSessionMissingResultsFeedback, _CPSessionMissingSuggestionsFeedback, _CPSkipSearchFeedback, _CPStartLocalSearchFeedback, _CPStartNetworkSearchFeedback, _CPStartSearchFeedback, _CPStoreCardSectionEngagementFeedback, _CPSuggestionEngagementFeedback, _CPVisibleResultsFeedback, _CPVisibleSectionHeaderFeedback, _CPVisibleSuggestionsFeedback;

@protocol _CPProcessableFeedback;

@interface _CPFeedbackPayload : PBCodable

{
    _CPFeedback *_feedback;
    _CPSearchViewAppearFeedback *_searchViewAppearFeedback;
    _CPSearchViewDisappearFeedback *_searchViewDisappearFeedback;
    _CPRankingFeedback *_rankingFeedback;
    _CPSectionRankingFeedback *_sectionRankingFeedback;
    _CPResultRankingFeedback *_resultRankingFeedback;
    _CPResultFeedback *_resultFeedback;
    _CPResultEngagementFeedback *_resultEngagementFeedback;
    _CPVisibleResultsFeedback *_visibleResultsFeedback;
    _CPCardSectionFeedback *_cardSectionFeedback;
    _CPMapsCardSectionEngagementFeedback *_mapsCardSectionEngagementFeedback;
    _CPStoreCardSectionEngagementFeedback *_storeCardSectionEngagementFeedback;
    _CPStartSearchFeedback *_startSearchFeedback;
    _CPEndSearchFeedback *_endSearchFeedback;
    _CPStartNetworkSearchFeedback *_startNetworkSearchFeedback;
    _CPEndNetworkSearchFeedback *_endNetworkSearchFeedback;
    _CPStartLocalSearchFeedback *_startLocalSearchFeedback;
    _CPEndLocalSearchFeedback *_endLocalSearchFeedback;
    _CPErrorFeedback *_errorFeedback;
    _CPCustomFeedback *_customFeedback;
    _CPSuggestionEngagementFeedback *_suggestionEngagementFeedback;
    _CPCardViewDisappearFeedback *_cardViewDisappearFeedback;
    _CPVisibleSuggestionsFeedback *_visibleSuggestionsFeedback;
    _CPResultsReceivedAfterTimeoutFeedback *_resultsReceivedAfterTimeoutFeedback;
    _CPLateSectionsAppendedFeedback *_lateSectionsAppendedFeedback;
    _CPClearInputFeedback *_clearInputFeedback;
    _CPSectionEngagementFeedback *_sectionEngagementFeedback;
    _CPVisibleSectionHeaderFeedback *_visibleSectionHeaderFeedback;
    _CPDidGoToSiteFeedback *_didGoToSiteFeedback;
    _CPDidGoToSearchFeedback *_didGoToSearchFeedback;
    _CPSessionMissingResultsFeedback *_sessionMissingResultsFeedback;
    _CPSessionMissingSuggestionsFeedback *_sessionMissingSuggestionsFeedback;
    _CPResultGradingFeedback *_resultGradingFeedback;
    _CPLookupHintRelevancyFeedback *_lookupHintRelevancyFeedback;
    _CPConnectionInvalidatedFeedback *_connectionInvalidatedFeedback;
    _CPCardSectionEngagementFeedback *_cardSectionEngagementFeedback;
    _CPSessionEndFeedback *_sessionEndFeedback;
    _CPCardViewAppearFeedback *_cardViewAppearFeedback;
    _CPSkipSearchFeedback *_skipSearchFeedback;
    _CPCacheHitFeedback *_cacheHitFeedback;
    _CPCBAEngagementFeedback *_cbaEngagementFeedback;
    _CPClientTimingFeedback *_clientTimingFeedback;
    unsigned long long _queryId;
    unsigned long long _whichContained_Feedback;
}

@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) PBCodable<_CPProcessableFeedback> *codable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _CPFeedback *feedback;
@property (retain, nonatomic) _CPSearchViewAppearFeedback *searchViewAppearFeedback;
@property (retain, nonatomic) _CPSearchViewDisappearFeedback *searchViewDisappearFeedback;
@property (retain, nonatomic) _CPRankingFeedback *rankingFeedback;
@property (retain, nonatomic) _CPSectionRankingFeedback *sectionRankingFeedback;
@property (retain, nonatomic) _CPResultRankingFeedback *resultRankingFeedback;
@property (retain, nonatomic) _CPResultFeedback *resultFeedback;
@property (retain, nonatomic) _CPResultEngagementFeedback *resultEngagementFeedback;
@property (retain, nonatomic) _CPVisibleResultsFeedback *visibleResultsFeedback;
@property (retain, nonatomic) _CPCardSectionFeedback *cardSectionFeedback;
@property (retain, nonatomic) _CPMapsCardSectionEngagementFeedback *mapsCardSectionEngagementFeedback;
@property (retain, nonatomic) _CPStoreCardSectionEngagementFeedback *storeCardSectionEngagementFeedback;
@property (retain, nonatomic) _CPStartSearchFeedback *startSearchFeedback;
@property (retain, nonatomic) _CPEndSearchFeedback *endSearchFeedback;
@property (retain, nonatomic) _CPStartNetworkSearchFeedback *startNetworkSearchFeedback;
@property (retain, nonatomic) _CPEndNetworkSearchFeedback *endNetworkSearchFeedback;
@property (retain, nonatomic) _CPStartLocalSearchFeedback *startLocalSearchFeedback;
@property (retain, nonatomic) _CPEndLocalSearchFeedback *endLocalSearchFeedback;
@property (retain, nonatomic) _CPErrorFeedback *errorFeedback;
@property (retain, nonatomic) _CPCustomFeedback *customFeedback;
@property (retain, nonatomic) _CPSuggestionEngagementFeedback *suggestionEngagementFeedback;
@property (retain, nonatomic) _CPCardViewDisappearFeedback *cardViewDisappearFeedback;
@property (retain, nonatomic) _CPVisibleSuggestionsFeedback *visibleSuggestionsFeedback;
@property (retain, nonatomic) _CPResultsReceivedAfterTimeoutFeedback *resultsReceivedAfterTimeoutFeedback;
@property (retain, nonatomic) _CPLateSectionsAppendedFeedback *lateSectionsAppendedFeedback;
@property (retain, nonatomic) _CPClearInputFeedback *clearInputFeedback;
@property (retain, nonatomic) _CPSectionEngagementFeedback *sectionEngagementFeedback;
@property (retain, nonatomic) _CPVisibleSectionHeaderFeedback *visibleSectionHeaderFeedback;
@property (retain, nonatomic) _CPDidGoToSiteFeedback *didGoToSiteFeedback;
@property (retain, nonatomic) _CPDidGoToSearchFeedback *didGoToSearchFeedback;
@property (retain, nonatomic) _CPSessionMissingResultsFeedback *sessionMissingResultsFeedback;
@property (retain, nonatomic) _CPSessionMissingSuggestionsFeedback *sessionMissingSuggestionsFeedback;
@property (retain, nonatomic) _CPResultGradingFeedback *resultGradingFeedback;
@property (retain, nonatomic) _CPLookupHintRelevancyFeedback *lookupHintRelevancyFeedback;
@property (retain, nonatomic) _CPConnectionInvalidatedFeedback *connectionInvalidatedFeedback;
@property (retain, nonatomic) _CPCardSectionEngagementFeedback *cardSectionEngagementFeedback;
@property (retain, nonatomic) _CPSessionEndFeedback *sessionEndFeedback;
@property (retain, nonatomic) _CPCardViewAppearFeedback *cardViewAppearFeedback;
@property (retain, nonatomic) _CPSkipSearchFeedback *skipSearchFeedback;
@property (retain, nonatomic) _CPCacheHitFeedback *cacheHitFeedback;
@property (retain, nonatomic) _CPCBAEngagementFeedback *cbaEngagementFeedback;
@property (retain, nonatomic) _CPClientTimingFeedback *clientTimingFeedback;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichContained_Feedback;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFeedback:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithCodable:(id)arg1;
- (void)clearContained_Feedback;

@end
