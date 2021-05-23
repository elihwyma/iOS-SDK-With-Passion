/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, NSString, UIButton, UILabel, UITextView, UIView;

@interface HKOrganDonationCallToActionTableViewCell : UITableViewCell

{
    UILabel *_titleLabel;
    UITextView *_callToActionTextView;
    UIButton *_actionButton;
    UIView *_spacerView;
}

@property (nonatomic, readonly) NSAttributedString *callToActionTextViewString;
@property (retain, nonatomic) UIView *spacerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *callToActionTextView;
@property (retain, nonatomic) UIButton *actionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultReuseIdentifier;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)setupConstraints;
- (void)setupSubviews;

@end
