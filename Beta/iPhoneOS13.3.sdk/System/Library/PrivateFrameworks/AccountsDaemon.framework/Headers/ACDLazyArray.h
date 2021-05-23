/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSArray.h>

@interface ACDLazyArray : NSArray

{
    struct os_unfair_lock_s _initializationLock;
    CDUnknownBlockType _initializationBlock;
    NSArray *_underlyingArray;
}

- (id)init;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitializer:(CDUnknownBlockType)arg1;

@end
