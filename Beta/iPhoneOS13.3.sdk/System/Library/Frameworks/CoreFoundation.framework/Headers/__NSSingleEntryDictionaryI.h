/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface __NSSingleEntryDictionaryI : NSDictionary

{
    id _obj;
    id _key;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectForKey:(id)arg1;
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;

@end
