/*
 Image: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
 */

#import <UIKit/UIViewController.h>

@class UIBarButtonItem;

@protocol ILClassificationExtensionShellViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ILClassificationExtensionShellViewController : UIViewController

{
    _Bool _enableFinishOption;
    id <ILClassificationExtensionShellViewControllerDelegate> _delegate;
    UIViewController *_extensionViewController;
    UIBarButtonItem *_doneButton;
}

@property (retain, nonatomic) UIViewController *extensionViewController;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (weak, nonatomic) id <ILClassificationExtensionShellViewControllerDelegate> delegate;
@property (nonatomic) _Bool enableFinishOption;

- (void)viewDidLoad;
- (void)userDidCancel;
- (void)displayExtensionViewController:(id)arg1 forExtension:(id)arg2;
- (void)userDidFinish;

@end
