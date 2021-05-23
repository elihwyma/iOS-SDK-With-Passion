/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUAccessorySceneListContentViewController, HUAccessorySceneListItemManager;

@interface HUAccessorySceneListViewController : HUItemTableViewController

{
    HUAccessorySceneListContentViewController *_existingSceneListContentViewController;
    HUAccessorySceneListContentViewController *_suggestedSceneListContentViewController;
}

@property (retain, nonatomic) HUAccessorySceneListContentViewController *existingSceneListContentViewController;
@property (retain, nonatomic) HUAccessorySceneListContentViewController *suggestedSceneListContentViewController;
@property (nonatomic, readonly) HUAccessorySceneListItemManager *itemManager;

- (void)viewDidLoad;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (id)initWithServiceLikeItem:(id)arg1;
- (id)childViewControllersToPreload;

@end
