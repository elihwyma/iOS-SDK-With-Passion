/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NTKBundleComplicationDataSourceBundleCache : NSObject

{
    NSMutableDictionary *_cachedBundles;
    struct os_unfair_lock_s _bundleLock;
}

+ (id)sharedBundleCache;

- (void)dealloc;
- (id)_init;
- (id)bundleAtPath:(id)arg1;

@end
