/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewCell.h>

@class UIPickerTableView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewCell : UITableViewCell

{
    UITapGestureRecognizer *_tap;
    UIPickerTableView *pickerTable;
}

@property (nonatomic) UIPickerTableView *pickerTable;

+ (id)_centerCellFont;
+ (id)_nonCenterCellFont;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;
- (void)_tapAction:(id)arg1;

@end
