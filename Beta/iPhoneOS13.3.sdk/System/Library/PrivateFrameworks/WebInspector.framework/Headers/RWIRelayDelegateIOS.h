/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, RWIRelay;

@protocol BSInvalidatable;

@interface RWIRelayDelegateIOS : NSObject

{
    RWIRelay *_relay;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    id <BSInvalidatable> _idleTimerAssertion;
}

- (void)relayInitialize:(id)arg1;
- (void)relay:(id)arg1 activateApplicationWithBundleIdentifier:(id)arg2;
- (void)relayClientConnectionDidChange:(id)arg1;
- (_Bool)relay:(id)arg1 allowIncomingApplicationViaProxy:(CDStruct_6ad76789)arg2 pid:(int)arg3;
- (void)relay:(id)arg1 applicationUpdated:(id)arg2;
- (void)relay:(id)arg1 applicationConnected:(id)arg2;
- (void)relay:(id)arg1 applicationDisconnected:(id)arg2;
- (_Bool)relay:(id)arg1 allowIncomingApplicationConnection:(id)arg2 bundleIdentifier:(id)arg3;
- (id)relay:(id)arg1 applicationInfoForIncomingConnection:(id)arg2 bundleIdentifier:(id)arg3;
- (void)relay:(id)arg1 unhandledApplicationXPCMessage:(id)arg2;
- (void)_createApplicationStateMonitorIfNeeded;
- (void)_backBoardApplicationStateChanged:(id)arg1;
- (void)_updateDeviceIdlePrevention;
- (void)_startPreventingDeviceFromIdling;
- (void)_stopPreventingDeviceFromIdling;
- (id)relaySetupResponseForClientConnection:(id)arg1;

@end
