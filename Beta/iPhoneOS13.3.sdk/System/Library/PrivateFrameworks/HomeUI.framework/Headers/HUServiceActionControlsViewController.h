/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFServiceActionItem, HUControlPanelController, NSString;

@protocol HUPresentationDelegate, HUServiceActionControlsViewControllerDelegate;

@interface HUServiceActionControlsViewController : HUItemTableViewController

{
    _Bool _requiresPresentingViewControllerDismissal;
    id <HUPresentationDelegate> _presentationDelegate;
    HFServiceActionItem *_serviceActionItem;
    unsigned long long _mode;
    id <HUServiceActionControlsViewControllerDelegate> _serviceActionControlsDelegate;
    HUControlPanelController *_controlPanelController;
}

@property (retain, nonatomic) HFServiceActionItem *serviceActionItem;
@property (retain, nonatomic) HUControlPanelController *controlPanelController;
@property (nonatomic, readonly) unsigned long long mode;
@property (weak, nonatomic) id <HUServiceActionControlsViewControllerDelegate> serviceActionControlsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUPresentationDelegate> presentationDelegate;
@property (nonatomic) _Bool requiresPresentingViewControllerDismissal;

- (void)viewDidLoad;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)_done:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (_Bool)itemManager:(id)arg1 shouldShowControlPanelItem:(id)arg2;
- (_Bool)itemManager:(id)arg1 shouldShowSectionTitleForControlPanelItem:(id)arg2;
- (id)initWithServiceActionItem:(id)arg1 mode:(unsigned long long)arg2;

@end
