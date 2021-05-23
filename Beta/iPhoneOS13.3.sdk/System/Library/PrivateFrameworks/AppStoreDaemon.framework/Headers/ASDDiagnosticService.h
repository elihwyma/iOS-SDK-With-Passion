/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDServiceBroker;

@interface ASDDiagnosticService : NSObject

{
    ASDServiceBroker *_serviceBroker;
}

+ (id)defaultService;
+ (id)interface;

- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithServiceBroker:(id)arg1;
- (id)activeClientsWithError:(id *)arg1;
- (_Bool)pingWithError:(id *)arg1;
- (_Bool)sendCommand:(long long)arg1 withError:(id *)arg2;
- (id)sendDetailsCommand:(long long)arg1 withError:(id *)arg2;
- (void)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
