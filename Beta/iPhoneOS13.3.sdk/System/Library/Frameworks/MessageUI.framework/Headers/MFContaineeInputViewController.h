/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIInputViewController.h>

@class NSLayoutConstraint, UIViewController;

@interface MFContaineeInputViewController : UIInputViewController

{
    _Bool _allowsSelfSizing;
    UIViewController *_contentViewController;
    NSLayoutConstraint *_heightConstraint;
}

@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (nonatomic) _Bool allowsSelfSizing;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithContentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_updateContentViewControllerHeight;

@end
