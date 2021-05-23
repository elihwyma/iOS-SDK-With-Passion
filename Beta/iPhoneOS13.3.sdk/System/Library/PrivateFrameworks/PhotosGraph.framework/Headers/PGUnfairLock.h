/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGUnfairLock : NSObject

{
    struct os_unfair_lock_s _lock;
}

- (id)init;
- (void)lock;
- (void)unlock;

@end
