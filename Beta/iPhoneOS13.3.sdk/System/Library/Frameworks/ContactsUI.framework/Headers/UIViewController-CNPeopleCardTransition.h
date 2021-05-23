/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (CNPeopleCardTransition)

@property (nonatomic, readonly) _Bool ab_shouldShowNavBarButtons;
@property (nonatomic, readonly) _Bool ab_shouldUseTransparentBackgroundInPopovers;
@property (nonatomic, readonly) _Bool ab_isInPopover;
@property (nonatomic, readonly) _Bool ab_isDirectlyInPopover;
@property (nonatomic, readonly) _Bool ab_isInSheet;

- (id)_cardViewControllerTransitioning;
- (void)set_cardViewControllerTransitioning:(id)arg1;
- (_Bool)_ab_isInPopoverRecursive:(_Bool)arg1;
- (void)cnui_addChildViewController:(id)arg1;
- (id)cnui_appropriatePresentationController;

@end
