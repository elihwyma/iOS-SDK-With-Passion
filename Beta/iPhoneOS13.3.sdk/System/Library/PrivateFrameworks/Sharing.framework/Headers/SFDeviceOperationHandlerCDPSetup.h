/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CDPContext, CDPStateController, NSString, SFSession;

@protocol OS_dispatch_queue;

@interface SFDeviceOperationHandlerCDPSetup : NSObject

{
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    _Bool _invalidateCalled;
    CDUnknownBlockType _responseHandler;
    _Bool _failIfCDPNotEnabled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFSession *_sfSession;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) _Bool failIfCDPNotEnabled;
@property (retain, nonatomic) SFSession *sfSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)activate;
- (void)_handleCDPSetupRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(_Bool)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(_Bool)arg2 numericLength:(id)arg3 isRandom:(_Bool)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(CDUnknownBlockType)arg2;

@end
