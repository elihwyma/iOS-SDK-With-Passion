/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray;

@interface GEOSortPriorityMapping : NSObject

{
    NSArray *_entries;
}

@property (nonatomic, readonly) NSArray *entries;

+ (long long)resultTypeForACResultType:(int)arg1;
+ (long long)resultSubtypeForACResultSubtype:(int)arg1;
+ (id)sortPriorityMappingFromDefaultsValue:(id)arg1;

- (id)init;
- (id)initWithAutocompleteResultSortPriorityMapping:(id)arg1;
- (id)initWithEntries:(id)arg1;

@end
