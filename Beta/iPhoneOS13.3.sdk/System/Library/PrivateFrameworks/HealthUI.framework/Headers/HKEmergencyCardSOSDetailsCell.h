/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, NSString, UITextView;

@interface HKEmergencyCardSOSDetailsCell : UITableViewCell

{
    UITextView *_footerTextView;
}

@property (retain, nonatomic) UITextView *footerTextView;
@property (nonatomic, readonly) NSAttributedString *footerTextViewString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)tintColorDidChange;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)setupViews;
- (void)setupConstraints;
- (void)_updateTextColor;

@end
