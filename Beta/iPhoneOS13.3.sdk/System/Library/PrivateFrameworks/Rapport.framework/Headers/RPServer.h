/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface RPServer : NSObject

{
    _Bool _activateCalled;
    _Bool _changesPending;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    int _passwordType;
    int _passwordTypeActual;
    unsigned int _internalAuthFlags;
    NSString *_password;
    CDUnknownBlockType _authCompletionHandler;
    CDUnknownBlockType _showPasswordHandler;
    CDUnknownBlockType _hidePasswordHandler;
    CDUnknownBlockType _promptForPasswordHandler;
    CDUnknownBlockType _acceptHandler;
    unsigned long long _controlFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_serviceType;
}

@property (nonatomic, readonly) unsigned int internalAuthFlags;
@property (copy, nonatomic) CDUnknownBlockType acceptHandler;
@property (nonatomic) unsigned long long controlFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
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
- (void)_update;
- (void)_invalidated;
- (void)_interrupted;
- (void)activate;
- (void)_updateIfNeededWithBlock:(CDUnknownBlockType)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (void)_ensureXPCStarted;
- (void)xpcServerAcceptSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)xpcServerShowPassword:(id)arg1 flags:(unsigned int)arg2;
- (void)xpcServerHidePassword:(unsigned int)arg1;
- (void)tryPassword:(id)arg1;
- (void)_activateWithReactivate:(_Bool)arg1;

@end
