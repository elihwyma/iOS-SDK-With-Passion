/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UIButton, UITableView;

__attribute__((visibility("hidden")))
@interface VUIPopoverViewControllerView : UIView

{
    UITableView *_tableView;
    UIButton *_cancelButton;
}

@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic, readonly) UIButton *cancelButton;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_configureSubviews;

@end
