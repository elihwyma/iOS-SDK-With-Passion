/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIInputViewController.h>

@class NSString, UIViewController;

@interface CKKeyboardContentViewController : UIInputViewController

{
    UIViewController *_viewController;
    NSString *_identifier;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIViewController *viewController;

- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)initWithViewController:(id)arg1 identifier:(id)arg2;

@end
