/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UINavigationController.h>

@class NSArray, NSMapTable, NSString, UIView, UIViewController;

@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface __TVModalPresenterNavigationController : UINavigationController

{
    UIViewController *_rootViewController;
    NSMapTable *_pushCompletionBlocks;
    NSMapTable *_popCompletionBlocks;
    _Bool _isModalNavVisisble;
    NSArray *_previousViewControllers;
    CDUnknownBlockType _dismissalBlock;
}

@property (retain, nonatomic) NSArray *previousViewControllers;
@property (copy, nonatomic) CDUnknownBlockType dismissalBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (weak, nonatomic, readonly) id <UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic, readonly) id <UIFocusItemContainer> focusItemContainer;
@property (weak, nonatomic, readonly) UIView *preferredFocusedView;

- (void)reset;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)initWithRootViewController:(id)arg1;
- (id)activeDocument;
- (void)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_ensureNavigationBarHiddenSafelyForViewSize:(struct CGSize)arg1;
- (void)_dismissForLastViewController:(_Bool)arg1;
- (void)_dismissForLastViewController;

@end
