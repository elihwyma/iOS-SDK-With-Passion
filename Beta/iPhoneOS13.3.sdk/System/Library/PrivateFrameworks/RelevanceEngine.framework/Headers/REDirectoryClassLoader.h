/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REClassLoader.h>

@class NSArray, NSString;

@interface REDirectoryClassLoader : REClassLoader

{
    NSArray *_urls;
    NSString *_key;
}

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDirectories:(id)arg1 dataSourceKey:(id)arg2 configuration:(id)arg3;
- (void)_enumerateClassesWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBundleConfigurations:(CDUnknownBlockType)arg1;
- (void)_enumerateBundles:(CDUnknownBlockType)arg1;

@end
