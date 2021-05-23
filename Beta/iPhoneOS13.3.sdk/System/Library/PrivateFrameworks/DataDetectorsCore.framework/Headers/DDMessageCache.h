/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface DDMessageCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
    NSMutableDictionary *_cache;
    NSMutableArray *_indexLRU;
}

- (id)init;
- (void)removeConversation:(id)arg1;
- (void)_pruneIgnoringFirst:(_Bool)arg1;
- (id)stringWithElement:(id)arg1 conversationID:(id)arg2 range:(struct _NSRange *)arg3;

@end
