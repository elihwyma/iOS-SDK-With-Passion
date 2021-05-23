/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExpectedReplies : NSObject

{
    struct __CFDictionary *_replyTable;
    struct _opaque_pthread_mutex_t _lock;
    unsigned long long _sequence;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)sequenceForProgress:(id)arg1;
- (void)removeProgressSequence:(unsigned long long)arg1;
- (id)progressForSequence:(unsigned long long)arg1;

@end
