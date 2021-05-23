/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class REClassLoader;

@interface RERelevanceProviderManagerLoader : NSObject

{
    REClassLoader *_loader;
}

+ (id)disabledRelevanceProviderManagerLoader;
+ (id)relevanceProviderManagerLoaderWithDirectories:(id)arg1 relevanceProviderManagerKey:(id)arg2;
+ (id)relevanceProviderManagerLoaderWithDirectories:(id)arg1;
+ (id)relevanceProviderManagerLoaderWithBlock:(CDUnknownBlockType)arg1;
+ (id)aggregateRelevanceProviderManagerLoaderWithrelevanceProviderManagerLoaders:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)prewarm;
- (void)enumerateBundleConfigurations:(CDUnknownBlockType)arg1;
- (void)enumerationDataSourceClassesWithBlock:(CDUnknownBlockType)arg1;

@end
