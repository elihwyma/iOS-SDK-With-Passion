/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIViewController.h>

@class IKViewElement, NSArray, NSString, UIPageViewController;

@interface _TVModalPageTemplateController : UIViewController

{
    IKViewElement *_backgroundElement;
    NSArray *_bezelViewControllers;
    IKViewElement *_collectionListElement;
    UIPageViewController *_pageViewController;
    NSArray *_viewControllers;
    IKViewElement *_viewElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)arg1;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)_tapAction:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2;
- (_Bool)_updateWithCollectionListElement:(id)arg1;

@end
