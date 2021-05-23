/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIApplicationRotationFollowingController.h>

@class UIWindow, _UIFallbackPresentationWindow;

@interface _UIFallbackPresentationViewController : UIApplicationRotationFollowingController

{
    _UIFallbackPresentationWindow *_presentationWindow;
    _Bool _hasPreservedKeyboardInputViews;
    _Bool _hasDismissCompletionHandler;
    UIWindow *_rotationDecider;
    CDUnknownBlockType _presentationPreparationBlock;
}

@property (nonatomic) _Bool hasPreservedKeyboardInputViews;
@property (nonatomic) _Bool hasDismissCompletionHandler;
@property (retain, nonatomic) UIWindow *rotationDecider;
@property (copy, nonatomic) CDUnknownBlockType presentationPreparationBlock;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_preserveInputViewsAnimated:(_Bool)arg1;
- (void)_restoreInputViewsAnimated:(_Bool)arg1;
- (void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(_Bool)arg3;
- (void)_preparePresentationControllerForPresenting:(id)arg1;

@end
