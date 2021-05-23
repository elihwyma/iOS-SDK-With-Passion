/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <ATMessageLinkListener.h>

@class NSObject, NSString;

@protocol OS_xpc_object;

@interface ATLockdownListener : ATMessageLinkListener

{
    NSObject<OS_xpc_object> *_connection;
    NSString *_serviceName;
}

@property (copy, nonatomic, readonly) NSString *serviceName;

- (void)stop;
- (_Bool)start;
- (id)initWithServiceName:(id)arg1;
- (void)_handleNewConnection:(id)arg1;

@end
