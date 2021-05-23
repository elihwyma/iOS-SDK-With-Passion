/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UIPageViewController;

@interface PXPeoplePageWrapperViewController : UIViewController

{
    UIPageViewController *_pageViewController;
    NSArray *_viewControllers;
    long long _presentationPageIndex;
}

@property (nonatomic, readonly) UIPageViewController *pageViewController;
@property (retain) NSArray *viewControllers;
@property (nonatomic) long long presentationPageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (long long)presentationCountForPageViewController:(id)arg1;
- (long long)presentationIndexForPageViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)initWithViewControllers:(id)arg1;
- (void)_showViewControllerAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateForEnteringSelectMode:(id)arg1;
- (void)updateForExitingSelectMode:(id)arg1;
- (void)updateForSelectionChanged:(id)arg1;
- (void)_updateNavigationItemForCurrentViewController:(id)arg1;

@end
