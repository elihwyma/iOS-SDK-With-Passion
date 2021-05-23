/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSRefcountedPthreadMutex : NSObject

{
    struct _opaque_pthread_mutex_t lock;
}

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;

@end
