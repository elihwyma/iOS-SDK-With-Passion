/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class ATXPCConnection, NSDictionary, NSString;

@protocol OS_xpc_object;

@interface ATXPCMessage : NSObject

{
    ATXPCConnection *_receivingConnection;
    NSString *_name;
    NSDictionary *_info;
    NSObject<OS_xpc_object> *_x_reply_connection;
    NSObject<OS_xpc_object> *_x_reply;
}

@property (nonatomic, readonly) NSString *name;
@property (copy, nonatomic) NSDictionary *info;

- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)sendReply:(id)arg1;
- (_Bool)needsReply;
- (id)_createXPCMessage;
- (id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2;

@end
