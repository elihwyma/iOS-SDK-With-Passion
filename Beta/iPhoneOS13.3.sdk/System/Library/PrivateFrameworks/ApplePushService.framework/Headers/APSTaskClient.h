/*
 Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface APSTaskClient : NSObject

{
    NSXPCConnection *_connection;
    NSMutableArray *_outstandingDNSRequests;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSString *_environment;
}

- (void)dealloc;
- (void)_clearOutstandingTasks:(long long)arg1;
- (void)_timeoutOutstandingRequests;
- (id)initWithEnvironment:(id)arg1 queue:(id)arg2;
- (id)_findDNSRequestForHostname:(id)arg1;
- (id)resolveDNS:(id)arg1;

@end
