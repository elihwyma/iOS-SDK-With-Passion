/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

#import <MapKit/Swift-Protocol.h>

@class GEOCategorySearchResultSection, GEODirectionIntent, GEOMapRegion, GEOMapServiceTraits, GEORelatedSearchSuggestion, GEOResolvedItem, NSArray, NSError, NSString;

@protocol GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface _MKTicket : NSObject <Swift>

{
    id <GEOMapServiceTicket> _ticket;
    NSArray *_exactMapItems;
    NSArray *_refinedMapItems;
    NSError *_error;
}

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

- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 queue:(id)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (id)initWithTicket:(id)arg1;

@end
