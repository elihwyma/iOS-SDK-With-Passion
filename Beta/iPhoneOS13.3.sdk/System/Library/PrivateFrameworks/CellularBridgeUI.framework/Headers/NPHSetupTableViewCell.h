/*
 Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

#import <UIKit/UITableViewCell.h>

@class UITextField;

@interface NPHSetupTableViewCell : UITableViewCell

{
    UITextField *_editableTextField;
}

@property (retain, nonatomic) UITextField *editableTextField;

+ (double)rowHeight;

- (id)initWithTag:(long long)arg1 delegate:(id)arg2;

@end
