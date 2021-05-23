/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIViewController.h>

@class UITextView;

@interface FIUIAppDisabledViewController : UIViewController

{
    UITextView *_textView;
}

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithAppName:(id)arg1 disabledReason:(unsigned long long)arg2;

@end
