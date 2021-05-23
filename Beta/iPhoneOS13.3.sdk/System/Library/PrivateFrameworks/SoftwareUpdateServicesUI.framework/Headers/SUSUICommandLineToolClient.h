/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol SUSUICommandLineToolClientDelegate;

@interface SUSUICommandLineToolClient : NSObject

{
    NSXPCConnection *_serverConnection;
    id <SUSUICommandLineToolClientDelegate> _delegate;
    _Bool _connected;
    _Bool _serverIsExiting;
}

@property (weak, nonatomic) id <SUSUICommandLineToolClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)_remoteInterface;
- (id)initWithDelegate:(id)arg1;
- (void)setPasscodePolicy:(unsigned long long)arg1;
- (void)_invalidateConnection;
- (id)_remoteInterfaceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_connectToServerIfNecessary;
- (void)_noteConnectionDropped;
- (void)showMiniAlert:(unsigned long long)arg1 usingFakeData:(_Bool)arg2 errorCode:(id)arg3;
- (void)showFollowUp:(unsigned long long)arg1;
- (void)showAuthenticationUIWithOptions:(unsigned long long)arg1 result:(CDUnknownBlockType)arg2;
- (void)showEmergencyCallUIWithOptions:(unsigned long long)arg1 result:(CDUnknownBlockType)arg2;
- (void)toggleSettingsBadge:(_Bool)arg1;
- (void)reboot:(_Bool)arg1;
- (void)simulateComingFromOTAUpdate;
- (void)downloadDidFinish;
- (void)_noteServerExiting;

@end
