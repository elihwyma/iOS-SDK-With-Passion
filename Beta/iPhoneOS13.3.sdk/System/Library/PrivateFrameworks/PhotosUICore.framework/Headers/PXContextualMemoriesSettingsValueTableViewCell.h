/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIButton, UILabel, UIView;

@interface PXContextualMemoriesSettingsValueTableViewCell : UITableViewCell

{
    UILabel *_valueLabel;
    CDUnknownBlockType _resetHandler;
    UIButton *_resetButton;
    UIView *_containerView;
    NSLayoutConstraint *_topLayoutMarginConstraint;
    NSLayoutConstraint *_bottomLayoutMarginConstraint;
    NSLayoutConstraint *_leftLayoutMarginConstraint;
    NSLayoutConstraint *_rightLayoutMarginConstraint;
}

@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSLayoutConstraint *topLayoutMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomLayoutMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leftLayoutMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *rightLayoutMarginConstraint;
@property (nonatomic, readonly) UILabel *valueLabel;
@property (copy, nonatomic) CDUnknownBlockType resetHandler;

- (void)layoutMarginsDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setUpConstraints;
- (void)_didPressReset:(id)arg1;

@end
