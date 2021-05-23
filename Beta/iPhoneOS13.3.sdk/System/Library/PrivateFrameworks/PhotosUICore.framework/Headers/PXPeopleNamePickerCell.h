/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, UILabel;

@interface PXPeopleNamePickerCell : UITableViewCell

{
    UILabel *_titleLabel;
    NSArray *_baseConstraints;
}

@property (retain, nonatomic) NSArray *baseConstraints;
@property (weak, nonatomic, readonly) UILabel *titleLabel;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
