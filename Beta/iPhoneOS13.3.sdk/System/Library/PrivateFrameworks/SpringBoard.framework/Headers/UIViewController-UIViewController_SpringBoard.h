/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@protocol UIViewControllerTransitionCoordinator;

@interface UIViewController (UIViewController_SpringBoard)

@property (nonatomic, readonly) id <UIViewControllerTransitionCoordinator> sb_transitionCoordinator;

+ (id)sb_firstDescendantOfViewControllers:(id)arg1 passingTest:(CDUnknownBlockType)arg2;

- (id)sb_firstDescendantPassingTest:(CDUnknownBlockType)arg1;
- (id)sb_firstDescendantOfClass:(Class)arg1;
- (_Bool)sb_beginAppearanceTransitionIfNecessary:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)sb_endAppearanceTransitionIfNecessary;
- (id)sb_firstDescendantOfClassNamed:(id)arg1;
- (id)sb_childOrPresentedViewControllerStatusBarSettings;

@end
