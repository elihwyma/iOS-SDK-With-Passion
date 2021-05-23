/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class NSObject, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source, OS_tcp_connection;

@interface ATNetServiceSocket

{
    _Bool _connected;
    NSString *_serviceName;
    NSString *_serviceType;
    NSString *_serviceDomain;
    NSString *_hostname;
    unsigned short _port;
    NSObject<OS_tcp_connection> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSObject<OS_dispatch_source> *_source;
    char _readBuffer[65536];
    _Bool _enableTLS;
    NSString *_interfaceName;
}

@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) _Bool enableTLS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)open;
- (_Bool)_connect;
- (void)closeDescriptor;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3;

@end
