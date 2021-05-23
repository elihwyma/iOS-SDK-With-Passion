/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class ACAccountStore, HUContactView, HUSplitAccountHeaderTableView, NAFuture, NSArray, NSAttributedString;

@protocol HUSplitAccountDelegate;

@interface _HUUserAvatarHeaderView : UITableViewHeaderFooterView

{
    HUContactView *_contactView;
    HUSplitAccountHeaderTableView *_splitAccountHeaderView;
    ACAccountStore *_accountStore;
    NSArray *_layoutConstraints;
    id <HUSplitAccountDelegate> _splitAccountDelegate;
    NAFuture *_mediaAccountFuture;
}

@property (nonatomic, readonly) HUContactView *contactView;
@property (retain, nonatomic) HUSplitAccountHeaderTableView *splitAccountHeaderView;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (weak, nonatomic) id <HUSplitAccountDelegate> splitAccountDelegate;
@property (retain, nonatomic) NAFuture *mediaAccountFuture;
@property (retain, nonatomic) NSAttributedString *message;

- (void)dealloc;
- (id)_keyDescriptors;
- (void)dismissSplitAccountView;
- (id)initWithUserHandle:(id)arg1 home:(id)arg2 delegate:(id)arg3;
- (void)setAccounts:(id)arg1 forHome:(id)arg2;
- (void)showSplitAccountViewIfNeeded;

@end
