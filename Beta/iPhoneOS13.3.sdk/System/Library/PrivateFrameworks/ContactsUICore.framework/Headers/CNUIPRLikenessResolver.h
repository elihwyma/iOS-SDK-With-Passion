/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNCache, CNContactStore, CNQueue, CNSchedulerProvider, NSString;

@protocol CNSchedulerProvider, CNUIPRLikenessResolver, CNUIPlaceholderProviderFactory, OS_dispatch_source;

@interface CNUIPRLikenessResolver : NSObject

{
    id <CNUIPRLikenessResolver> _likenessResolver;
    CNCache *_likenessCache;
    CNQueue *_evictionQueue;
    NSObject<OS_dispatch_source> *_memoryMonitoringSource;
    id <CNSchedulerProvider> _mainThreadSchedulerProvider;
    id <CNUIPlaceholderProviderFactory> _placeholderProviderFactory;
}

@property (retain, nonatomic) id <CNUIPRLikenessResolver> likenessResolver;
@property (retain, nonatomic) CNCache *likenessCache;
@property (retain, nonatomic) CNQueue *evictionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource;
@property (retain, nonatomic) id <CNSchedulerProvider> mainThreadSchedulerProvider;
@property (retain, nonatomic) id <CNUIPlaceholderProviderFactory> placeholderProviderFactory;
@property (nonatomic) long long prohibitedSources;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNSchedulerProvider *schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)_cacheKeyForContact:(id)arg1;

- (void)dealloc;
- (id)initWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2 schedulerProvider:(id)arg3;
- (id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;
- (id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(CDUnknownBlockType)arg3;
- (id)initWithLikenessResolver:(id)arg1;
- (id)initWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2;
- (id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3;
- (void)emptyCache:(id)arg1;
- (id)likenessesForContact:(id)arg1 workScheduler:(id)arg2;
- (void)refreshCacheKey:(id)arg1;
- (id)likenessLookup;
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2;
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2 meMonitor:(id)arg3;

@end
