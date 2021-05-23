/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, UITextField, _UIAlertControllerTextField;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldView : UIView

{
    UIView *_containerView;
    _UIAlertControllerTextField *_textField;
    NSArray *_containerViewConstraints;
}

@property (retain, nonatomic) UIView *containerView;
@property (readonly) UITextField *textField;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_textFieldFont;
- (void)_loadConstraints;
- (double)_borderWidth;

@end
