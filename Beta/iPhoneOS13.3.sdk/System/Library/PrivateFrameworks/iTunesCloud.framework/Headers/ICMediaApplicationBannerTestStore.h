/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICMediaApplicationBannerStore.h>

@class NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface ICMediaApplicationBannerTestStore : ICMediaApplicationBannerStore

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_bannerCache;
    NSMutableDictionary *_propertyCache;
}

- (id)init;
- (id)_onQueueBannersForBundleIdentifier:(id)arg1 target:(id)arg2 error:(id *)arg3;
- (id)bannersForBundleIdentifier:(id)arg1 target:(id)arg2 error:(id *)arg3;
- (_Bool)setBannerStoreProperty:(id)arg1 forKey:(id)arg2;
- (id)bannerStorePropertyForKey:(id)arg1;
- (_Bool)addBanner:(id)arg1 error:(id *)arg2;
- (_Bool)removeBannerWithGUID:(id)arg1 error:(id *)arg2;
- (_Bool)removeBannersForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)allBannersWithResult:(id *)arg1;
- (_Bool)removeAllBannersWithResult:(id *)arg1;

@end
