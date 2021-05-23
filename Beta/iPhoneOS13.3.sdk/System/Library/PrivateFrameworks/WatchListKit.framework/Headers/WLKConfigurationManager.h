/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSURLSessionConfiguration, WLKServerConfigurationResponse;

@protocol OS_dispatch_queue;

@interface WLKConfigurationManager : NSObject

{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    WLKServerConfigurationResponse *_config;
    NSURLSessionConfiguration *_sharedCacheSessionConfiguration;
}

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void)_invalidateCache;
- (id)_config;
- (id)_configuration;
- (id)_stringForCachePolicy:(unsigned long long)arg1;
- (void)fetchConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchConfigurationWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 queryParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleLibraryDidChangeNotification:(id)arg1;
- (void)_setConfig:(id)arg1;
- (id)_configurationWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 queryParameters:(id)arg3;
- (void)_invalidateNetworkCache;
- (id)_utsk;
- (void)_setUtsk:(id)arg1;

@end
