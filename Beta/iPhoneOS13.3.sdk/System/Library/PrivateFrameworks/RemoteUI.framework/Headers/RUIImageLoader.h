/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNotificationCenter, NSTimer;

@interface RUIImageLoader : NSObject

{
    NSLock *_queueLock;
    NSMutableArray *_loadQueue;
    NSMutableSet *_loadsInProgress;
    NSLock *_cacheLock;
    NSMutableDictionary *_imageCache;
    NSMutableArray *_imageCacheLRU;
    NSMutableDictionary *_loadCompletions;
    struct __CFRunLoop *_loaderRunLoop;
    struct __CFRunLoopSource *_loaderSource;
    NSNotificationCenter *_notificationCenter;
    NSTimer *_loadStatusNotificationTimer;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _startupLock;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _startupCondition;
}

+ (id)sharedImageLoader;

- (id)init;
- (id)notificationCenter;
- (void)_setImageData:(id)arg1 forURL:(id)arg2 error:(id)arg3;
- (void)_imageLoadFinished:(id)arg1;
- (void)_startLoader;
- (void)_loadImageURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_mainThread_postLoadingStatusChanged;
- (void)_postLoadingStatusChanged;
- (_Bool)_locked_URLIsLoading:(id)arg1;
- (void)_locked_loadImageForURL:(id)arg1;
- (void)_callCompletionsForURL:(id)arg1 image:(struct CGImage *)arg2 error:(id)arg3;
- (void)_postImageLoadedNotification:(id)arg1;
- (void)_loadingStatusChanged;
- (_Bool)isLoadingImages;
- (void)imageForURL:(id)arg1 scale:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGImage *)imageForURL:(id)arg1 loadIfAbsent:(_Bool)arg2;
- (void)_locked_imageLoadStarted:(id)arg1;

@end
