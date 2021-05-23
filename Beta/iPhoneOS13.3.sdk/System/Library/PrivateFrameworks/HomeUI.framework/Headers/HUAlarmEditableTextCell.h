/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UITextField;

@interface HUAlarmEditableTextCell : UITableViewCell

{
    UITextField *_textField;
}

@property (nonatomic, readonly) UITextField *textField;
@property (nonatomic) long long autocapitalizationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;

@end
