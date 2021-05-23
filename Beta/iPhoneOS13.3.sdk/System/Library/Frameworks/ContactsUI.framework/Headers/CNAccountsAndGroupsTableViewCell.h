/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewCell.h>

@class CNAccountsAndGroupsItem;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsTableViewCell : UITableViewCell

{
    CNAccountsAndGroupsItem *_item;
}

@property (retain, nonatomic) CNAccountsAndGroupsItem *item;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateFromItem;

@end
