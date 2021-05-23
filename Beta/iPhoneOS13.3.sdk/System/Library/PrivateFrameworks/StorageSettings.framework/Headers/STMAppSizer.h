/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, STMAppDynamicSizer, STMAppPurgeableSizer, STMAppStaticSizer;

@protocol STMAppSizerDelegate;

@interface STMAppSizer : NSObject

{
    struct os_unfair_lock_s _proxyLock;
    NSArray *_proxies;
    NSDictionary *_proxiesByDataPath;
    NSDictionary *_proxiesByBundlePath;
    NSDictionary *_appContainersByPath;
    NSDictionary *_dataContainersByPath;
    id <STMAppSizerDelegate> _delegate;
    STMAppStaticSizer *_staticSizer;
    STMAppDynamicSizer *_dynamicSizer;
    STMAppPurgeableSizer *_purgeableSizer;
}

@property (retain) STMAppStaticSizer *staticSizer;
@property (retain) STMAppDynamicSizer *dynamicSizer;
@property (retain) STMAppPurgeableSizer *purgeableSizer;
@property (retain, nonatomic) NSArray *appProxies;
@property (weak) id <STMAppSizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedSizer;

- (id)init;
- (void)dealloc;
- (void)addProxy:(id)arg1;
- (id)calcAppStaticSize:(id)arg1;
- (id)calcAppDynamicSize:(id)arg1;
- (id)calcAppPurgeableSize:(id)arg1;
- (id)staticSizeForApp:(id)arg1;
- (id)dynamicSizeForApp:(id)arg1;
- (id)purgeableSizeForApp:(id)arg1;
- (void)sizeCacheItemsUpdated:(id)arg1;
- (void)sizeCacheSizesUpdated:(id)arg1;
- (long long)totalSizeOfItems;
- (void)startSizer;
- (void)stopSizer;
- (void)notifySizesUpdated;

@end
