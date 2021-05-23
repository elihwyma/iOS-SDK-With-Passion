/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUInstructionsItem, UIViewController;

@interface HUInstructionsTableViewController : HUItemTableViewController

{
    HUInstructionsItem *_instructionsItem;
    UIViewController *_contentViewController;
}

@property (nonatomic, readonly) HUInstructionsItem *instructionsItem;
@property (nonatomic, readonly) UIViewController *contentViewController;

- (void)viewDidLoad;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (id)childViewControllersToPreload;
- (id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2;
- (id)initWithItemManager:(id)arg1 instructionsItem:(id)arg2 contentViewController:(id)arg3;

@end
