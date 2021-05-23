/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@interface WebApplicationCache : NSObject

+ (long long)maximumSize;
+ (void)setMaximumSize:(long long)arg1;
+ (void)initializeWithBundleIdentifier:(id)arg1;
+ (long long)defaultOriginQuota;
+ (void)setDefaultOriginQuota:(long long)arg1;
+ (long long)diskUsageForOrigin:(id)arg1;
+ (void)deleteAllApplicationCaches;
+ (void)deleteCacheForOrigin:(id)arg1;
+ (id)originsWithCache;

@end
