/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSOperationQueue;

@protocol OS_dispatch_queue;

@interface _NSHTTPConnectionInfo : NSObject

{
    struct HTTPConnectionInfo *_httpConnectionInfo;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSOperationQueue *__delegateQueue;
}

@property (retain, nonatomic) NSOperationQueue *_delegateQueue;
@property (readonly) _Bool isValid;

- (void)invalidateUnderlyingConnection;
- (id)initWithHTTPConnectionInfo:(struct HTTPConnectionInfo *)arg1 queue:(id)arg2;
- (void)sendPingWithReceiveHandler:(CDUnknownBlockType)arg1;

@end
