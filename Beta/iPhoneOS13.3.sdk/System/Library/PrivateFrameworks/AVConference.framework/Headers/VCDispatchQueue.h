/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCDispatchQueue : NSObject

{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_rootQueues;
}

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (id)getCustomRootQueueWithPriority:(int)arg1 isFixedPriority:(_Bool)arg2;

@end
