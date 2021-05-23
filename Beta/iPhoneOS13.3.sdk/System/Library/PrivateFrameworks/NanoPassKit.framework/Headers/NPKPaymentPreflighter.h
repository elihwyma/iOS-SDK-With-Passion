/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPKCompanionAgentConnection, NSDate, NSSManager, PKPaymentWebService, PUConnection;

@interface NPKPaymentPreflighter : NSObject

{
    _Bool _checkedWatchPasscodeAndUnlockedStatus;
    _Bool _checkedCompanioniCloudStatus;
    _Bool _checkedWatchiCloudStatus;
    _Bool _checkedWristDetectionStatus;
    _Bool _authRandomSetIfNecessary;
    _Bool _watchConnected;
    _Bool _spaceAvailableOnSecureElement;
    _Bool _needsPasscode;
    _Bool _needsUnlock;
    _Bool _needsCompanioniCloudAccount;
    _Bool _needsWatchiCloudAccount;
    _Bool _needsWristDetection;
    _Bool _preflighting;
    PUConnection *_passcodeConnection;
    NSSManager *_systemSettingsManager;
    CDUnknownBlockType _preflightCompletionHandler;
    PKPaymentWebService *_webService;
    NPKCompanionAgentConnection *_companionAgentConnection;
    NSDate *_watchPasscodeAndUnlockedQueryDate;
}

@property (retain, nonatomic) PUConnection *passcodeConnection;
@property (retain, nonatomic) NSSManager *systemSettingsManager;
@property (nonatomic) _Bool checkedWatchPasscodeAndUnlockedStatus;
@property (nonatomic) _Bool checkedCompanioniCloudStatus;
@property (nonatomic) _Bool checkedWatchiCloudStatus;
@property (nonatomic) _Bool checkedWristDetectionStatus;
@property (nonatomic) _Bool authRandomSetIfNecessary;
@property (nonatomic) _Bool watchConnected;
@property (nonatomic) _Bool spaceAvailableOnSecureElement;
@property (nonatomic) _Bool needsPasscode;
@property (nonatomic) _Bool needsUnlock;
@property (nonatomic) _Bool needsCompanioniCloudAccount;
@property (nonatomic) _Bool needsWatchiCloudAccount;
@property (nonatomic) _Bool needsWristDetection;
@property (copy, nonatomic) CDUnknownBlockType preflightCompletionHandler;
@property (retain, nonatomic) PKPaymentWebService *webService;
@property (retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection;
@property (nonatomic, getter=isPreflighting) _Bool preflighting;
@property (retain, nonatomic) NSDate *watchPasscodeAndUnlockedQueryDate;

+ (_Bool)watchConnected;

- (void)_checkSpaceAvailableOnSecureElement;
- (void)_checkWatchConnected;
- (void)_checkCompanioniCloudAccount;
- (void)_checkWatchiCloudAccount;
- (void)_checkPasscodeEnabledAndUnlockedState;
- (void)_checkWristDetectEnabledState;
- (void)_finishPresentingSetupControllerIfReadyWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)_errorForConnectionIssue;
- (id)_errorForCompanionAccountNeeded;
- (_Bool)_currentlyPairing;
- (void)_setAuthRandomIfNecessary;
- (id)_errorForGenericIssue;
- (id)_errorForWristDetectNeeded;
- (id)_errorForGizmoAccountNeeded;
- (id)_errorForPasscodeNeeded;
- (id)_errorForUnlockNeeded;
- (id)initWithWebService:(id)arg1 companionAgentConnection:(id)arg2;
- (void)addCardPreflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)transferToCompanionPreflightWithCompletion:(CDUnknownBlockType)arg1;

@end
