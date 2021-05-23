/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CUSystemMonitor, NSArray, NSData, NSString, NSURL, SFDeviceDiscovery, SFService, SFSession;

@protocol OS_dispatch_queue;

@interface SFRemoteAutoFillService : NSObject

{
    _Bool _activateCalled;
    CDUnknownBlockType _activateCompletion;
    SFDeviceDiscovery *_discovery;
    int _discoveryState;
    struct NSMutableDictionary *_devices;
    _Bool _invalidateCalled;
    NSString *_receivedPassword;
    NSString *_receivedUsername;
    _Bool _requestingAutoFill;
    SFService *_service;
    int _serviceState;
    SFSession *_session;
    NSData *_systemBTAddress;
    CUSystemMonitor *_systemMonitor;
    int _systemMonitorState;
    NSURL *_urlForVisualScanning;
    _Bool _unitTesting;
    NSArray *_associatedDomains;
    NSString *_bundleID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_fixedPIN;
    NSString *_localizedAppName;
    NSString *_unlocalizedAppName;
    NSString *_urlString;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _hidePINHandler;
    CDUnknownBlockType _receivedCredentialsHandler;
    CDUnknownBlockType _sessionStartedHandler;
    CDUnknownBlockType _sessionEndedHandler;
    CDUnknownBlockType _showPINHandlerEx;
    CDUnknownBlockType _discoveredDevicesChanged;
    CDUnknownBlockType _urlForVisualScanningChanged;
}

@property (nonatomic, readonly) _Bool needsSetup;
@property (nonatomic) _Bool unitTesting;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *fixedPIN;
@property (copy, nonatomic) NSString *localizedAppName;
@property (copy, nonatomic) NSString *unlocalizedAppName;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType hidePINHandler;
@property (copy, nonatomic) CDUnknownBlockType receivedCredentialsHandler;
@property (copy, nonatomic) CDUnknownBlockType sessionStartedHandler;
@property (copy, nonatomic) CDUnknownBlockType sessionEndedHandler;
@property (copy, nonatomic) CDUnknownBlockType showPINHandlerEx;
@property (nonatomic, readonly) unsigned long long discoveredDevices;
@property (copy, nonatomic) CDUnknownBlockType discoveredDevicesChanged;
@property (copy, nonatomic) CDUnknownBlockType urlForVisualScanningChanged;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)_activated;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_systemMonitorStart;
- (void)_serviceStart;
- (void)_discoveryStart;
- (int)_readyForAutoFillRequest;
- (void)updateURLForVisualScanning;
- (void)_discoveryFound:(id)arg1;
- (void)_discoveryLost:(id)arg1;
- (void)_discoveryChanged:(id)arg1;
- (void)_completedWithError:(id)arg1;
- (void)_serviceHidePIN;
- (void)_serviceHandleReceivedRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_serviceSessionStarted:(id)arg1;
- (void)_serviceSessionEnded:(id)arg1 withError:(id)arg2;
- (void)_serviceHandleReceivedContextRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_serviceHandleReceivedCredentialRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_bluetoothAddressChanged;
- (void)startRequestingAutoFill;
- (void)stopRequestingAutoFill;
- (id)urlForVisualScanning;

@end
