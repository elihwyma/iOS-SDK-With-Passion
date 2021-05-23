/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class UITableView;

@interface RUITableViewHeaderFooterView : UITableViewHeaderFooterView

{
    UITableView *_tableView;
}

@property (weak) UITableView *tableView;

- (void)layoutSubviews;

@end
