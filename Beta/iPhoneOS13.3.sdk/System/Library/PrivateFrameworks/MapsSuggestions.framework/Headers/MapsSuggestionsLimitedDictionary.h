/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MapsSuggestionsLimitedDictionary : NSObject

{
    unsigned long long _maxCapacity;
    NSMutableDictionary *_dict;
    NSMutableDictionary *_hits;
    NSMutableArray *_order;
    unsigned long long _totalHits;
    unsigned long long _totalMisses;
}

- (id)description;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;
- (double)totalHitRatio;
- (unsigned long long)hitsOnKey:(id)arg1;

@end
