/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@interface NSObject (NSObject_KVOBlock)

- (id)allKVOObservers;
- (void)removeKVOBlockForToken:(id)arg1;
- (id)addKVOBlockForKeyPath:(id)arg1 options:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (id)addOneShotKVOBlockForKeyPath:(id)arg1 options:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;

@end
