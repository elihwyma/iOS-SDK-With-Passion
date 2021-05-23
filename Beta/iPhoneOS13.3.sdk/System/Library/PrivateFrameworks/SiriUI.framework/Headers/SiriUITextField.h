/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UITextField.h>

@interface SiriUITextField : UITextField

+ (id)imageWithImage:(id)arg1 tintColor:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)textInputContextIdentifier;
- (_Bool)_shouldRepeatInsertText:(id)arg1;
- (void)_configureClearButton;

@end
