/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface SUSUIControllerClient : NSObject

{
    NSXPCConnection *_serverConnection;
    _Bool _connected;
    _Bool _serverIsExiting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)_remoteInterface;
- (void)_invalidateConnection;
- (id)_remoteInterfaceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_connectToServerIfNecessary;
- (void)_noteConnectionDropped;
- (_Bool)createKeybagWithSecret:(id)arg1;
- (void)_noteServerExiting;

@end
