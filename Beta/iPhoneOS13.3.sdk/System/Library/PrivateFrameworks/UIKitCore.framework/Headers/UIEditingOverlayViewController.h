/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class UIUndoGestureInteraction;

__attribute__((visibility("hidden")))
@interface UIEditingOverlayViewController : UIViewController

{
    UIUndoGestureInteraction *_undoInteraction;
}

@property (retain, nonatomic) UIUndoGestureInteraction *undoInteraction;

- (void)loadView;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_addInteractions;
- (void)_removeInteractions;
- (void)updateEditingOverlayContainer;

@end
