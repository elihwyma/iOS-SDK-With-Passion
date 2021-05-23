/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface OFImageCache : NSObject

{
    NSObject<OS_dispatch_queue> *_serialDiskSaveQueue;
    NSString *_diskCacheDirectory;
    NSMutableDictionary *_diskCacheDirectoryForURLs;
    _Bool _useAsynchronousSerialDiskSaveQueue;
    unsigned long long _imageFormat;
}

@property (nonatomic) _Bool useAsynchronousSerialDiskSaveQueue;
@property (nonatomic) unsigned long long imageFormat;

+ (unsigned long long)alignResolution:(unsigned long long)arg1;
+ (unsigned long long)bestResolutionForSize:(struct CGSize)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidateDiskCaches;
- (void)invalidateMemoryCaches;
- (void)_didReceiveMemoryWarningNotification;
- (void)_didEnterBackgroundNotification;
- (void)_willTerminateNotification;
- (id)_diskCacheDirectoryForURL:(id)arg1;
- (id)_diskCacheFilePathForURL:(id)arg1 withResolution:(unsigned long long)arg2;
- (id)_diskCacheResolutionsForURL:(id)arg1;
- (id)initWithDiskCacheDirectory:(id)arg1;
- (void)invalidateDiskCacheForURL:(id)arg1;
- (void)purgeDiskCache:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)setImage:(struct CGImage *)arg1 withResolution:(unsigned long long)arg2 forURL:(id)arg3;
- (struct CGImage *)imageForURL:(id)arg1 withResolution:(unsigned long long)arg2;
- (_Bool)hasImageForURL:(id)arg1 withResolution:(unsigned long long)arg2;
- (struct CGImage *)imageFromBestDiskCacheForURL:(id)arg1 withResolution:(unsigned long long)arg2;
- (struct CGImage *)bestImageDiskCacheForURL:(id)arg1;

@end
