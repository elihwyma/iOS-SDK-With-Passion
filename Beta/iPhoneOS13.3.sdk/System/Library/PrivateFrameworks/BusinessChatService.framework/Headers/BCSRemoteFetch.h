/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface BCSRemoteFetch : NSObject

+ (id)cloudServerRequestHelper;
+ (id)createSessionForClientBundleID:(id)arg1;
+ (id)_completionPool;
+ (id)_requestDispatchQueue;

- (void)enqueueCompletionBlock:(CDUnknownBlockType)arg1 forRequest:(id)arg2 isDuplicateRequest:(_Bool *)arg3;
- (id)dequeueCompletionBlocksForRequest:(id)arg1;
- (id)_hashForRequest:(id)arg1;
- (void)_enqueueCompletionBlock:(CDUnknownBlockType)arg1 forRequestHash:(id)arg2 inCompletionPool:(id)arg3 isDuplicateRequest:(_Bool *)arg4;
- (id)_dequeueCompletionBlocksForRequestHash:(id)arg1 inCompletionPool:(id)arg2;

@end
