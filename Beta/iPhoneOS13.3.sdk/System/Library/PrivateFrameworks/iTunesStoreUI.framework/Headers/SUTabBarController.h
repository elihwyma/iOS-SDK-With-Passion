/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UITabBarController.h>

@class NSArray, NSMutableArray, NSString, SUClientInterface, SUNavigationBarBackgroundView, SUPreviewOverlayViewController, SUViewController, UIImage, UIViewController;

@protocol SUTabBarControllerDelegate;

@interface SUTabBarController : UITabBarController

{
    SUClientInterface *_clientInterface;
    NSString *_moreListTitle;
    NSMutableArray *_overlayBackgroundViewControllers;
    UIViewController *_preTransientSelectedViewController;
    long long _reloadingUnderneathTransientControllerCount;
    NSArray *_sections;
    _Bool _ignoreTabReselection;
    UIImage *_moreListSelectedImage;
    UIImage *_moreListUnselectedImage;
    SUViewController *_preloadedViewController;
    NSString *_preloadedViewControllerIdentifier;
    NSString *_preloadedViewControllerKey;
    SUPreviewOverlayViewController *_previewOverlayViewController;
    long long _storeBarStyle;
    SUNavigationBarBackgroundView *_tabBarBackdropView;
}

@property (nonatomic, readonly, getter=_previewOverlayViewController) SUPreviewOverlayViewController *_previewOverlayViewController;
@property (nonatomic, readonly) SUClientInterface *clientInterface;
@property (nonatomic) id <SUTabBarControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSString *selectedIdentifier;
@property (retain, nonatomic) NSString *moreListTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)_moreNavigationControllerClass;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(_Bool)arg3;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(_Bool)arg3;
- (void)tabBar:(id)arg1 willShowCustomizationSheet:(id)arg2 withNavigationBar:(id)arg3;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)selectedViewController;
- (void)setTransientViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_setSelectedViewController:(id)arg1;
- (id)rotatingHeaderView;
- (id)rotatingFooterView;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (_Bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (id)_sectionForIdentifier:(id)arg1;
- (void)_longPressAction:(id)arg1;
- (void)cancelTransientViewController:(id)arg1;
- (id)initWithClientInterface:(id)arg1;
- (void)_applicationDidChangeStatusBarFrame:(id)arg1;
- (void)_partnerChanged:(id)arg1;
- (id)_viewControllerForContext:(id)arg1;
- (id)_rootViewControllerForSection:(id)arg1;
- (_Bool)loadFromDefaults;
- (void)setSectionOrdering:(id)arg1;
- (void)_restoreArchivedContexts:(id)arg1;
- (void)_restoreOverlayContexts:(id)arg1;
- (void)_restoreArchivedTransientContexts:(id)arg1;
- (void)_moveTransientViewController:(id)arg1 toSectionWithIdentifier:(id)arg2 asRoot:(_Bool)arg3;
- (void)_reloadViewControllersFromSections:(id)arg1 animated:(_Bool)arg2;
- (void)resetUserDefaults;
- (void)selectDefaultSection;
- (_Bool)saveOrderingToDefaults;
- (_Bool)_saveNavigationPathToDefaults;
- (_Bool)_saveTransientNavigationPathToDefaults;
- (void)_applyMoreListConfiguration;
- (id)overlayBackgroundViewController;
- (_Bool)_isReloadingUnderneathTransientViewController;
- (long long)ITunesStoreUIBarStyle;
- (void)_setStoreBarStyle:(long long)arg1;
- (void)_fixupViewControllers;
- (void)_moveView:(id)arg1 toView:(id)arg2;
- (void)_transitionSafeHandlePartnerChange:(id)arg1;
- (id)viewControllerForSectionIdentifier:(id)arg1;
- (_Bool)presentOverlayBackgroundViewController:(id)arg1;
- (id)_archivedContextsForViewController:(id)arg1;
- (void)_beginReloadingUnderneathTransientViewController;
- (void)_endReloadingUnderneathTransientViewController;
- (void)scriptOverlayBackgroundDidDismiss:(id)arg1;
- (_Bool)loadFromDefaultsAndSetSections:(id)arg1;
- (void)pushTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2;
- (void)reloadSectionVisibilityAnimated:(_Bool)arg1;
- (void)reloadSectionWithIdentifier:(id)arg1 URL:(id)arg2;
- (void)resetToSystemDefaults;
- (_Bool)saveToDefaults;
- (void)selectSectionOfType:(long long)arg1;
- (void)setMoreListSelectedImage:(id)arg1 unselectedImage:(id)arg2;
- (void)setTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2;
- (id)_sectionForViewController:(id)arg1;
- (void)dismissOverlayBackgroundViewController;
- (unsigned long long)indexOfViewControllerWithSectionType:(long long)arg1;
- (id)viewControllerForSectionType:(long long)arg1;
- (void)_hidePreviewOverlayAnimated:(_Bool)arg1;
- (void)_showPreviewOverlay:(id)arg1 animated:(_Bool)arg2;
- (void)_fixupTabBarSelection;
- (id)_sectionForType:(long long)arg1;

@end
