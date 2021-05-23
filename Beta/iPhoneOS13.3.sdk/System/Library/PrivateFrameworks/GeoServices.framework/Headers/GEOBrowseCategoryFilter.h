/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOSearchCategory;

@interface GEOBrowseCategoryFilter : NSObject

{
    GEOSearchCategory *_category;
}

- (id)init;
- (_Bool)applyToSearchParameters:(id)arg1 error:(id *)arg2;
- (_Bool)applyToAutocompleteParameters:(id)arg1 error:(id *)arg2;
- (id)initWithCategory:(id)arg1;

@end
