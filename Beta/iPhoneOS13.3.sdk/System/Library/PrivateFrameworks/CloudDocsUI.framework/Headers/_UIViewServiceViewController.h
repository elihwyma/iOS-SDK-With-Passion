/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UINavigationController;

@interface _UIViewServiceViewController : UIViewController

{
    id _hostingViewController;
    UINavigationController *_containedNavController;
}

@property (nonatomic, readonly) id hostingViewController;
@property (nonatomic, readonly) UINavigationController *containedNavController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (struct CGSize)_updatedContentSizeForPreferredContentSize:(struct CGSize)arg1;
- (void)setContainedNavController:(id)arg1;

@end
