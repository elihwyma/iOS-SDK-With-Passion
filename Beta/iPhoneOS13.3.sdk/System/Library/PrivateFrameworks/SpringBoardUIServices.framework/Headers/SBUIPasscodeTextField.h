/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UITextField.h>

@interface SBUIPasscodeTextField : UITextField

{
    _Bool _previousResponderRequiresKeyboard;
    _Bool _showsSystemKeyboard;
}

@property (nonatomic) _Bool showsSystemKeyboard;

- (void)dealloc;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_enableAutomaticAppearance;
- (void)_disableAutomaticAppearance;

@end
