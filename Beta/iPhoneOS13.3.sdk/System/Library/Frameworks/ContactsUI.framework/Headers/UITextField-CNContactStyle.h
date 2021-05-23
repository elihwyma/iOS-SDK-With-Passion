/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITextField.h>

@class NSDictionary, NSString;

@interface UITextField (CNContactStyle)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *ab_text;
@property (copy, nonatomic) NSDictionary *ab_textAttributes;

- (void)_cnui_applyContactStyle;

@end
