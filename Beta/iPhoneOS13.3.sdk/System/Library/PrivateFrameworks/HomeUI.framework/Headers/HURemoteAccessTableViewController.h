/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFUserItem, HURemoteAccessItemManager, NSString;

@interface HURemoteAccessTableViewController : HUItemTableViewController

{
    HFUserItem *_userItem;
    HURemoteAccessItemManager *_remoteAccessItemManager;
}

@property (copy, nonatomic, readonly) HFUserItem *userItem;
@property (copy, nonatomic, readonly) HURemoteAccessItemManager *remoteAccessItemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)userHandle;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (id)initWithItem:(id)arg1 home:(id)arg2;

@end
