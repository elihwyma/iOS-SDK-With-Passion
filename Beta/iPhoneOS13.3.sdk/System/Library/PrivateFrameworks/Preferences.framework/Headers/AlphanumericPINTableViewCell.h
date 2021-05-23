/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UITableViewCell.h>

@class AlphanumericPINTextField;

@interface AlphanumericPINTableViewCell : UITableViewCell

{
    AlphanumericPINTextField *_pinTextField;
}

@property (retain, nonatomic) AlphanumericPINTextField *pinTextField;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
