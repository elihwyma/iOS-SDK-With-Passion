/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NPKCompanionAgentConnection, NSString, PKAccountCredential, PKPaymentProvisioningController;

@protocol OS_dispatch_source, PKAccountProvisioningControllerDelegate;

@interface PKAccountProvisioningController : NSObject

{
    NPKCompanionAgentConnection *_watchConnection;
    PKAccountCredential *_accountCredential;
    PKPaymentProvisioningController *_provisioningController;
    _Bool _makeDefaultInAMP;
    NSObject<OS_dispatch_source> *_activationTimer;
    _Bool _usingRemoteLibrary;
    _Bool _passIsActivated;
    _Bool _didAddToAMP;
    double _passActivationTimeout;
    id <PKAccountProvisioningControllerDelegate> _delegate;
    NSString *_provisionedPassUniqueID;
    unsigned long long _provisionLocalPassState;
    unsigned long long _localPassActivationState;
    unsigned long long _provisionWatchPassState;
    unsigned long long _addToIDMSState;
    unsigned long long _makeAccountPassDefaultOnLocalDeviceState;
    unsigned long long _addToAMPState;
}

@property (nonatomic) double passActivationTimeout;
@property (weak, nonatomic) id <PKAccountProvisioningControllerDelegate> delegate;
@property (copy, nonatomic) NSString *provisionedPassUniqueID;
@property (nonatomic) _Bool didAddToAMP;
@property (nonatomic, readonly) unsigned long long provisionLocalPassState;
@property (nonatomic, readonly) unsigned long long localPassActivationState;
@property (nonatomic, readonly) unsigned long long provisionWatchPassState;
@property (nonatomic, readonly) unsigned long long addToIDMSState;
@property (nonatomic, readonly) unsigned long long makeAccountPassDefaultOnLocalDeviceState;
@property (nonatomic, readonly) unsigned long long addToAMPState;

+ (_Bool)_isPaymentPassActivated:(id)arg1 forAccountCredential:(id)arg2;

- (void)dealloc;
- (id)initWithAccountCredential:(id)arg1 provisioningController:(id)arg2 usingRemoteLibrary:(_Bool)arg3;
- (void)_stopPassActivationObserver;
- (void)_startPassActivationObserver;
- (void)_informDelegateOfStateUpdate;
- (void)_processRemainingTasks;
- (void)_informDelegateOfError:(id)arg1;
- (void)_provisionAccountCredenital:(id)arg1 provisoningController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addToIDMS;
- (void)makeAccountPassDefaultOnLocalDevice;
- (void)addToAMPAsDefault:(_Bool)arg1;
- (id)_notificationDidChangeNames;
- (void)_passLibraryDidChange:(id)arg1;
- (void)_handlePassActiviated;
- (id)initWithAccountCredential:(id)arg1 provisioningController:(id)arg2 accountService:(id)arg3;
- (void)provisionAccountPassToLocalDevice;
- (void)provisionAccountPassToWatchAsDefault:(_Bool)arg1;

@end
