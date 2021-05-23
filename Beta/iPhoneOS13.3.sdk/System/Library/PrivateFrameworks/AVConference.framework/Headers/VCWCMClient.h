/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, WCMClientDelegate;

__attribute__((visibility("hidden")))
@interface VCWCMClient : NSObject

{
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_dispatch_queue> *connectionQueue;
    NSObject<WCMClientDelegate> *wcmClientDelegate;
}

@property (readonly) NSObject<OS_xpc_object> *connection;
@property (readonly) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) id <WCMClientDelegate> wcmClientDelegate;

- (id)init;
- (void)dealloc;
- (void)startWCMClient;
- (void)stopWCMClient;

@end
