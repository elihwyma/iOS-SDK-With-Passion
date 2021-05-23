/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class AAUIGenericTermsRemoteUI, NSArray, NSString, PSCloudStorageOffersManager;

@interface PXCloudPhotoWelcomeViewController : OBWelcomeController

{
    _Bool __requireStorageUpgrade;
    _Bool __enableOnAppear;
    NSArray *__buttons;
    PSCloudStorageOffersManager *__offersManager;
    AAUIGenericTermsRemoteUI *__termsManager;
}

@property (retain, nonatomic, setter=_setButtons:) NSArray *_buttons;
@property (retain, nonatomic, setter=_setOffersManager:) PSCloudStorageOffersManager *_offersManager;
@property (retain, nonatomic, setter=_setTermsManager:) AAUIGenericTermsRemoteUI *_termsManager;
@property (nonatomic, setter=_setRequireStorageUpgrade:) _Bool _requireStorageUpgrade;
@property (nonatomic, setter=_setEnableOnAppear:) _Bool _enableOnAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)navigationControllerDidDismissViewController:(id)arg1;
- (id)initWithDefaultTitle;
- (void)_updateCurrentActivity;
- (void)_continueWithoutStoragePurchase:(id)arg1;
- (void)_cloudPhotoWelcomeViewGoButtonTapped:(id)arg1;
- (void)_cloudPhotoWelcomeViewNotNowButtonTapped:(id)arg1;
- (void)_cloudPhotoWelcomeViewLearnMoreTapped:(id)arg1;
- (void)_enableCloudPhotoLibrary;
- (void)_enableCloudPhotoLibraryWithoutCheck;
- (void)_handleEnableError:(id)arg1;
- (void)_setButtonsEnabled:(_Bool)arg1;

@end
