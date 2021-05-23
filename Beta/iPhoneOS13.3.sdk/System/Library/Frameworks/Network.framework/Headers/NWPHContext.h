/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWPHContext : NSObject

{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_request;
    NSObject<OS_xpc_object> *_reply;
}

@property (retain) NSObject<OS_xpc_object> *connection;
@property (retain) NSObject<OS_xpc_object> *request;
@property (retain) NSObject<OS_xpc_object> *reply;
@property (nonatomic, readonly) int pid;

- (id)initWithRequest:(id)arg1 onConnection:(id)arg2;

@end
