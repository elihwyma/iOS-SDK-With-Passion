/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractTicket.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOCategorySearchResultSection, GEODirectionIntent, GEOMapRegion, GEOMapServiceTraits, GEOPDMerchantLookupResult, GEORelatedSearchSuggestion, GEOResolvedItem, NSArray, NSDictionary, NSString;

@interface GEOAbstractMapServiceTicket : GEOAbstractTicket <Swift>

{
    GEOMapRegion *_resultBoundingRegion;
    _Bool _chainResultSet;
    NSArray *_relatedSearchSuggestions;
    NSArray *_browseCategories;
    GEORelatedSearchSuggestion *_defaultRelatedSuggestion;
    NSString *_resultSectionHeader;
    int _searchResultType;
    NSString *_resultDisplayHeader;
    NSArray *_displayHeaderSubstitutes;
    _Bool _shouldEnableRedoSearch;
    GEOResolvedItem *_clientResolvedResult;
    GEODirectionIntent *_directionIntent;
    NSArray *_retainedSearchMetadata;
    NSArray *_searchResultSections;
    unsigned int _dymSuggestionVisibleTime;
    _Bool _showDymSuggestionCloseButton;
    GEOPDMerchantLookupResult *_merchantLookupResult;
    GEOCategorySearchResultSection *_categorySearchResultSection;
}

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

- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)applyToPlaceInfo:(id)arg1;

@end
