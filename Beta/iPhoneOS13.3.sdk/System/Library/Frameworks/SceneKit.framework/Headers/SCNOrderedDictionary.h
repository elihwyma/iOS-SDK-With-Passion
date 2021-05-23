/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCNOrderedDictionary : NSObject

{
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (void)dealloc;
- (id)copy;
- (unsigned long long)count;
- (id)allKeys;
- (id)objectAtIndex:(long long)arg1;
- (void)removeAllObjects;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)allValues;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)dictionary;
- (id)keys;
- (id)valueForKey:(id)arg1;
- (void)_setupFrom:(id)arg1;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;

@end
