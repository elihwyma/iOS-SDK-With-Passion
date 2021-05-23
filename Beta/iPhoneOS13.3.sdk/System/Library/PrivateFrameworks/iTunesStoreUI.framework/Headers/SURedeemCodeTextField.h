/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class NSString, UITextField, UIVisualEffectView;

@protocol UITextFieldDelegate;

@interface SURedeemCodeTextField : UIView

{
    double _height;
    UIVisualEffectView *_visualEffectView;
    UITextField *_textField;
}

@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UITextField *textField;
@property (weak, nonatomic) id <UITextFieldDelegate> delegate;
@property (nonatomic, readonly) double height;
@property (retain, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSString *text;

- (void)layoutSubviews;
- (void)_setupSubviews;
- (id)initWithHeight:(double)arg1;
- (void)_setupVisualEffectView;
- (void)_setupTextField;

@end
