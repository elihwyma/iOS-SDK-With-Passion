/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface __NSPlaceholderDictionary : NSMutableDictionary

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;

@end
