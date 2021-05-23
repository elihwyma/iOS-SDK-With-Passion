/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIViewController.h>

@class IKTextFieldElement, NSString, UITextField;

__attribute__((visibility("hidden")))
@interface _TVTextFieldViewController : UIViewController

{
    IKTextFieldElement *_viewElement;
}

@property (retain, nonatomic, readonly) IKTextFieldElement *viewElement;
@property (retain, nonatomic, readonly) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)textDidChangeForKeyboard:(id)arg1;
- (void)_updateViewLayout;
- (void)updateWithViewElement:(id)arg1;
- (void)searchBarDidChangeText:(id)arg1;
- (void)_updateKeyboardWithUserText;
- (void)_updateUserText;

@end
