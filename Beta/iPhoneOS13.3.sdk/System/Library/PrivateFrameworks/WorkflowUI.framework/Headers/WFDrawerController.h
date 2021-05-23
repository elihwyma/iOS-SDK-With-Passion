/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSMapTable, NSString, WFDrawerPaneContainer;

@protocol WFDrawerControllerDelegate;

@interface WFDrawerController : UIViewController

{
    _Bool _inTransition;
    id <WFDrawerControllerDelegate> _delegate;
    NSArray *_viewControllers;
    double _bottomInset;
    NSArray *_paneContainers;
    NSMapTable *_paneContainersByViewControllers;
    UIViewController *_initializationViewController;
    NSString *_drawerGroup;
    unsigned long long _previousVisibilityOfCoveredPaneContainer;
}

@property (nonatomic, readonly) NSArray *paneContainers;
@property (nonatomic, readonly) WFDrawerPaneContainer *topPaneContainer;
@property (nonatomic, readonly) NSMapTable *paneContainersByViewControllers;
@property (nonatomic, readonly) UIViewController *initializationViewController;
@property (nonatomic, readonly) NSString *drawerGroup;
@property (nonatomic, readonly) unsigned long long previousVisibilityOfCoveredPaneContainer;
@property (nonatomic, readonly) _Bool inTransition;
@property (weak, nonatomic) id <WFDrawerControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *viewControllers;
@property (nonatomic, readonly) UIViewController *topViewController;
@property (nonatomic, readonly) unsigned long long visibility;
@property (nonatomic) _Bool userInteractionEnabled;
@property (nonatomic) double bottomInset;
@property (nonatomic, readonly) struct CGRect drawerRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (_Bool)popViewControllerAnimated:(_Bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)drawerPaneContainer:(id)arg1 willTransitionToVisibility:(unsigned long long)arg2;
- (void)drawerPaneContainer:(id)arg1 didTransitionToVisibility:(unsigned long long)arg2;
- (double)bottomInsetForPaneContainer:(id)arg1;
- (id)scrollViewOccludingDrawerPaneInsideContainer:(id)arg1;
- (_Bool)pushViewController:(id)arg1 withVisibility:(unsigned long long)arg2 dimming:(unsigned long long)arg3 animated:(_Bool)arg4;
- (_Bool)popViewControllerToVisibility:(unsigned long long)arg1 dimming:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)drawerPaneWithViewController:(id)arg1;
- (id)mutablePaneControllers;
- (id)coveredPaneContainer;
- (id)paneContainerForViewController:(id)arg1;
- (void)transitionToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)transitionToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (double)heightForVisibility:(unsigned long long)arg1;

@end
