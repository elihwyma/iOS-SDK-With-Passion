/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSArray.h>

@class _PASLazyPlist;

@interface _PASLPArray : NSArray

{
    _PASLazyPlist *_lazyPlist;
    const unsigned int *_storage;
    unsigned long long _count;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithLazyPlist:(id)arg1 storage:(const unsigned int *)arg2 count:(unsigned long long)arg3;

@end
