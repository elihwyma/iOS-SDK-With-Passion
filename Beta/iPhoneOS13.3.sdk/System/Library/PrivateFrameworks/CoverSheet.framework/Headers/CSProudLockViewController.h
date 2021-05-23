/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <CoverSheet/Swift-Protocol.h>

@class CSLockScreenPearlSettings, NSString, SBUIProudLockContainerViewController, UIView;

@protocol BSInvalidatable, SBFAuthenticationStatusProvider, SBUIBiometricResource;

@interface CSProudLockViewController : CSCoverSheetViewControllerBase <Swift>

{
    CSLockScreenPearlSettings *_pearlSettings;
    id <BSInvalidatable> _faceDetectWantedAssertion;
    long long _deferredAuthenticationState;
    _Bool _suspendLockUpdates;
    SBUIProudLockContainerViewController *_proudLockContainerViewController;
    id <SBUIBiometricResource> _biometricResource;
    id <SBFAuthenticationStatusProvider> _authenticationStatusProvider;
}

@property (retain, nonatomic) SBUIProudLockContainerViewController *proudLockContainerViewController;
@property (retain, nonatomic) id <SBUIBiometricResource> biometricResource;
@property (retain, nonatomic) id <SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (nonatomic) _Bool suspendLockUpdates;
@property (nonatomic, readonly) UIView *proudLockView;
@property (nonatomic, readonly) UIView *cameraCoveredView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasPasscodeSet;
@property (nonatomic, readonly) _Bool isBiometricLockedOut;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateLockForBiometricMatchFailure;
- (void)proudLockContainerViewController:(id)arg1 guidanceTextVisibilityDidChangeAnimated:(_Bool)arg2;
- (void)aggregateAppearance:(id)arg1;
- (void)_updateProudLockViewControllerConfiguration;
- (void)_createFaceDetectAssertion;
- (void)_clearFaceDetectAssertion;
- (void)_updateForAuthenticated:(_Bool)arg1;

@end
