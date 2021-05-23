/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface RBProcessMap : NSObject

{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_stateMap;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)dictionary;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (id)stateForIdentity:(id)arg1;
- (void)removeIdentity:(id)arg1;
- (id)removeStateForIdentity:(id)arg1;
- (id)setState:(id)arg1 forIdentity:(id)arg2;
- (id)removeStateForIdentity:(id)arg1 withPredicate:(CDUnknownBlockType)arg2;
- (_Bool)containsIdentity:(id)arg1;
- (id)allState;
- (void)addIdentity:(id)arg1;
- (id)allIdentities;

@end
