/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REClassLoader.h>

@interface REBlockClassLoader : REClassLoader

{
    CDUnknownBlockType _block;
}

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 configuration:(id)arg2;
- (void)_enumerateClassesWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBundleConfigurations:(CDUnknownBlockType)arg1;

@end
