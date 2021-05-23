/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REClassLoader.h>

@class NSArray;

@interface REObjectClassLoader : REClassLoader

{
    NSArray *_objects;
}

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithObjects:(id)arg1 configuration:(id)arg2;
- (void)_enumerateClassesWithBlock:(CDUnknownBlockType)arg1;

@end
