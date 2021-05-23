/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSDaemonConnection, NSMutableArray, NSString;

@protocol AMSDeviceMessengerServiceInterface, OS_dispatch_queue;

@interface AMSDeviceMessenger : NSObject

{
    id <AMSDeviceMessengerServiceInterface> _proxyObject;
    AMSDaemonConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_updateHandlers;
}

@property (retain, nonatomic) AMSDaemonConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *updateHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_getProxyObject;
- (id)_identifierFromDialogRequest:(id)arg1;
- (void)_sendDelegateUpdateForMessage:(id)arg1;
- (void)deviceMessengerDidReceiveMessage:(id)arg1;
- (void)deviceMessengerDidReceiveReply:(id)arg1;
- (void)deviceMessengerDidClearMessage:(id)arg1;
- (void)deviceMessengerDidUpdateDevices;
- (void)addUpdateHandlerForType:(long long)arg1 filter:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)dialogsWithFilter:(id)arg1;
- (id)clearDialog:(id)arg1;
- (id)sendDialog:(id)arg1 account:(id)arg2;

@end
