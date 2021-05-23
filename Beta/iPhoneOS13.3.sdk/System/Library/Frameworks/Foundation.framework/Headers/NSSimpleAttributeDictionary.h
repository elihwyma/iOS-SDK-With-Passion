/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface NSSimpleAttributeDictionary : NSDictionary

{
    unsigned int numElements;
    unsigned int refCount;
    struct _NSSimpleAttributeDictionaryElement elements[1];
}

+ (id)newWithDictionary:(id)arg1;
+ (id)emptyAttributeDictionary;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (id)newWithKey:(id)arg1 object:(id)arg2;
- (unsigned long long)slotForKey:(id)arg1;

@end
