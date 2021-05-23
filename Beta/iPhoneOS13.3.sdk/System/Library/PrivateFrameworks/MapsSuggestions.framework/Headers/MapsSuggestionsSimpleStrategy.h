/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class MapsSuggestionsManager, NSString;

@interface MapsSuggestionsSimpleStrategy : NSObject

{
    struct NSMutableSet *_preFilters;
    struct NSMutableArray *_improvers;
    struct NSMutableArray *_dedupers;
    struct NSMutableSet *_postFilters;
    struct NSMutableArray *_previousResults;
    MapsSuggestionsManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;
@property (weak, nonatomic) MapsSuggestionsManager *manager;

- (id)init;
- (void)clearData;
- (struct NSArray *)topSuggestionsWithSourceEntries:(struct NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)preFiltersKept:(id)arg1;
- (_Bool)_dedupeByEnrichingEntries:(struct NSMutableArray *)arg1 withEntry:(id)arg2;
- (_Bool)postFiltersKept:(id)arg1;
- (_Bool)_entry:(id)arg1 existsInStorage:(struct NSDictionary *)arg2;
- (struct NSMutableArray *)_filteredPreviousResultsCrosscheckingStorage:(struct NSDictionary *)arg1;
- (_Bool)_improveEntry:(id)arg1;
- (struct NSMutableSet *)_filtersForprocessingType:(long long)arg1;
- (void)_addFilter:(id)arg1 processingType:(long long)arg2;
- (void)addPreFilter:(id)arg1;
- (void)addPostFilter:(id)arg1;
- (void)removeFilter:(id)arg1;
- (void)removeAllFilters;
- (void)addImprover:(id)arg1;
- (void)removeAllImprovers;
- (void)addDeduper:(id)arg1;
- (void)removeAllDedupers;

@end
