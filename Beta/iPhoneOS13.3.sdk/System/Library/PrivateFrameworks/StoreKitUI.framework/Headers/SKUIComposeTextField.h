/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIComposeTextFieldConfiguration, UILabel, UITextField;

__attribute__((visibility("hidden")))
@interface SKUIComposeTextField : UIView

{
    SKUIComposeTextFieldConfiguration *_configuration;
    long long _currentTextLength;
    id _delegate;
    UILabel *_label;
    long long _style;
    UITextField *_textField;
}

@property (nonatomic, readonly) long long composeReviewStyle;
@property (weak, nonatomic) id delegate;
@property (nonatomic, readonly) SKUIComposeTextFieldConfiguration *configuration;
@property (copy, nonatomic) NSString *text;
@property (nonatomic, readonly) UITextField *textField;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)labelFontForStyle:(long long)arg1;
+ (id)labelColorForStyle:(long long)arg1;

- (void)dealloc;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (void)_textChanged:(id)arg1;
- (id)initWithConfiguration:(id)arg1 style:(long long)arg2;

@end
