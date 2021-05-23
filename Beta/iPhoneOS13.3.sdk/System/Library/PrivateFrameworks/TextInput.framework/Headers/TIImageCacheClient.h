/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSCache, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface TIImageCacheClient : NSObject

{
    NSString *_path;
    NSString *_imagePath;
    _Bool _hasLocalAccess;
    int _remoteQueryCount;
    _Bool _shouldIdleWhenDone;
    NSCache *_cache;
    NSString *_versionPath;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesDefault;
    NSObject<OS_dispatch_queue> *_storeImageQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSXPCConnection *_connection;
    _Bool _lockOnRead;
}

@property (nonatomic, readonly) int cacheVersion;
@property (nonatomic) _Bool lockOnRead;
@property (nonatomic) unsigned long long cacheItemLimit;

- (void)dealloc;
- (void)purge;
- (id)imagePath;
- (void *)openAndMmap:(id)arg1 withInfo:(struct _img *)arg2;
- (void)removeImagesInGroups:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_versionPath;
- (struct CGImage *)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (unsigned long long)imageCount;
- (id)initWithLocalAccess:(_Bool)arg1;
- (void)idleAfter:(double)arg1;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 item:(id)arg3;
- (void)setIdleWhenDone;
- (id)cacheNumberForKey:(id)arg1 inGroup:(id)arg2;
- (_Bool)imageExistsForKey:(id)arg1 inGroup:(id)arg2;
- (void)_createStorageQueueIfNecessary;
- (void)_localStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3;
- (void)_remoteStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3;
- (struct _img)_imgForItem:(id)arg1;
- (void)_createConnectionIfNecessary;
- (void)_idleIfNecessary:(_Bool)arg1;
- (int)_cacheVersion;
- (void)_setCacheVersion:(int)arg1;

@end
