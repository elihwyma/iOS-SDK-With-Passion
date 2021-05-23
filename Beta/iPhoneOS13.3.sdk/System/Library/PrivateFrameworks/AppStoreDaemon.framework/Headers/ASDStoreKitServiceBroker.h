/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class NSLock, NSXPCConnection;

@interface ASDStoreKitServiceBroker : NSObject

{
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)defaultBroker;
+ (id)_storeKitServiceInterface;
+ (id)_storeKitClientInterface;

- (id)init;
- (id)_serviceConnection;
- (id)storeKitSynchronousServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)storeKitService;
- (id)storeKitServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_serviceConnectionInvalidated;
- (id)storeKitSynchronousService;

@end
