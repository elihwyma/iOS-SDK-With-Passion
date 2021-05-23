/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <NSObject.h>

@class CNContactStore, CNFavorites, NSArray, NSCache, NSString, TUCallProviderManager;

@protocol OS_dispatch_queue;

@interface TPFavoritesController : NSObject

{
    TUCallProviderManager *_callProviderManager;
    NSCache *_contactCache;
    CNContactStore *_contactStore;
    NSArray *_favoritesEntries;
    CNFavorites *_favoritesManager;
    NSCache *_transportNameCache;
    unsigned long long _prefetchCount;
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
}

@property (nonatomic, readonly) NSCache *contactCache;
@property (nonatomic, readonly) NSCache *transportNameCache;
@property (nonatomic, readonly) TUCallProviderManager *callProviderManager;
@property (nonatomic, readonly) CNFavorites *favoritesManager;
@property (nonatomic, readonly) unsigned long long prefetchCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (copy, nonatomic) NSArray *favoritesEntries;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)addEntry:(id)arg1;
- (void)providersChangedForProviderManager:(id)arg1;
- (void)moveEntryAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)fetchFavoritesEntries;
- (void)handleContactsFavoritesDidChangeNotification:(id)arg1;
- (unsigned long long)absoluteIndexForIndex:(unsigned long long)arg1;
- (id)contactCacheKeyForFavoritesEntry:(id)arg1;
- (id)fetchContactForFavoritesEntry:(id)arg1;
- (id)fetchContactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2;
- (id)transportNameCacheKeyForFavoritesEntry:(id)arg1;
- (id)fetchTransportNameForFavoritesEntry:(id)arg1;
- (id)initWithContactStore:(id)arg1 prefetchCount:(unsigned long long)arg2;
- (_Bool)canAddEntry;
- (void)removeEntriesAtIndexes:(id)arg1;
- (id)contactForFavoritesEntry:(id)arg1;
- (id)contactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2;
- (id)transportNameForFavoritesEntry:(id)arg1;

@end
