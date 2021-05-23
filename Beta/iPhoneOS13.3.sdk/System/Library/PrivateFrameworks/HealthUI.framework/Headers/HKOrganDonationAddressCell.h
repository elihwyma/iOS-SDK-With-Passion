/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKSimpleDataEntryCell.h>

@class NSString, UIButton, UILabel, UITextField, UIView;

@protocol HKSimpleDataEntryCellDelegate;

@interface HKOrganDonationAddressCell : HKSimpleDataEntryCell

{
    UILabel *_titleLabel;
    UIView *_addressContainerView;
    UIView *_verticalSeparator;
    UIView *_horizontalSeparator;
    UIView *_stateZipSeparator;
    UIView *_addressSeparator;
    UIView *_citySeparator;
    UIView *_stateSeparator;
    UIButton *_stateShadowButton;
    _Bool _editDisabled;
    id <HKSimpleDataEntryCellDelegate> _delegate;
    UITextField *_streetOneTextField;
    UITextField *_streetTwoTextField;
    UITextField *_stateTextField;
    UITextField *_cityTextField;
    UITextField *_zipCodeTextField;
}

@property (retain, nonatomic) UITextField *streetOneTextField;
@property (retain, nonatomic) UITextField *streetTwoTextField;
@property (retain, nonatomic) UITextField *stateTextField;
@property (retain, nonatomic) UITextField *cityTextField;
@property (retain, nonatomic) UITextField *zipCodeTextField;
@property (weak, nonatomic) id <HKSimpleDataEntryCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)beginEditing;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)editDisabled;
- (void)setEditDisabled:(_Bool)arg1;
- (void)textFieldDidChangeValue:(id)arg1;
- (void)_setupLayoutConstraints;
- (void)_stateShadowButtonTapped:(id)arg1;
- (void)_setupFonts;

@end
