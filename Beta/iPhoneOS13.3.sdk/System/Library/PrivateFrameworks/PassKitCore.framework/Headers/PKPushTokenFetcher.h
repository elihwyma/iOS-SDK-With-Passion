/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class APSConnection, NSMutableArray, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKPushTokenFetcher : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSMutableArray *_completionHandlers;
    APSConnection *_pushConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_handleTimeout;
- (void)_invokeCompletionWithPushToken:(id)arg1;
- (void)fetchPushTokenWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;

@end
