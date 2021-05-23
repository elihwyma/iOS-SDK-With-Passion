/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REClassLoader.h>

@class NSOrderedSet;

@interface REGroupClassLoader : REClassLoader

{
    NSOrderedSet *_loaders;
}

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithLoaders:(id)arg1;
- (void)_enumerateClassesWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBundleConfigurations:(CDUnknownBlockType)arg1;

@end
