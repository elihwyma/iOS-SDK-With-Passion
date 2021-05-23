/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSDictionary.h>

@class NSCache, _PASLazyPlist;

@interface _PASLPDictionary : NSDictionary

{
    _PASLazyPlist *_lazyPlist;
    const unsigned int *_storage;
    unsigned long long _count;
    NSCache *_enumerationCache;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectForKey:(id)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)keyEnumerator;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithLazyPlist:(id)arg1 storage:(const unsigned int *)arg2 count:(unsigned long long)arg3;
- (id)_keyAtIndex:(unsigned long long)arg1;

@end
