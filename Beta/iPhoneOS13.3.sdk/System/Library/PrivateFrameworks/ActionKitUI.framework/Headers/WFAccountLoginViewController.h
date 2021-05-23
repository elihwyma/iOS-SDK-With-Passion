/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIViewController.h>

@protocol WFAccountLoginViewControllerDelegate;

@interface WFAccountLoginViewController : UIViewController

{
    id <WFAccountLoginViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <WFAccountLoginViewControllerDelegate> delegate;

- (id)initWithCoder:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAccountClass:(Class)arg1;

@end
