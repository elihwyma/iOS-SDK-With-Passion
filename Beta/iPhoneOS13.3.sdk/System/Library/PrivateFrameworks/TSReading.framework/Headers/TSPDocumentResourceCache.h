/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL;

@protocol OS_dispatch_queue;

@interface TSPDocumentResourceCache : NSObject

{
    NSURL *_cacheURL;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_entries;
    long long _maxCacheSizeInBytes;
}

@property (nonatomic) long long maxCacheSizeInBytes;

+ (id)sharedCache;
+ (id)defaultCacheURL;

- (id)init;
- (void)clearCache;
- (id)initWithCacheURL:(id)arg1;
- (void)reloadEntries;
- (id)entryForDigestString:(id)arg1;
- (void)shrinkCacheWithMaxCacheSizeInBytes:(long long)arg1;
- (void)enumerateEntriesFromCacheURLWithHandler:(CDUnknownBlockType)arg1;
- (id)URLForDocumentResourceDigestString:(id)arg1;
- (_Bool)cacheDocumentResourceDigestString:(id)arg1 extension:(id)arg2 sourceURL:(id)arg3 fileSize:(long long)arg4 wasDownloaded:(_Bool)arg5;
- (_Bool)beginDocumentResourceAccessForDigestString:(id)arg1;
- (void)endDocumentResourceAccessForDigestString:(id)arg1;
- (void)shrinkCache;

@end
