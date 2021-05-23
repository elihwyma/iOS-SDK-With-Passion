/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString, OFLRUCache;

@protocol OS_dispatch_queue;

@interface OFMetadataFileCache : NSObject

{
    NSObject<OS_dispatch_queue> *_serialDiskSaveQueue;
    NSString *_diskCacheDirectory;
    NSMutableDictionary *_diskCacheFilePathForIdentifiers;
    OFLRUCache *_memoryCache;
    _Bool _useMemoryCache;
    _Bool _useDiskCache;
    _Bool _useAsynchronousSerialDiskSaveQueue;
    _Bool _allowCleanupOnMemoryWarnings;
    _Bool _allowCleanupOnEnteringBackground;
}

@property (nonatomic) _Bool useMemoryCache;
@property (nonatomic) _Bool useDiskCache;
@property (nonatomic) _Bool useAsynchronousSerialDiskSaveQueue;
@property (nonatomic) _Bool allowCleanupOnMemoryWarnings;
@property (nonatomic) _Bool allowCleanupOnEnteringBackground;

- (id)init;
- (void)dealloc;
- (void)invalidateDiskCaches;
- (void)invalidateMemoryCaches;
- (id)attributesForIdentifier:(id)arg1;
- (void)_didReceiveMemoryWarningNotification;
- (void)_didEnterBackgroundNotification;
- (void)_willTerminateNotification;
- (id)initWithDiskCacheDirectory:(id)arg1;
- (void)purgeDiskCache:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_diskCacheFilePathForIdentifier:(id)arg1;
- (id)_metadataForIdentifier:(id)arg1;
- (void)_saveMetadata:(id)arg1 forIdentifier:(id)arg2;
- (void)invalidateMemoryCacheForIdentifier:(id)arg1;
- (void)invalidateDiskCacheForIdentifier:(id)arg1;
- (void)setNumberOfMemorySlots:(unsigned long long)arg1;
- (id)valueForKey:(id)arg1 andIdentifier:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 andIdentifier:(id)arg3;
- (void)setAttributes:(id)arg1 forIdentifier:(id)arg2;

@end
