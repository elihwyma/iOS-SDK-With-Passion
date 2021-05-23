/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSDictionary.h>

@interface NSAttributeDictionary : NSDictionary

{
    unsigned long long numElements;
    struct _NSAttributeDictionaryElement elements[1];
}

+ (void)initialize;
+ (id)newWithDictionary:(id)arg1;
+ (id)emptyAttributeDictionary;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (_Bool)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (id)newWithKey:(id)arg1 object:(id)arg2;

@end
