/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HUCheckmarkAccessoryView, NSArray, NSString, UITapGestureRecognizer, UITextField, UIView;

@protocol HUEditableCheckmarkDelegate, HUResizableCellDelegate;

@interface HUEditableCheckmarkTextCell : UITableViewCell <Swift>

{
    _Bool _disabled;
    _Bool _disableCheckmark;
    _Bool _isChecked;
    _Bool _allowCheckmarkSelectionWhileDisabled;
    UIView *_accessoryView;
    UITextField *_textField;
    HFItem *_item;
    HUCheckmarkAccessoryView *_checkmarkView;
    id <HUEditableCheckmarkDelegate> _delegate;
    NSArray *_staticConstraints;
    NSArray *_dynamicConstraints;
    UITapGestureRecognizer *_checkmarkTapRecognizer;
}

@property (retain, nonatomic) HUCheckmarkAccessoryView *checkmarkView;
@property (retain, nonatomic) NSArray *staticConstraints;
@property (retain, nonatomic) NSArray *dynamicConstraints;
@property (retain, nonatomic) UITapGestureRecognizer *checkmarkTapRecognizer;
@property (nonatomic) _Bool disableCheckmark;
@property (nonatomic, setter=setChecked:) _Bool isChecked;
@property (nonatomic) _Bool allowCheckmarkSelectionWhileDisabled;
@property (weak, nonatomic) id <HUEditableCheckmarkDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic, readonly) UITextField *textField;

+ (_Bool)requiresConstraintBasedLayout;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setAccessoryView:(id)arg1;
- (id)accessoryView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_checkmarkTapped:(id)arg1;

@end
