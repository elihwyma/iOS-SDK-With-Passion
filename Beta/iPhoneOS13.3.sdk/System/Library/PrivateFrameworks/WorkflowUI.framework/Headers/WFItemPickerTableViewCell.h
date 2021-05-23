/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class WFRichContentItemCellView;

@interface WFItemPickerTableViewCell : UITableViewCell

{
    WFRichContentItemCellView *_cellView;
}

@property (weak, nonatomic, readonly) WFRichContentItemCellView *cellView;

- (id)accessibilityLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
