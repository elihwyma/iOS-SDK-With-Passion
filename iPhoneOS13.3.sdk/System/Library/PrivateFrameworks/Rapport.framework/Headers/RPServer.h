//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/RPAuthenticatable-Protocol.h>
#import <Rapport/RPCompanionLinkXPCClientInterface-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPServer : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable>
{
    BOOL _activateCalled;
    BOOL _changesPending;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory _ucat;
    NSXPCConnection *_xpcCnx;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    int _passwordType;
    int _passwordTypeActual;
    unsigned int _internalAuthFlags;
    NSString *_password;
    id /* CDUnknownBlockType */ _authCompletionHandler;
    id /* CDUnknownBlockType */ _showPasswordHandler;
    id /* CDUnknownBlockType */ _hidePasswordHandler;
    id /* CDUnknownBlockType */ _promptForPasswordHandler;
    id /* CDUnknownBlockType */ _acceptHandler;
    NSUInteger _controlFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _errorHandler;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSString *_label;
    NSString *_serviceType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int internalAuthFlags; // @synthesize internalAuthFlags=_internalAuthFlags;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) NSUInteger controlFlags; // @synthesize controlFlags=_controlFlags;
@property(copy, nonatomic) id /* CDUnknownBlockType */ acceptHandler; // @synthesize acceptHandler=_acceptHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForPasswordHandler; // @synthesize promptForPasswordHandler=_promptForPasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ hidePasswordHandler; // @synthesize hidePasswordHandler=_hidePasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ showPasswordHandler; // @synthesize showPasswordHandler=_showPasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ authCompletionHandler; // @synthesize authCompletionHandler=_authCompletionHandler;
@property(readonly, nonatomic) int passwordTypeActual; // @synthesize passwordTypeActual=_passwordTypeActual;
@property(nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) unsigned int pairVerifyFlags; // @synthesize pairVerifyFlags=_pairVerifyFlags;
@property(nonatomic) unsigned int pairSetupFlags; // @synthesize pairSetupFlags=_pairSetupFlags;
// - (void).cxx_destruct;
- (void)xpcServerHidePassword:(unsigned int)arg1;
- (void)xpcServerShowPassword:(id)arg1 flags:(unsigned int)arg2;
- (void)xpcServerAcceptSession:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_update;
- (void)_updateIfNeededWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)tryPassword:(id)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateWithReactivate:(BOOL)arg1;
- (void)activate;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

