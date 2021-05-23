/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol REClassLoaderConfiguration;

@interface REClassLoader : NSObject

{
    NSArray *_cachedDataSources;
    NSArray *_cachedBundleConfigurations;
    struct os_unfair_lock_s _loadingLock;
    id <REClassLoaderConfiguration> _configuration;
}

@property (nonatomic, readonly) id <REClassLoaderConfiguration> configuration;

+ (id)loaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2 configuration:(id)arg3;
+ (id)loaderWithBlock:(CDUnknownBlockType)arg1 configuration:(id)arg2;
+ (id)loaderWithObjects:(id)arg1 configuration:(id)arg2;
+ (id)groupLoaderWithLoaders:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)prewarm;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateClassesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBundleConfigurations:(CDUnknownBlockType)arg1;
- (void)_enumerateClassesWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBundleConfigurations:(CDUnknownBlockType)arg1;

@end
