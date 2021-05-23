/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UIImage, UIImageView, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface CNSharingProfileOnboardingNameCell : UITableViewCell

{
    long long _nameOrder;
    UIImage *_avatarImage;
    UITextField *_givenNameField;
    UITextField *_familyNameField;
    UIView *_fakeSeparator;
    UIImageView *_avatarImageView;
}

@property (retain, nonatomic) UITextField *givenNameField;
@property (retain, nonatomic) UITextField *familyNameField;
@property (retain, nonatomic) UIView *fakeSeparator;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (nonatomic) long long nameOrder;
@property (retain, nonatomic) UIImage *avatarImage;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;

+ (id)cellIdentifier;
+ (double)desiredMinimumCellHeight;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)textFieldForIndex:(long long)arg1;
- (double)separatorHeight;
- (void)setGivenNameField:(id)arg1 familyNameField:(id)arg2;

@end
