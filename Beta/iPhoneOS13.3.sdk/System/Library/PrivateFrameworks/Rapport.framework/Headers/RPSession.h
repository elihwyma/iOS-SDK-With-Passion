/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, RPConnection, RPEndpoint;

@protocol OS_dispatch_queue;

@interface RPSession : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    int _passwordType;
    int _passwordTypeActual;
    NSString *_password;
    CDUnknownBlockType _authCompletionHandler;
    CDUnknownBlockType _showPasswordHandler;
    CDUnknownBlockType _hidePasswordHandler;
    CDUnknownBlockType _promptForPasswordHandler;
    unsigned long long _controlFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    RPEndpoint *_peerEndpoint;
    NSString *_serviceType;
    RPConnection *_cnx;
    NSString *_peerID;
    unsigned long long _sessionID;
    unsigned long long _startTicks;
}

@property (retain, nonatomic) RPConnection *cnx;
@property (copy, nonatomic) NSString *peerID;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) unsigned long long startTicks;
@property (nonatomic) unsigned long long controlFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) RPEndpoint *peerEndpoint;
@property (retain, nonatomic) NSString *serviceType;
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
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)_invalidated;
- (void)_interrupted;
- (id)descriptionWithLevel:(int)arg1;
- (void)_ensureXPCStarted;
- (void)deregisterRequestID:(id)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)tryPassword:(id)arg1;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)deregisterEventID:(id)arg1;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;

@end
