/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSObject, NSString, UIDocumentPasswordField, UILabel, UITextField;

@protocol UIDocumentPasswordViewDelegate;

@interface UIDocumentPasswordView : UIView

{
    UIDocumentPasswordField *_passwordTextField;
    UILabel *_label;
    NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;
}

@property (nonatomic) NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;
@property (nonatomic, readonly) UITextField *passwordField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (id)_labelFont;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)_canDrawContent;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)_labelTextColor;
- (void)_passwordEntered:(id)arg1;
- (double)_labelHorizontalOffset;
- (double)_textFieldWidth;
- (id)initWithDocumentName:(id)arg1;

@end
