/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSDate, NSLayoutConstraint, NSString, UIButton, UILabel, UIStackView;

@protocol HKIDUpdatedAndEditCellDelegate;

@interface HKIDUpdatedAndEditCell : UITableViewCell

{
    NSArray *_regularLayoutConstraints;
    NSArray *_largeTextLayoutConstraints;
    UIStackView *_stackView;
    NSLayoutConstraint *_editFirstBaseLineAnchorConstraint;
    _Bool _hideEditButton;
    id <HKIDUpdatedAndEditCellDelegate> _delegate;
    NSDate *_dateSaved;
    UILabel *_titleLabel;
    UILabel *_dateLabel;
    UIButton *_editButton;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UIButton *editButton;
@property (weak, nonatomic) id <HKIDUpdatedAndEditCellDelegate> delegate;
@property (retain, nonatomic) NSDate *dateSaved;
@property (retain, nonatomic) NSString *titleText;
@property (nonatomic, getter=isEditButtonHidden) _Bool hideEditButton;
@property (nonatomic, getter=isEditButtonDisabled) _Bool disableEditButton;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateForCurrentSizeCategory;
- (void)_updateFont;
- (void)_editButtonTapped:(id)arg1;

@end
