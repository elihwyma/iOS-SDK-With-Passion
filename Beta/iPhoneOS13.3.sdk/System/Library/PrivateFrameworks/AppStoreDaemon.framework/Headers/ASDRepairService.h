/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDServiceBroker;

@interface ASDRepairService : NSObject

{
    ASDServiceBroker *_serviceBroker;
}

+ (id)defaultService;
+ (id)interface;

- (id)initWithServiceBroker:(id)arg1;
- (void)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)repairAppWithOptions:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (id)_asynchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;

@end
