/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSHistoryObjectCache : NSObject

{
    struct unordered_map<long long, WBSHistoryItem *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryItem *>>> _itemsByDatabaseID;
    struct unordered_map<long long, WBSHistoryVisit *__weak, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryVisit *__weak>>> _weakVisitsByDatabaseID;
}

- (id)init;
- (void)clear;
- (id).cxx_construct;
- (id)allItems;
- (void)_clearNilReferences;
- (id)itemForID:(long long)arg1;
- (void)setItem:(id)arg1 forID:(long long)arg2;
- (void)removeItemWithID:(long long)arg1;
- (void)changeItemIDs:(id)arg1;
- (void)reserveItemCapacity:(long long)arg1;
- (id)visitForID:(long long)arg1;
- (void)setVisit:(id)arg1 forID:(long long)arg2;
- (void)changeVisitIDs:(id)arg1;

@end
