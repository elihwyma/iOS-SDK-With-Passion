/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class UIUndoTutorialView;

__attribute__((visibility("hidden")))
@interface UIUndoTutorialViewController : UIViewController

{
    CDUnknownBlockType _completionHandler;
    UIUndoTutorialView *_tutorialView;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) UIUndoTutorialView *tutorialView;

- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)doneButtonPressed;

@end
