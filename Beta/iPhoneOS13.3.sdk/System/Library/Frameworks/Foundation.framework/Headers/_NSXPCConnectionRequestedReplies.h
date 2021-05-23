/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionRequestedReplies : NSObject

{
    struct __CFDictionary *_replyDictionaryTable;
    struct __CFDictionary *_progressTable;
    unsigned long long _requestedReplyCount;
    unsigned char _invalid;
    struct _opaque_pthread_mutex_t _lock;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)beginTransactionForSequence:(unsigned long long)arg1 reply:(id)arg2 withProgress:(id)arg3;
- (void)endTransactionForSequence:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)progressForSequence:(unsigned long long)arg1;

@end
