/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPSectionedCollection.h>

@class NSCache;

@protocol MPLazySectionedCollectionDataSource;

@interface MPLazySectionedCollection : MPSectionedCollection

{
    struct vector<long, std::__1::allocator<long>> _cachedNumberOfItemsInSections;
    long long _cachedNumberOfSections;
    _Bool _hasValidCachedNumberOfSections;
    NSCache *_itemsCache;
    struct map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *>>> _itemIdentifierSetMap;
    NSCache *_sectionsCache;
    struct map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *>>> _sectionIdentifierSetMap;
    struct os_unfair_lock_s _mapLock;
    id <MPLazySectionedCollectionDataSource> _dataSource;
}

@property (retain, nonatomic) id <MPLazySectionedCollectionDataSource> dataSource;

+ (_Bool)supportsSecureCoding;

- (id)firstItem;
- (id).cxx_construct;
- (id)initWithDataSource:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (id)lastItem;
- (id)itemAtIndexPath:(id)arg1;
- (id)allItems;
- (id)allSections;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)firstSection;
- (id)itemsInSectionAtIndex:(long long)arg1;
- (_Bool)hasSameContentAsSectionedCollection:(id)arg1;
- (id)lastSection;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)_cachedObjectAtIndexPath:(id)arg1;
- (void)_updateCacheWithObject:(id)arg1 atIndexPath:(id)arg2;

@end
