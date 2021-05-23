/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFItemManager, HMHome, NAFuture, NSAttributedString, NSString, _HUUserAvatarHeaderView;

@protocol HUUserItemManager;

@interface HUUserTableViewController : HUItemTableViewController

{
    HFItemManager<HUUserItemManager> *_userItemManager;
    NSAttributedString *_headerMessage;
    _HUUserAvatarHeaderView *_userAvatarHeaderView;
    HMHome *_home;
    NAFuture *_mediaAccountFuture;
}

@property (nonatomic, readonly) HFItemManager<HUUserItemManager> *userItemManager;
@property (retain, nonatomic) NSAttributedString *headerMessage;
@property (retain, nonatomic) _HUUserAvatarHeaderView *userAvatarHeaderView;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NAFuture *mediaAccountFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)applicationWillEnterForeground;
- (id)userHandle;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)itemTableHeaderView;
- (id)initWithUserItemManager:(id)arg1 home:(id)arg2;
- (void)performRemovalAction:(id)arg1;
- (void)_refreshSplitAccountsHeaderViewIfNeeded:(_Bool)arg1;
- (id)_fetchAccountsForHome:(id)arg1 forceCloudKitFetch:(_Bool)arg2;
- (void)setAMSiTunesAccount:(id)arg1 forHome:(id)arg2;

@end
