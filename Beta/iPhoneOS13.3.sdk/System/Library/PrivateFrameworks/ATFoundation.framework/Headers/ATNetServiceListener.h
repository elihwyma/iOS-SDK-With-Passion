/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class NSObject, NSString;

@protocol OS_dispatch_queue, OS_tcp_listener;

@interface ATNetServiceListener

{
    NSString *_serviceName;
    NSString *_serviceType;
    NSString *_serviceDomain;
    NSObject<OS_tcp_listener> *_tcpListener;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _enableTLS;
    NSString *_interfaceName;
}

@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) _Bool enableTLS;

- (void)stop;
- (_Bool)start;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3;

@end
