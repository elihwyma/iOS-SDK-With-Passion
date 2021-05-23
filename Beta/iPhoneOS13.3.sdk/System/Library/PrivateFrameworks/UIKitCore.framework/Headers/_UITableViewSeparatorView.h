/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UITableView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewSeparatorView : UIView

{
    UITableViewCell *_tableCell;
    UITableView *_table;
}

- (void)drawRect:(struct CGRect)arg1;
- (id)initWithTableCell:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withTable:(id)arg2;

@end
