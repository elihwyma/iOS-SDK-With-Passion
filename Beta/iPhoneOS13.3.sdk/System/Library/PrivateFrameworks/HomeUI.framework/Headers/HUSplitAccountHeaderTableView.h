/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableView.h>

@class ACAccount, HMHome, NSString;

@protocol HUSplitAccountDelegate;

@interface HUSplitAccountHeaderTableView : UITableView

{
    ACAccount *_mediaAccount;
    HMHome *_home;
    id <HUSplitAccountDelegate> _splitAccountDelegate;
}

@property (retain, nonatomic) ACAccount *mediaAccount;
@property (retain, nonatomic) HMHome *home;
@property (weak, nonatomic) id <HUSplitAccountDelegate> splitAccountDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_titleFont;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)_titleHeight;
- (id)_descriptionFont;
- (id)initWithFrame:(struct CGRect)arg1 mediaAccount:(id)arg2 home:(id)arg3 delegate:(id)arg4;
- (double)tableViewHeight;
- (id)_buttonTitleTextFont;
- (double)_descriptionHeight;
- (double)_buttonTitleTextHeight;
- (double)_maxTitleAndDescriptionCellHeight;

@end
