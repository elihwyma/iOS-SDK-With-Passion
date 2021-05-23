/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UINavigationController.h>

@protocol UIFocusItem;

@interface CPSOverlayViewController : UINavigationController

{
    _Bool usePreferredItemOnNextUpdate;
    id <UIFocusItem> preferredFocusItem;
}

@property (weak, nonatomic) id <UIFocusItem> preferredFocusItem;
@property (nonatomic) _Bool usePreferredItemOnNextUpdate;

- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (id)_linearFocusMovementSequences;
- (void)viewDidLoad;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)templates;
- (void)popToRootTemplateAnimated:(_Bool)arg1;
- (void)popToTemplate:(id)arg1 animated:(_Bool)arg2;
- (void)dismissTemplateAnimated:(_Bool)arg1;
- (id)topTemplate;
- (unsigned long long)indexOfTemplate:(id)arg1;
- (id)viewControllerForTemplate:(id)arg1;
- (void)pushTemplateViewController:(id)arg1 animated:(_Bool)arg2 presentationStyle:(unsigned long long)arg3;
- (void)presentTemplateViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentActionSheetTemplate:(id)arg1 animated:(_Bool)arg2;
- (id)presentedTemplateViewController;

@end
