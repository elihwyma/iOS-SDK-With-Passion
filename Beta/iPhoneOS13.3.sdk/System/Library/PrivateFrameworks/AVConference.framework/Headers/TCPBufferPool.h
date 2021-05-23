/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCPBufferPool : NSObject

{
    int poolSize;
    struct tagBufferNode *head;
    struct tagBufferNode *tail;
    struct tagBufferNode *avail;
    int poolLock;
}

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)monitorBufferPool;
- (char *)getBufferFromPool:(int)arg1;
- (void)returnBufferToPool:(char *)arg1;

@end
