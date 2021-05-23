/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUSoftwareUpdateItemModuleController, HUSoftwareUpdateStandaloneItemManager, NAFuture, NSString;

@interface HUSoftwareUpdateStandaloneViewController : HUItemTableViewController

{
    HUSoftwareUpdateItemModuleController *_softwareUpdateModule;
    NAFuture *_softwareUpdateFetchFuture;
}

@property (nonatomic, readonly) HUSoftwareUpdateStandaloneItemManager *itemManager;
@property (retain, nonatomic) HUSoftwareUpdateItemModuleController *softwareUpdateModule;
@property (retain, nonatomic) NAFuture *softwareUpdateFetchFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHome:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (id)itemModuleControllers;
- (id)softwareUpdateModuleController:(id)arg1 presentViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 navigateToViewController:(id)arg2;
- (void)_kickoffSoftwareUpdate;
- (void)_setupRefreshControl;
- (void)_triggerRefresh:(id)arg1;

@end
