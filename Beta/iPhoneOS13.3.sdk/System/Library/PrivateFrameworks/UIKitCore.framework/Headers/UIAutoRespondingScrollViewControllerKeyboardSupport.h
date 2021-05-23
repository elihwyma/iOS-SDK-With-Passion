/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@protocol _UIKeyboardAutoRespondingScrollViewController;

__attribute__((visibility("hidden")))
@interface UIAutoRespondingScrollViewControllerKeyboardSupport : NSObject

{
    UIViewController<_UIKeyboardAutoRespondingScrollViewController> *_viewController;
    double _adjustmentForKeyboard;
    unsigned int _viewIsDisappearing:1;
    unsigned int _registeredForNotifications:1;
}

@property (nonatomic) double adjustmentForKeyboard;
@property (nonatomic) _Bool viewIsDisappearing;
@property (nonatomic) _Bool registeredForNotifications;

- (void)_adjustScrollViewForKeyboardInfo:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardDidChangeFrame:(id)arg1;

@end
