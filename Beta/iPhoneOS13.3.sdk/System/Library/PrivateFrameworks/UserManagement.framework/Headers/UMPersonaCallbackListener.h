/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface UMPersonaCallbackListener : NSObject

{
    NSString *_machServiceName;
    NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
    CDUnknownBlockType _personaUpdateCallbackHandler;
}

@property (retain, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) NSMutableSet *xpcConnections;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (copy, nonatomic) CDUnknownBlockType personaUpdateCallbackHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedServer;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)uploadContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)willSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)userSwitchTaskListDidUpdate;
- (void)deviceLoginSessionStateDidUpdate;
- (void)bubbleDidPop;
- (void)personaListDidUpdateCompletionHandler:(CDUnknownBlockType)arg1;
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1;
- (id)setupPersonaCallbackMachService:(id)arg1 callbackHandler:(CDUnknownBlockType)arg2;
- (void)_tearDownConnectionToUMServerWithConnection:(id)arg1;

@end
