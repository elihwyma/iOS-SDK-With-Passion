/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <UIKit/UIViewController.h>

@class NSString;

@interface AFUIModalTextViewController : UIViewController

{
    NSString *_bodyText;
}

- (void)loadView;
- (void)donePressed;
- (void)presentFromParentViewController:(id)arg1;
- (id)initWithTitleText:(id)arg1 andBodyText:(id)arg2;

@end
