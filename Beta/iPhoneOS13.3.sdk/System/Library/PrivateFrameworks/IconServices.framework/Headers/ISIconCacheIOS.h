/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface ISIconCacheIOS : NSObject

{
    _Bool _initialized;
    NSString *_cacheKeySalt;
    NSURL *_cacheURL;
}

@property (readonly) _Bool initialized;
@property (copy) NSString *cacheKeySalt;
@property (retain) NSURL *cacheURL;

+ (id)xpcInterface;
+ (id)cacheContainerURL;
+ (id)cacheFolderURL;
+ (id)UUIDStringForString:(id)arg1;
+ (id)iconCacheSystemVersionFileURL;
+ (long long)currentDisplayGamut;

- (id)init;
- (id)initWithCacheURL:(id)arg1 salt:(id)arg2;
- (id)cacheKeyFromBundleIdentifier:(id)arg1 iconDictionary:(id)arg2 preferedIconName:(id)arg3;
- (id)bundleCacheKeyForBundleIdentifier:(id)arg1 cacheKey:(id)arg2 variant:(int)arg3 options:(int)arg4;
- (id)iconDataForKey:(id)arg1 ignoreCache:(_Bool)arg2 generatorBlock:(CDUnknownBlockType)arg3;
- (id)bundleCacheKeyPrefixForBundleIdentifier:(id)arg1;

@end
