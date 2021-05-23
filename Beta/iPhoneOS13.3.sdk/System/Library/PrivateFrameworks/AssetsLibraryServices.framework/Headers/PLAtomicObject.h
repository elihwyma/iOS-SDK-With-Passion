/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLAtomicObject : NSObject

{
    struct os_unfair_lock_s _lock;
    id _object;
}

- (id)init;
- (id)initWithObject:(id)arg1;
- (void)atomicallyPerformBlockAndWait:(CDUnknownBlockType)arg1;
- (void)atomicSetObject:(id)arg1;

@end
