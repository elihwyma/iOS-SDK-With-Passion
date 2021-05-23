/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSLock, NSMutableArray, NSMutableDictionary;

@protocol STMSizeCacheDelegate;

@interface STMSizeCache : NSObject

{
    struct __CFString *_prefsKey;
    NSMutableDictionary *_itemsByPath;
    NSMutableArray *_eventsToProcess;
    unsigned long long _cacheEventID;
    id <STMSizeCacheDelegate> _delegate;
    long long _totalSize;
    NSLock *_itemsLock;
}

@property long long totalSize;
@property (retain) NSLock *itemsLock;
@property (retain, nonatomic) NSArray *items;
@property (readonly) NSDictionary *itemSizes;
@property (readonly) unsigned long long itemCount;
@property (readonly) long long totalSizeOfItems;
@property (nonatomic) unsigned long long cacheEventID;
@property (weak) id <STMSizeCacheDelegate> delegate;

- (void)dealloc;
- (void)addItem:(id)arg1;
- (void)_flushCache:(id)arg1;
- (id)createCacheEntryForPath:(id)arg1;
- (void)loadCacheFromPref;
- (void)_writeCache;
- (void)sizeItems:(id)arg1;
- (void)notifyItemsChanged;
- (void)updateCacheID:(id)arg1;
- (void)_updateTotalSize;
- (void)notifySizesChanged;
- (void)flushCacheToPref;
- (id)_sizeEntry:(id)arg1;
- (void)processCacheEvents:(id)arg1;
- (void)sizeItem:(id)arg1;
- (id)initWithPrefsKey:(id)arg1;
- (id)sizeOfItem:(id)arg1;
- (id)itemsContaining:(id)arg1;
- (id)itemsContainedBy:(id)arg1;
- (void)processCacheEvent:(id)arg1;
- (void)sizeAllItems;

@end
