/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WebHistoryPrivate : NSObject

{
    NSMutableDictionary *_entriesByURL;
    struct unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray>>>, std::__1::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray>>>>> _entriesByDate;
    NSMutableArray *_orderedLastVisitedDays;
    _Bool itemLimitSet;
    int itemLimit;
    _Bool ageInDaysLimitSet;
    int ageInDaysLimit;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)data;
- (_Bool)removeItem:(id)arg1;
- (_Bool)removeAllItems;
- (id).cxx_construct;
- (void)addItems:(id)arg1;
- (id)itemForURL:(id)arg1;
- (_Bool)findKey:(long long *)arg1 forDay:(double)arg2;
- (_Bool)removeItemFromDateCaches:(id)arg1;
- (void)insertItem:(id)arg1 forDateKey:(long long)arg2;
- (void)addItemToDateCaches:(id)arg1;
- (_Bool)removeItemForURLString:(id)arg1;
- (_Bool)addItem:(id)arg1 discardDuplicate:(_Bool)arg2;
- (id)itemForURLString:(id)arg1;
- (int)historyAgeInDaysLimit;
- (int)historyItemLimit;
- (id)ageLimitDate;
- (_Bool)loadHistoryGutsFromURL:(id)arg1 savedItemsCount:(int *)arg2 collectDiscardedItemsInto:(id)arg3 error:(id *)arg4;
- (id)visitedURL:(id)arg1 withTitle:(id)arg2;
- (void)rebuildHistoryByDayIfNeeded:(id)arg1;
- (_Bool)removeItems:(id)arg1;
- (id)orderedLastVisitedDays;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
- (_Bool)containsURL:(id)arg1;
- (id)allItems;
- (void)setHistoryAgeInDaysLimit:(int)arg1;
- (void)setHistoryItemLimit:(int)arg1;
- (_Bool)loadFromURL:(id)arg1 collectDiscardedItemsInto:(id)arg2 error:(id *)arg3;
- (_Bool)saveToURL:(id)arg1 error:(id *)arg2;
- (void)addVisitedLinksToVisitedLinkStore:(struct WebVisitedLinkStore *)arg1;

@end
