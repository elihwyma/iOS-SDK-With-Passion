/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextField.h>

@interface UISearchField : UITextField

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (id)_placeholderColor;
- (struct CGRect)_availableTextRectExcludingButtonsForBounds:(struct CGRect)arg1;
- (struct CGRect)iconRect;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;

@end
