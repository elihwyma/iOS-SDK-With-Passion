/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNCache, CNQueue, NSString, _CNUILikenessRenderer;

@protocol CNSchedulerProvider, OS_dispatch_source;

@interface _CNUICachingLikenessRenderer : NSObject

{
    struct os_unfair_lock_s _lock;
    _Bool _shouldRequireMainThread;
    _CNUILikenessRenderer *_renderer;
    id <CNSchedulerProvider> _schedulerProvider;
    CNCache *_imageCache;
    CNQueue *_evictionQueue;
    NSObject<OS_dispatch_source> *_memoryMonitoringSource;
    id <CNSchedulerProvider> _mainThreadSchedulerProvider;
}

@property (nonatomic, readonly) _CNUILikenessRenderer *renderer;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) _Bool shouldRequireMainThread;
@property (retain, nonatomic) CNCache *imageCache;
@property (retain, nonatomic) CNQueue *evictionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource;
@property (retain, nonatomic) id <CNSchedulerProvider> mainThreadSchedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)createMainThreadSchedulerProviderWithSchedulerProvider:(id)arg1;
+ (id)_cacheKeyForContacts:(id)arg1 scope:(id)arg2;

- (void)dealloc;
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3;
- (id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2;
- (id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2;
- (void)emptyCache:(id)arg1;
- (void)refreshCacheKey:(id)arg1;
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 capacity:(unsigned long long)arg3 shouldRequireMainThread:(_Bool)arg4;
- (id)initialRenderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3;
- (id)startCacheEntryWithObservable:(id)arg1 contacts:(id)arg2 scope:(id)arg3;
- (id)resizeCacheEntry:(id)arg1 withScope:(id)arg2 workScheduler:(id)arg3;

@end
