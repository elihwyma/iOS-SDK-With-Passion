/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface ICMediaApplicationBannerStore : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_bannerCache;
    NSMutableDictionary *_propertyCache;
    NSString *_filePath;
}

+ (id)defaultStore;

- (id)init;
- (void)_load;
- (void)_commit;
- (id)initWithFilePath:(id)arg1;
- (id)allProperties;
- (id)_defaultStoreFilePath;
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
