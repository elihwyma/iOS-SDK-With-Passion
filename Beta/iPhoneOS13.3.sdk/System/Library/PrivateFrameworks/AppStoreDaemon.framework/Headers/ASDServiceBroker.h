/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface ASDServiceBroker : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_machServiceName;
    int _token;
}

+ (id)interface;
+ (id)machServiceName;
+ (id)defaultBroker;
+ (id)newBrokerForMachServiceName:(id)arg1;

- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1;
- (void)_connect;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)getOcelotServiceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getLibraryServiceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getLibraryServiceWithError:(id *)arg1;
- (id)getTestFlightFeedbackServiceWithError:(id *)arg1;
- (void)getTestFlightFeedbackServiceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getIAPHistoryServiceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getCrossfireServiceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getDiagnosticServiceWithError:(id *)arg1;
- (void)getDiagnosticServiceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getIAPHistoryServiceWithError:(id *)arg1;
- (id)getInstallationServiceWithError:(id *)arg1;
- (void)getInstallationServiceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPersonalizationServiceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getPurchaseHistoryServiceWithError:(id *)arg1;
- (void)getPurchaseHistoryServiceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getPurchaseServiceWithError:(id *)arg1;
- (void)getPurchaseServiceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getUpdatesServiceWithError:(id *)arg1;
- (id)getRepairServiceWithError:(id *)arg1;
- (void)getRepairServiceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getUpdatesServiceWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
