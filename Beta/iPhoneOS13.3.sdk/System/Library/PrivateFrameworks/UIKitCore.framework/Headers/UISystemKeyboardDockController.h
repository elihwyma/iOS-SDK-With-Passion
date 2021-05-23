/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSString, UIButton, UIKeyboardDockItem, UIKeyboardDockView;

__attribute__((visibility("hidden")))
@interface UISystemKeyboardDockController : UIViewController

{
    _Bool _dictationHasUsedServerManualEndpointing;
    _Bool _dictationUsingServerManualEndpointing;
    _Bool _isSuppressingDockItemTouch;
    UIKeyboardDockItem *_globeDockItem;
    UIKeyboardDockItem *_dictationDockItem;
    UIKeyboardDockItem *_keyboardDockItem;
    UIButton *_stopDictationButton;
    UIKeyboardDockView *_dockView;
}

@property (retain, nonatomic) UIKeyboardDockView *dockView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)updateDockItemsVisibility;
- (void)keyboardDockView:(id)arg1 didPressDockItem:(id)arg2 withEvent:(id)arg3;
- (void)keyboardItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;
- (void)_dictationDidBeginNotification:(id)arg1;
- (void)setKeyboardDockItem;
- (void)dictationItemButtonWasPressed:(id)arg1 withEvent:(id)arg2;
- (void)globeItemButtonWasPressed:(id)arg1 withEvent:(id)arg2;

@end
