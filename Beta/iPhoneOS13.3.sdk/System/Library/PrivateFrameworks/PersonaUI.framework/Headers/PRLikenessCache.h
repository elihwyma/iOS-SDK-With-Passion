/*
 Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

#import <Foundation/NSObject.h>

@class NSCache, NSURL;

@protocol OS_dispatch_queue;

@interface PRLikenessCache : NSObject

{
    NSCache *_inMemoryCache;
    NSObject<OS_dispatch_queue> *_cacheLookupQueue;
    _Bool _useMemory;
    _Bool _useFilesystem;
    _Bool _renderIfNeeded;
    NSURL *_cacheDirectory;
}

@property (retain, nonatomic) NSURL *cacheDirectory;
@property (nonatomic) _Bool useMemory;
@property (nonatomic) _Bool useFilesystem;
@property (nonatomic) _Bool renderIfNeeded;

+ (id)sharedInstance;
+ (id)_imageAtURL:(id)arg1;
+ (id)_applicationCacheDirectory;
+ (id)_staticRepresentationCacheURL;
+ (_Bool)_ensureExistenceOfDirectory:(id)arg1;
+ (_Bool)_purgeOldCacheFilesInDirectory:(id)arg1;
+ (_Bool)_writeImage:(id)arg1 toURL:(id)arg2;
+ (id)_propertyValueForURL:(id)arg1 forKey:(id)arg2;
+ (_Bool)_removeImageAtURL:(id)arg1;

- (id)init;
- (id)_cacheKeyForLikeness:(id)arg1 context:(id)arg2;
- (void)_renderImageForLikeness:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchFromFilesystem:(id)arg1 context:(id)arg2 renderBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchFromMemory:(id)arg1 context:(id)arg2 renderBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchWithReadBlock:(CDUnknownBlockType)arg1 writeBlock:(CDUnknownBlockType)arg2 renderBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_cacheURLForLikeness:(id)arg1 context:(id)arg2;
- (void)imageForLikeness:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
