/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableView.h>

__attribute__((visibility("hidden")))
@interface HUCenteredCellUITableView : UITableView

{
    struct CGRect _keyboardFrame;
}

@property (nonatomic) struct CGRect keyboardFrame;

- (void)layoutSubviews;

@end
