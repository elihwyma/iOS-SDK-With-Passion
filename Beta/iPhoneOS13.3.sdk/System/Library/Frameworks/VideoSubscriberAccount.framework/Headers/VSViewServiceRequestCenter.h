/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface VSViewServiceRequestCenter : NSObject

{
    NSOperationQueue *_requestQueue;
    NSOperationQueue *_completionQueue;
}

@property (retain, nonatomic) NSOperationQueue *requestQueue;
@property (retain, nonatomic) NSOperationQueue *completionQueue;

+ (id)sharedViewServiceRequestCenter;

- (id)init;
- (id)enqueueCompletionHandlerBlock:(CDUnknownBlockType)arg1;
- (id)enqueueRequest:(id)arg1 withAccountManagerDelegate:(id)arg2 operationDelegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
