/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputViewController.h>

@class NSArray, NSString, UIKeyboard, UIKeyboardInputMode, UIViewController;

__attribute__((visibility("hidden")))
@interface UICompatibilityInputViewController : UIInputViewController

{
    UIKeyboardInputMode *_inputMode;
    UIKeyboard *_deferredSystemView;
    UIKeyboardInputMode *_incomingExtensionInputMode;
    double _incomingExtensionInputModeTime;
    double _lastSuspendedTime;
    double _currentResumeTime;
    _Bool _shouldRegenerateSizingConstraints;
    _Bool _shouldSuppressRemoteInputController;
    _Bool _tearingDownInputController;
    double _resetInputModeTime;
    unsigned long long _latestDelayTime;
    UIViewController *_inputController;
    NSArray *_internalEdgeMatchConstraints;
}

@property (retain, nonatomic) UIViewController *inputController;
@property (retain, nonatomic) NSArray *internalEdgeMatchConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)deferredInputModeControllerWithKeyboard:(id)arg1;
+ (id)inputViewControllerWithView:(id)arg1;
+ (_Bool)_requiresProxyInterface;
+ (id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2;
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;

- (void)dealloc;
- (void)loadView;
- (id)preferredFocusedView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)didMoveToParentViewController:(id)arg1;
- (id)_keyboard;
- (void)viewDidLayoutSubviews;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (id)_compatibilityController;
- (void)willResume:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setTearingDownInputController;
- (void)rebuildChildConstraints;
- (void)generateCompatibleSizeConstraintsIfNecessary;
- (id)_initAsDeferredController;
- (void)tearDownInputController;
- (void)didSuspend:(id)arg1;
- (void)shouldUpdateInputMode:(id)arg1;
- (void)killIncomingExtension;
- (id)_compatView;
- (void)resetInputModeInMainThread;
- (void)resetInputMode;
- (void)addSnapshotViewForInputMode:(id)arg1;
- (void)removeSnapshotView;
- (void)takeSnapshotView;
- (id)_systemViewControllerForInputMode:(id)arg1;
- (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
- (id)childCompatibilityController;
- (id)_keyboardForThisViewController;
- (void)setDeferredSystemView:(id)arg1;
- (void)assertCurrentInputModeIfNecessary;
- (void)willBeginTranslation;
- (void)finishSplitTransition:(_Bool)arg1;
- (void)didFinishTranslation;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;

@end
