/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPhotoPickerVariantListController.h>

@class OBBoldTrayButton, OBButtonTray, OBHeaderView, OBLinkTrayButton, OBNavigationBarDisplayState, UINavigationController;

@protocol CNSharingProfileOnboardingVariantViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNSharingProfileOnboardingVariantViewController : CNPhotoPickerVariantListController

{
    _Bool _shouldShowPoseButton;
    id <CNSharingProfileOnboardingVariantViewControllerDelegate> _onboardingDelegate;
    OBHeaderView *_onboardingHeaderView;
    OBButtonTray *_buttonTray;
    OBBoldTrayButton *_continueButton;
    OBLinkTrayButton *_poseButton;
    UINavigationController *_retainedNavigationController;
    OBNavigationBarDisplayState *_cachedBarState;
}

@property (retain, nonatomic) OBHeaderView *onboardingHeaderView;
@property (retain, nonatomic) OBButtonTray *buttonTray;
@property (retain, nonatomic) OBBoldTrayButton *continueButton;
@property (retain, nonatomic) OBLinkTrayButton *poseButton;
@property (retain, nonatomic) UINavigationController *retainedNavigationController;
@property (retain, nonatomic) OBNavigationBarDisplayState *cachedBarState;
@property (weak, nonatomic) id <CNSharingProfileOnboardingVariantViewControllerDelegate> onboardingDelegate;
@property (nonatomic) _Bool shouldShowPoseButton;

+ (_Bool)_navigationBarTitleShouldShowForHeaderView:(id)arg1 inScrollView:(id)arg2;
+ (void)updateNavigationBarWithNavigationItem:(id)arg1 forHeaderView:(id)arg2 inScrollView:(id)arg3 animated:(_Bool)arg4;

- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)navigationItem;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (void)restoreNavigationBarAppearance;
- (void)applyAutomaticScrollToEdgeBehaviorToNavigationItem:(id)arg1 withDistance:(double)arg2;
- (void)updateContentInsets:(struct UIEdgeInsets)arg1;
- (void)didTapContinue:(id)arg1;
- (void)didTapPose:(id)arg1;
- (void)updateTrayBackgroundForScrollView:(id)arg1;
- (_Bool)_scrollViewContentIsUnderTrayForScrollView:(id)arg1;

@end
