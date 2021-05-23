/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <IconServices/ISIconCacheIOS.h>

__attribute__((visibility("hidden")))
@interface ISIconCacheClient : ISIconCacheIOS

{
    unsigned long long _sandboxExtensionHandle;
}

@property unsigned long long sandboxExtensionHandle;

+ (id)sharedInstance;
+ (id)serviceName;

- (id)init;
- (id)connection;
- (void)_fetchCacheURLAndSalt;
- (id)iconBitmapDataWithResourceLocator:(id)arg1 variant:(int)arg2 options:(int)arg3;
- (void)invalidateCacheEntriesForBundleIdentifier:(id)arg1;

@end
