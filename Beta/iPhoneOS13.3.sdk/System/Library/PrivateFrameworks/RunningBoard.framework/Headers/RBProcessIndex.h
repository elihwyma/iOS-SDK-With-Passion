/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface RBProcessIndex : NSObject

{
    struct os_unfair_lock_s _lock;
    unsigned long long _capacity;
    NSMutableOrderedSet *_processes;
    NSMutableDictionary *_processByIdentity;
    NSMutableDictionary *_processByInstance;
    NSMutableDictionary *_processByIdentifier;
}

+ (id)index;
+ (id)indexWithCapacity:(unsigned long long)arg1;

- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (_Bool)containsIdentifier:(id)arg1;
- (id)processForIdentity:(id)arg1;
- (id)allProcesses;
- (_Bool)removeProcess:(id)arg1;
- (_Bool)addProcess:(id)arg1;
- (_Bool)containsProcess:(id)arg1;
- (id)processForIdentifier:(id)arg1;
- (_Bool)containsIdentity:(id)arg1;
- (id)processForInstance:(id)arg1;
- (void)_lock_removeProcess:(id)arg1;
- (_Bool)containsInstance:(id)arg1;

@end
