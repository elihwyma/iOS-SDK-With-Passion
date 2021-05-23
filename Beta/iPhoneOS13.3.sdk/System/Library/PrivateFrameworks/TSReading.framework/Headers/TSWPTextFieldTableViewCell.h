/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UITextField;

@interface TSWPTextFieldTableViewCell : UITableViewCell

{
    UITextField *_textField;
}

@property (retain, nonatomic, readonly) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)p_endEditingOnExit;

@end
