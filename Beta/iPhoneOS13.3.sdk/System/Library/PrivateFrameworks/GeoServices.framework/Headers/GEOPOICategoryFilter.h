/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray;

@interface GEOPOICategoryFilter : NSObject

{
    NSArray *_categoriesToInclude;
    NSArray *_categoriesToExclude;
}

@property (nonatomic, readonly) NSArray *categoriesToInclude;
@property (nonatomic, readonly) NSArray *categoriesToExclude;

+ (id)filterIncludingAllCategories;
+ (id)filterExcludingAllCategories;

- (id)initWithCategoriesToInclude:(id)arg1 categoriesToExclude:(id)arg2;
- (_Bool)applyToSearchParameters:(id)arg1 error:(id *)arg2;
- (_Bool)applyToAutocompleteParameters:(id)arg1 error:(id *)arg2;
- (_Bool)shouldDisplayPOIWithType:(int)arg1;

@end
