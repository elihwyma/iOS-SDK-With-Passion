/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UIView.h>

@class UITableView;

__attribute__((visibility("hidden")))
@interface MCSectionBasedTableView : UIView

{
    UITableView *_tableView;
}

@property (nonatomic, readonly) UITableView *tableView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_createTableView;

@end
