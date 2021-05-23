/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NTKBundleComplicationDataSourceLoader : NSObject

{
    NSArray *_cachedDataSources;
}

+ (id)complicationDataSourceLoaderWithDirectories:(id)arg1;
+ (id)disabledComplicationDataSourceLoader;
+ (id)defaultComplicationDataSourceLoader;
+ (id)complicationDataSourceLoaderWithDirectory:(id)arg1;
+ (id)complicationDataSourceLoaderWithBlock:(CDUnknownBlockType)arg1;
+ (id)aggregateComplicationLoaderWithComplicationLoaders:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_loadClassesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerationComplicationClassesWithBlock:(CDUnknownBlockType)arg1;

@end
