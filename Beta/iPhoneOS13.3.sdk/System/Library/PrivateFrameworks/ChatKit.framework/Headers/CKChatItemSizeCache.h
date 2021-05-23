/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class IMDoubleLinkedList, IMScheduledUpdater, NSData, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CKChatItemSizeCache : NSObject

{
    _Bool _test_throwExceptionDuringInflate;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_chatItemGUIDToCacheKeyMap;
    IMDoubleLinkedList *_orderedKeys;
    NSObject<OS_dispatch_queue> *_cacheDiskQueue;
    IMScheduledUpdater *_evictionUpdater;
    NSString *_preferredLocalization;
    NSData *_test_cacheData;
}

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableDictionary *chatItemGUIDToCacheKeyMap;
@property (retain, nonatomic) IMDoubleLinkedList *orderedKeys;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheDiskQueue;
@property (retain, nonatomic) IMScheduledUpdater *evictionUpdater;
@property (retain, nonatomic) NSString *preferredLocalization;
@property (nonatomic) _Bool test_throwExceptionDuringInflate;
@property (retain, nonatomic) NSData *test_cacheData;

+ (id)sharedInstance;
+ (id)test_cachePath;

- (id)init;
- (void)dealloc;
- (void)_commonInit;
- (_Bool)_boldTextEnabled;
- (void)systemApplicationDidSuspend;
- (id)_systemVersion;
- (void)_inflateCache;
- (void)_evictIfNeeded;
- (id)cacheKeyForChatItem:(id)arg1 fittingSize:(struct CGSize)arg2;
- (void)_updateKeyMap:(id)arg1 forKey:(id)arg2 sizeCacheKey:(id)arg3;
- (void)_invalidateCachedSizeForChatItemGUID:(id)arg1;
- (void)_invalidateSizeCacheMetricsForKey:(id)arg1;
- (id)_fontSizeCategory;
- (id)_generateChatItemGuidToCacheKeyMapWithCache:(id)arg1;
- (void)_persistCache;
- (id)initForTestAndThrowException:(_Bool)arg1 cacheFileData:(id)arg2;
- (_Bool)cachedSizeForChatItem:(id)arg1 size:(out struct CGSize *)arg2 textAlignmentInsets:(out struct UIEdgeInsets *)arg3 fittingSize:(struct CGSize)arg4;
- (void)setCachedSizeForChatItem:(id)arg1 size:(struct CGSize)arg2 textAlignmentInsets:(struct UIEdgeInsets)arg3 fittingSize:(struct CGSize)arg4;
- (void)invalidateCachedSizeForChatItem:(id)arg1;
- (void)invalidateCachedSizeForGUIDPrefix:(id)arg1;

@end
