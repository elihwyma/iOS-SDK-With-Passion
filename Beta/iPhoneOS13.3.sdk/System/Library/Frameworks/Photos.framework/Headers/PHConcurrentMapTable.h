/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@protocol OS_dispatch_queue;

@interface PHConcurrentMapTable : NSObject

{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMapTable *_protectedTable;
}

+ (id)mapTable;

- (id)init;
- (unsigned long long)count;
- (id)allKeys;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)_dispatchIsolatedWriteAsync:(CDUnknownBlockType)arg1;
- (void)_dispatchIsolatedWriteSync:(CDUnknownBlockType)arg1;
- (void)_dispatchIsolatedRead:(CDUnknownBlockType)arg1;
- (_Bool)tryRemoveObjectForKey:(id)arg1;

@end
