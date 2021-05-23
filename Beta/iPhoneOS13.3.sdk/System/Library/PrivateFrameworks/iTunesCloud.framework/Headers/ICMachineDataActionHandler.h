/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSOperationQueue;

@protocol OS_dispatch_queue;

@interface ICMachineDataActionHandler : NSObject

{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedHandler;

- (id)init;
- (void)processActionFromResponse:(id)arg1 withRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)processAction:(id)arg1 data:(id)arg2 withRequestContext:(id)arg3 version:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;

@end
