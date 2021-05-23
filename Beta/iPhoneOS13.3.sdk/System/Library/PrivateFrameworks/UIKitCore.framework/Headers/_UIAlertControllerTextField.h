/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextField.h>

@class _UIAlertControllerTextFieldView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextField : UITextField

{
    _UIAlertControllerTextFieldView *_textFieldView;
}

@property (nonatomic) _UIAlertControllerTextFieldView *textFieldView;

- (void)setSecureTextEntry:(_Bool)arg1;

@end
