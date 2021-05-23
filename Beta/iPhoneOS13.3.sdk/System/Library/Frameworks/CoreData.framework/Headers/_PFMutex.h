/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFMutex : NSObject

{
    struct _opaque_pthread_mutex_t _lock;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (_Bool)tryLock;

@end
