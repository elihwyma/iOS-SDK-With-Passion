/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <ContactsAutocompleteUI/CNComposeTableViewCell.h>

@class UIImageView, UIView;

@interface CNAutocompleteDisambiguatingTableViewCell : CNComposeTableViewCell

{
    _Bool _checkmarkVisible;
    UIImageView *_checkmarkImageView;
}

@property (retain) UIImageView *checkmarkImageView;
@property (nonatomic, getter=isCheckmarkVisible) _Bool checkmarkVisible;
@property (readonly) UIView *checkmarkView;

+ (id)identifier;
+ (id)createCheckmarkView;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setRecipient:(id)arg1;
- (id)titleTextStyle;

@end
