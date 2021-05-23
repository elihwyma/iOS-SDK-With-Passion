/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HUIconButton, NSLayoutConstraint, NSString, UIFont, UITextField, UIView;

@protocol HUNameAndIconEditorCellDelegate, HUResizableCellDelegate;

@interface HUNameAndIconEditorCell : UITableViewCell <Swift>

{
    _Bool _disabled;
    _Bool _fullWidth;
    HFItem *_item;
    id <HUNameAndIconEditorCellDelegate> _delegate;
    HUIconButton *_iconButton;
    UIView *_containerView;
    UITextField *_textField;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) HUIconButton *iconButton;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) NSLayoutConstraint *leftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *rightConstraint;
@property (weak, nonatomic) id <HUNameAndIconEditorCellDelegate> delegate;
@property (retain, nonatomic) UIFont *textFieldFont;
@property (nonatomic) _Bool fullWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (nonatomic, getter=isDisabled) _Bool disabled;

- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupConstraints;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_handleIconButtonTap:(id)arg1;
- (void)_updateFullWidthAppearance;
- (void)_updateBackgroundColorsBasedOnTraitCollection;

@end
