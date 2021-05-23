/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class IDSService, NSString;

@protocol DEDClientProtocol, IDSServiceDelegate, OS_dispatch_queue, OS_os_log;

@interface DEDIDSConnection : NSObject

{
    id <DEDClientProtocol> _remoteSideDelegate;
    NSObject<OS_os_log> *_log;
    IDSService *_service;
    IDSService *_localService;
    NSObject<OS_dispatch_queue> *_run_queue;
    NSObject<OS_dispatch_queue> *_discovery_queue;
    id <IDSServiceDelegate> _incomingDelegate;
    CDUnknownBlockType _deviceStatusCallback;
}

@property (retain) NSObject<OS_os_log> *log;
@property (retain) IDSService *service;
@property (retain) IDSService *localService;
@property (retain) NSObject<OS_dispatch_queue> *run_queue;
@property (retain) NSObject<OS_dispatch_queue> *discovery_queue;
@property (retain) id <IDSServiceDelegate> incomingDelegate;
@property (copy) CDUnknownBlockType deviceStatusCallback;
@property (weak) id <DEDClientProtocol> remoteSideDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)packPayload:(id)arg1;
+ (id)unpackProtobuf:(id)arg1;

- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (void)setDeviceCallback:(CDUnknownBlockType)arg1;
- (void)discoverDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)didStartBugSessionWithInfo:(id)arg1 forID:(id)arg2;
- (id)initWithConroller:(id)arg1;
- (_Bool)sendMessage:(int)arg1 withData:(id)arg2 forIDSDeviceIDs:(id)arg3 isResponse:(_Bool)arg4;
- (_Bool)sendMessage:(int)arg1 withData:(id)arg2 forIDSDeviceIDs:(id)arg3 localIDSDeviceIDs:(id)arg4 isResponse:(_Bool)arg5;
- (_Bool)sendMessage:(int)arg1 withData:(id)arg2 forDevices:(id)arg3 isResponse:(_Bool)arg4;
- (_Bool)sendMessage:(int)arg1 withData:(id)arg2 forIDSDeviceID:(id)arg3 isResponse:(_Bool)arg4;
- (void)incomingDeviceReceived:(id)arg1;

@end
