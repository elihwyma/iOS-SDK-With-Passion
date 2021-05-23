/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebDateTimePopoverViewController : UIViewController

{
    id <UIWebFormControl> _innerWebDateTimeControl;
}

@property (retain, nonatomic) id <UIWebFormControl> _innerWebDateTimeControl;

- (void)dealloc;
- (void)loadView;
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;

@end
