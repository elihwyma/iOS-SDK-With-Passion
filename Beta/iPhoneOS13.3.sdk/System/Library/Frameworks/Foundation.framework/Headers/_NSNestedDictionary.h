/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface _NSNestedDictionary : NSMutableDictionary

{
    id _locals;
    id _bindings;
}

- (unsigned long long)count;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)keyEnumerator;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)_recursiveAllKeys;
- (id)_recursiveAllValues;

@end
