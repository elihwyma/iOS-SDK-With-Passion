/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PROReadWriteLock : NSObject

{
    struct _opaque_pthread_rwlock_t lock;
}

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)lockForReading;
- (void)lockForWriting;

@end
