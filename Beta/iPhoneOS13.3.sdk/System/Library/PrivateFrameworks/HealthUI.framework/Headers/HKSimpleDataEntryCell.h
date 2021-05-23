/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@interface HKSimpleDataEntryCell : UITableViewCell

{
    _Bool _editDisabled;
}

@property (nonatomic) _Bool editDisabled;

- (void)beginEditing;

@end
