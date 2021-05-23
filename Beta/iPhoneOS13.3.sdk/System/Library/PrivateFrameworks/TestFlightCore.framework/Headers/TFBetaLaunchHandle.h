/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class BSProcessHandle, NSString;

@protocol TFBetaLaunchHandleActivationDelegate;

@interface TFBetaLaunchHandle : NSObject

{
    id <TFBetaLaunchHandleActivationDelegate> _activationDelegate;
    BSProcessHandle *_processHandle;
    NSString *_logKey;
}

@property (nonatomic, readonly) BSProcessHandle *processHandle;
@property (copy, nonatomic, readonly) NSString *logKey;
@property (weak, nonatomic) id <TFBetaLaunchHandleActivationDelegate> activationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)activateIfNeeded;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (_Bool)_remoteAlertShouldActivateForLaunchInfo:(id)arg1;
- (void)_activateRemoteAlertWithLaunchInfo:(id)arg1;
- (void)_updatedLaunchInfoForActivation:(id)arg1;
- (id)initWithProcessHandle:(id)arg1;
- (void)activateForTestingWithLaunchInfo:(id)arg1;

@end
