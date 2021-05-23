/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <UIKit/UITextField.h>

@interface _AKInsetTextField : UITextField

{
    struct CGSize _insetSize;
}

@property (nonatomic) struct CGSize insetSize;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;

@end
