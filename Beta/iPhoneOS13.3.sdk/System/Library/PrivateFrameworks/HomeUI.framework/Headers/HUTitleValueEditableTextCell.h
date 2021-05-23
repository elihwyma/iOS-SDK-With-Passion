/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, NSArray, NSLayoutConstraint, NSString, UIFont, UILabel, UITextField;

@protocol HUResizableCellDelegate;

@interface HUTitleValueEditableTextCell : UITableViewCell <Swift>

{
    _Bool _disabled;
    _Bool _hideTitle;
    UITextField *_valueTextField;
    HFItem *_item;
    NSString *_titleText;
    UIFont *_titleFont;
    UILabel *_titleLabel;
    NSArray *_titleLabelConstraints;
    NSArray *_valueTextFieldConstraints;
    NSLayoutConstraint *_labelsSpacingConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *titleLabelConstraints;
@property (retain, nonatomic) NSArray *valueTextFieldConstraints;
@property (retain, nonatomic) NSLayoutConstraint *labelsSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *minimumHeightConstraint;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) _Bool hideTitle;
@property (nonatomic, readonly) UITextField *valueTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;

+ (_Bool)requiresConstraintBasedLayout;

- (void)prepareForReuse;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateTitle;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_addTitleLabel;
- (void)_addValueTextField;

@end
