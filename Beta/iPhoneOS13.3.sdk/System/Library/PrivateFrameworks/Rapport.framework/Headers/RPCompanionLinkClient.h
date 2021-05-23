/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableOrderedSet, NSString, NSXPCConnection, RPCompanionLinkDevice;

@protocol OS_dispatch_queue;

@interface RPCompanionLinkClient : NSObject

{
    _Bool _activateCalled;
    struct NSMutableSet *_assertions;
    struct NSMutableDictionary *_deviceDictionary;
    struct NSMutableDictionary *_eventRegistrations;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSMutableOrderedSet *_registeredProfileIDs;
    struct NSMutableDictionary *_requestRegistrations;
    NSXPCConnection *_xpcCnx;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    int _passwordType;
    int _passwordTypeActual;
    unsigned int _flags;
    unsigned int _clientID;
    unsigned int _internalAuthFlags;
    NSString *_password;
    CDUnknownBlockType _authCompletionHandler;
    CDUnknownBlockType _showPasswordHandler;
    CDUnknownBlockType _hidePasswordHandler;
    CDUnknownBlockType _promptForPasswordHandler;
    NSString *_appID;
    NSString *_cloudServiceID;
    unsigned long long _controlFlags;
    RPCompanionLinkDevice *_destinationDevice;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_serviceType;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    RPCompanionLinkDevice *_localDevice;
    CDUnknownBlockType _localDeviceUpdatedHandler;
    NSDictionary *_siriInfo;
}

@property (nonatomic) unsigned int clientID;
@property (nonatomic, readonly) unsigned int internalAuthFlags;
@property (retain) RPCompanionLinkDevice *localDevice;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *cloudServiceID;
@property (nonatomic) unsigned long long controlFlags;
@property (retain, nonatomic) RPCompanionLinkDevice *destinationDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, readonly) NSArray *activeDevices;
@property (readonly) RPCompanionLinkDevice *activePersonalCompanion;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType localDeviceUpdatedHandler;
@property (copy, nonatomic) NSDictionary *siriInfo;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (nonatomic, readonly) int passwordTypeActual;
@property (copy, nonatomic) CDUnknownBlockType authCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType showPasswordHandler;
@property (copy, nonatomic) CDUnknownBlockType hidePasswordHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPasswordHandler;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerProfileID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)_invalidated;
- (void)_interrupted;
- (void)_lostAllDevices;
- (void)_ensureXPCStarted;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (void)deregisterRequestID:(id)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;
- (void)companionLinkPromptForPasswordType:(int)arg1 flags:(unsigned int)arg2 throttleSeconds:(int)arg3;
- (void)companionLinkAuthCompleted:(id)arg1;
- (void)companionLinkFoundDevice:(id)arg1;
- (void)companionLinkLostDevice:(id)arg1;
- (void)companionLinkChangedDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)companionLinkLocalDeviceUpdated:(id)arg1;
- (void)companionLinkReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)companionLinkReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_reregisterAssertions;
- (void)_reregisterEvents;
- (void)_reregisterRequests;
- (void)_reregisterProfileIDs;
- (void)_registerEventID:(id)arg1 options:(id)arg2 reregister:(_Bool)arg3;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_registerRequestID:(id)arg1 options:(id)arg2 reregister:(_Bool)arg3;
- (void)_registerProfileID:(id)arg1 reregister:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tryPassword:(id)arg1;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)deregisterEventID:(id)arg1;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (id)activateAssertionID:(id)arg1 destinationID:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_invalidateAssertion:(id)arg1;
- (_Bool)shouldReportDevice:(id)arg1;
- (void)launchAppWithBundleID:(id)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)launchAppWithURL:(id)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deregisterProfileID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
