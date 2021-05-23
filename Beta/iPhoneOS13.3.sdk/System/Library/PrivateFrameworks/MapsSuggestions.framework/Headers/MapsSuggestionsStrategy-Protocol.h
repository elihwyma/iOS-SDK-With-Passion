/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/Swift-Protocol.h>

@class MapsSuggestionsManager;

@protocol MapsSuggestionsStrategy <Swift>

@property (weak, nonatomic) MapsSuggestionsManager *manager;

- (unsigned short)clearData;
- (unsigned short)topSuggestionsWithSourceEntries:error: /* Error: Ran out of types for this method. */;
- (unsigned short)preFiltersKept: /* Error: Ran out of types for this method. */;
- (unsigned short)postFiltersKept: /* Error: Ran out of types for this method. */;
- (unsigned short)addPreFilter: /* Error: Ran out of types for this method. */;
- (unsigned short)addPostFilter: /* Error: Ran out of types for this method. */;
- (unsigned short)removeFilter: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllFilters;
- (unsigned short)addImprover: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllImprovers;
- (unsigned short)addDeduper: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllDedupers;

@end
