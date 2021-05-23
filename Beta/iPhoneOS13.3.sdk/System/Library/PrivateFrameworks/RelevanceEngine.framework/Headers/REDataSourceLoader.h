/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class REClassLoader;

@interface REDataSourceLoader : NSObject

{
    REClassLoader *_loader;
}

+ (id)dataSourceLoaderWithDirectories:(id)arg1;
+ (id)dataSourceLoaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2;
+ (id)disabledDataSourceLoader;
+ (id)defaultDataSourceLoader;
+ (id)dataSourceLoaderWithDirectory:(id)arg1;
+ (id)dataSourceLoaderWithBlock:(CDUnknownBlockType)arg1;
+ (id)dataSourceLoaderWithDataSources:(id)arg1;
+ (id)aggregateDataSourceLoaderWithDataSourceLoaders:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)prewarm;
- (void)enumerateBundleConfigurations:(CDUnknownBlockType)arg1;
- (void)enumerateDataSourceClassesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDataSourceObjectsWithBlock:(CDUnknownBlockType)arg1;

@end
