/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol GEOCategorySuggestionsManagerServerProxy;

@interface GEOCategorySuggestionsManager : NSObject

{
    id <GEOCategorySuggestionsManagerServerProxy> _serverProxy;
}

+ (id)sharedManager;
+ (void)setUseLocalProxy:(_Bool)arg1;

- (id)init;
- (void)fetchSpotlightCategorySuggestions:(CDUnknownBlockType)arg1;
- (id)_categorySuggestionsForSuggestionsResult:(id)arg1 dayOfWeek:(long long)arg2 hourOfDay:(long long)arg3;
- (id)_spotlightCategorySuggestionsForResponse:(id)arg1;
- (void)updateCachedSpotlightCategorySuggestions:(CDUnknownBlockType)arg1;

@end
