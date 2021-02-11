/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISystemKeyboardDockController : UIViewController <UIKeyboardDockViewDelegate> {
    UIKeyboardDockItem * _dictationDockItem;
    bool  _dictationHasUsedServerManualEndpointing;
    bool  _dictationUsingServerManualEndpointing;
    UIKeyboardDockView * _dockView;
    UIKeyboardDockItem * _globeDockItem;
    bool  _isSuppressingDockItemTouch;
    UIKeyboardDockItem * _keyboardDockItem;
    UIButton * _stopDictationButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIKeyboardDockView *dockView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_dictationDidBeginNotification:(id)arg1;
- (void)dealloc;
- (id)dockView;
- (void)globeItemButtonWasPressed:(id)arg1 withEvent:(id)arg2;
- (void)keyboardDockView:(id)arg1 didPressDockItem:(id)arg2 withEvent:(id)arg3;
- (void)keyboardItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;
- (void)loadView;
- (void)setDockView:(id)arg1;
- (void)setKeyboardDockItem;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

// Image: /usr/lib/TweakInject/ADockX.dylib

- (void)updateDockItemsVisibility;

// Image: /usr/lib/TweakInject/CopyLogDaemon.dylib

- (void)dictationItemButtonWasPressed:(id)arg1 withEvent:(id)arg2;

@end