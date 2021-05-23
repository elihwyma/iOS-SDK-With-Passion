/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFLock : NSObject

{
    struct _opaque_pthread_mutex_t _lock;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_owner;
    unsigned long long _count;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (_Bool)tryLock;

@end
