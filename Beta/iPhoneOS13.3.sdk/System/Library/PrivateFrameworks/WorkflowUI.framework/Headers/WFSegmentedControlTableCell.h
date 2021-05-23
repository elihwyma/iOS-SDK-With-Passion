/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, UISegmentedControl, WFSegmentedControlTableItem, WFSegmentedControlValue;

@interface WFSegmentedControlTableCell : UITableViewCell

{
    WFSegmentedControlTableItem *_tableItem;
    UISegmentedControl *_segmentedControl;
    NSArray *_possibleValues;
    WFSegmentedControlValue *_selectedValue;
}

@property (weak, nonatomic) WFSegmentedControlTableItem *tableItem;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (copy, nonatomic) NSArray *possibleValues;
@property (retain, nonatomic) WFSegmentedControlValue *selectedValue;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)valueChanged:(id)arg1;

@end
