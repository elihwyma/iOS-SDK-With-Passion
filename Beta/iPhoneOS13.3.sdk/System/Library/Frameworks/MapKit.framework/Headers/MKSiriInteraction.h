/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOSearchCategory, MKMapItem, NSString;

@interface MKSiriInteraction : NSObject

{
    int _action;
    int _target;
    int _resultIndex;
    MKMapItem *_mapItem;
    GEOSearchCategory *_searchCategory;
    NSString *_searchQueryString;
}

@property (nonatomic) int action;
@property (nonatomic) int target;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic) int resultIndex;
@property (retain, nonatomic) GEOSearchCategory *searchCategory;
@property (retain, nonatomic) NSString *searchQueryString;

+ (id)navigationHash;
+ (void)setNavigationHash:(id)arg1;
+ (id)_siriIntentMurmurHash:(id)arg1;
+ (void)generateHashForNavigationURL:(id)arg1;
+ (void)removeRecentIntentWithPlacemark:(id)arg1;
+ (void)removeRecentIntentWithSearchText:(id)arg1;

- (id)initWithGEOUIAction:(int)arg1 target:(int)arg2 mapItem:(id)arg3 resultIndex:(int)arg4 searchCategory:(id)arg5 searchQueryString:(id)arg6;
- (void)donateIfWanted;
- (_Bool)_isValidTargetForNavUI:(int)arg1;
- (id)_whiteListedPlaceCardActionAsString:(int)arg1;
- (id)_whiteListedSiriListActionAsString:(int)arg1;
- (id)_whiteListedNavigationActionAsString:(int)arg1;
- (_Bool)_isStartNavigationAction:(int)arg1;
- (void)_navTimerFired:(id)arg1;
- (id)_whiteListedBrowseCategoryActionAsString:(int)arg1;
- (id)_whiteListedSearchActionAsString:(int)arg1;
- (id)intentIfWanted;
- (_Bool)_isIntentDeletable;
- (id)_siriIntentHash:(id)arg1;

@end
