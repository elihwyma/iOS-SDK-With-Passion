/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSMutableDictionary.h>

@class NSSharedKeySet;

__attribute__((visibility("hidden")))
@interface NSSharedKeyDictionary : NSMutableDictionary

{
    NSSharedKeySet *_keyMap;
    unsigned long long _count;
    id *_values;
    CDUnknownFunctionPointerType _ifkIMP;
    NSMutableDictionary *_sideDic;
    unsigned long long _mutations;
    _Bool _doKVO;
}

+ (id)sharedKeyDictionaryWithKeySet:(id)arg1;
+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectForKey:(id)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)keyEnumerator;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)setObservationInfo:(void *)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithKeySet:(id)arg1;
- (id)keySet;

@end
