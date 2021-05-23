/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNAvatarEditingManager, CNContact, CNPhotoPickerProviderItem, CNPhotoPickerVariantsManager, CNSharingProfileAvatarItemProviderConfiguration, CNSharingProfileLogger, CNSharingProfileOnboardingAudienceViewController, CNSharingProfileOnboardingPhotoSelectionResult, CNSharingProfileOnboardingPhotoSelectionViewController, CNSharingProfileOnboardingVariantViewController, NSString, UINavigationController;

@protocol AVTAvatarRecord, CNSharingProfileOnboardingFlowManagerDelegate;

@interface CNSharingProfileOnboardingFlowManager : NSObject

{
    _Bool _isRunningFlow;
    _Bool _didPersistToMeCard;
    id <CNSharingProfileOnboardingFlowManagerDelegate> _delegate;
    UINavigationController *_navigationController;
    CNContact *_contact;
    id <AVTAvatarRecord> _avatarRecord;
    CNSharingProfileAvatarItemProviderConfiguration *_avatarItemProviderConfiguration;
    CNSharingProfileOnboardingPhotoSelectionViewController *_photoSelectionController;
    CNSharingProfileOnboardingVariantViewController *_variantController;
    CNSharingProfileOnboardingAudienceViewController *_audienceViewController;
    CNSharingProfileOnboardingPhotoSelectionResult *_photoSelectionResult;
    CNPhotoPickerVariantsManager *_variantsManager;
    CNPhotoPickerProviderItem *_selectedVariantItem;
    CNAvatarEditingManager *_avatarEditingManager;
    CNSharingProfileLogger *_logger;
}

@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) id <AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration;
@property (nonatomic) _Bool isRunningFlow;
@property (nonatomic) _Bool didPersistToMeCard;
@property (retain, nonatomic) CNSharingProfileOnboardingPhotoSelectionViewController *photoSelectionController;
@property (retain, nonatomic) CNSharingProfileOnboardingVariantViewController *variantController;
@property (retain, nonatomic) CNSharingProfileOnboardingAudienceViewController *audienceViewController;
@property (retain, nonatomic) CNSharingProfileOnboardingPhotoSelectionResult *photoSelectionResult;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) CNPhotoPickerProviderItem *selectedVariantItem;
@property (retain, nonatomic) CNAvatarEditingManager *avatarEditingManager;
@property (retain, nonatomic) CNSharingProfileLogger *logger;
@property (weak, nonatomic) id <CNSharingProfileOnboardingFlowManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2;
- (void)photoPickerVariantListControllerDidCancel:(id)arg1;
- (void)avatarPosePickerManager:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)onboardingVariantControllerDidTapContinue:(id)arg1;
- (void)onboardingVariantControllerDidTapPose:(id)arg1;
- (void)audienceViewController:(id)arg1 didFinishWithContact:(id)arg2 sharingAudience:(unsigned long long)arg3;
- (void)photoSelectionViewControllerDidFinishWithResult:(id)arg1;
- (id)initWithNavigationController:(id)arg1 contact:(id)arg2 avatarRecord:(id)arg3 avatarItemProviderConfiguration:(id)arg4;
- (id)initWithNavigationController:(id)arg1 contact:(id)arg2 avatarRecord:(id)arg3 avatarItemProviderConfiguration:(id)arg4 logger:(id)arg5;
- (void)startFlow;
- (id)prepareVariantsControllerForResult:(id)arg1;
- (id)providerItemForPhotoResult:(id)arg1;
- (void)presentMeCardPersistanceAlertWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)imageTypeForAvatarType:(long long)arg1;
- (void)saveCurrentInfoToMeCard;
- (void)presentNameAndAudienceControllerForContact:(id)arg1;
- (void)presentAnimojiPoseCapture;

@end
