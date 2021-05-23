/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIAlertController.h>

@class UIViewController;

@protocol UIPopoverPresentationControllerDelegate, _UIRotatingAlertControllerDelegate;

@interface _UIRotatingAlertController : UIAlertController

{
    unsigned long long _arrowDirections;
    _Bool _isRotating;
    _Bool _readyToPresentAfterRotation;
    UIViewController *_presentedViewControllerWhileRotating;
    id <UIPopoverPresentationControllerDelegate> _popoverPresentationControllerDelegateWhileRotating;
    id <_UIRotatingAlertControllerDelegate> _rotatingSheetDelegate;
}

@property (weak, nonatomic) id <_UIRotatingAlertControllerDelegate> rotatingSheetDelegate;
@property (nonatomic) unsigned long long arrowDirections;

- (id)init;
- (void)dealloc;
- (_Bool)_canShowWhileLocked;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (_Bool)_shouldAbortAdaptationFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (_Bool)presentSheet;
- (void)willRotate:(id)arg1;
- (void)didRotate:(id)arg1;
- (_Bool)presentSheetFromRect:(struct CGRect)arg1;
- (void)_didRotateAndLayout;
- (void)_updateSheetPositionAfterRotation;
- (void)doneWithSheet;

@end
