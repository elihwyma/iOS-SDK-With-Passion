/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSArray, NSLayoutConstraint, NSMutableDictionary, NSString, UIButton, UICompatibilityInputViewController, UIKBSystemLayoutViewController, UIKeyboard, UILabel, UILexicon, UIRecentsInputViewController, UIResponder, UITextInputTraits, UIView;

@protocol UISystemInputViewControllerDelegate, UITextInput, UITraitEnvironment;

@interface UISystemInputViewController : UIViewController

{
    NSMutableDictionary *_accessoryViewControllers;
    NSMutableDictionary *_accessoryConstraints;
    _Bool _needsSetupAgain;
    _Bool _isVisible;
    UIResponder<UITraitEnvironment> *_containingResponder;
    _Bool _supportsTouchInput;
    _Bool _supportsRecentInputsIntegration;
    _Bool _isAutomaticResponderTransition;
    _Bool _willPresentFullscreen;
    _Bool _willUpdateBackgroundEffectOnInputModeChange;
    _Bool _didDisplayRecents;
    id <UISystemInputViewControllerDelegate> _systemInputViewControllerDelegate;
    UIResponder<UITextInput> *_persistentDelegate;
    UIKeyboard *_keyboard;
    NSArray *_keyboardConstraints;
    UICompatibilityInputViewController *_keyboardVC;
    NSArray *_editorConstraints;
    UIKBSystemLayoutViewController *_editorVC;
    UIButton *_doneButton;
    UIViewController *_inputVC;
    UIRecentsInputViewController *_recentsVC;
    NSLayoutConstraint *_verticalAlignment;
    NSLayoutConstraint *_horizontalAlignment;
    UIResponder<UITextInput> *_nextInputDelegate;
    UITextInputTraits *_textInputTraits;
    UILexicon *_cachedRecents;
    UILabel *_promptLabel;
    unsigned long long _requestedInteractionModel;
    UIView *_containingView;
    UIView *_contentLayoutView;
    long long _blurEffectStyle;
}

@property (nonatomic) _Bool supportsTouchInput;
@property (nonatomic) _Bool isAutomaticResponderTransition;
@property (nonatomic) _Bool willPresentFullscreen;
@property (nonatomic) _Bool willUpdateBackgroundEffectOnInputModeChange;
@property (nonatomic) _Bool didDisplayRecents;
@property (retain, nonatomic) UIView *containingView;
@property (retain, nonatomic) UIView *contentLayoutView;
@property (nonatomic) long long blurEffectStyle;
@property (retain, nonatomic) UIKeyboard *keyboard;
@property (retain, nonatomic) NSArray *keyboardConstraints;
@property (retain, nonatomic) UICompatibilityInputViewController *keyboardVC;
@property (retain, nonatomic) NSArray *editorConstraints;
@property (retain, nonatomic) UIKBSystemLayoutViewController *editorVC;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UIViewController *inputVC;
@property (retain, nonatomic) UIRecentsInputViewController *recentsVC;
@property (retain, nonatomic) NSLayoutConstraint *verticalAlignment;
@property (retain, nonatomic) NSLayoutConstraint *horizontalAlignment;
@property (retain, nonatomic) UIResponder<UITextInput> *nextInputDelegate;
@property (retain, nonatomic) UITextInputTraits *textInputTraits;
@property (retain, nonatomic) UILexicon *cachedRecents;
@property (retain, nonatomic) UILabel *_promptLabel;
@property (retain, nonatomic) UIResponder<UITextInput> *persistentDelegate;
@property (nonatomic) struct UIEdgeInsets unfocusedFocusGuideOutsets;
@property (nonatomic) _Bool supportsRecentInputsIntegration;
@property (nonatomic) id <UISystemInputViewControllerDelegate> systemInputViewControllerDelegate;
@property (nonatomic) unsigned long long requestedInteractionModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3;
+ (id)_iOS_systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 traitCollection:(id)arg4;
+ (id)_tvOS_systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 traitCollection:(id)arg4;
+ (id)_carPlay_systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 traitCollection:(id)arg4;
+ (void)setKeyboardInteractionModel:(unsigned long long)arg1;
+ (_Bool)canUseSystemInputViewControllerForResponder:(id)arg1;
+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2;
+ (id)_canonicalTraitsForResponder:(id)arg1;

- (void)dealloc;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (id)_effectView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (void)updateViewConstraints;
- (void)_willResume:(id)arg1;
- (void)_didSuspend:(id)arg1;
- (void)didSelectRecentInput;
- (void)switchToKeyboard;
- (void)populateCoreHierarchy;
- (void)setAccessoryViewController:(id)arg1 forEdge:(long long)arg2;
- (void)findNextInputDelegate;
- (id)doneButtonStringForCurrentInputDelegate;
- (void)_returnButtonPressed;
- (id)_accessoryViewControllerForEdge:(long long)arg1;
- (id)alignmentConstraintForAxis:(long long)arg1;
- (void)_addChildInputViewController;
- (void)_addAccessoryViewController:(id)arg1;
- (void)updateAlignmentConstraints;
- (id)_traitCollectionForUserInterfaceStyle;
- (void)_setNonInputViewVisibility:(_Bool)arg1;
- (void)_createKeyboardIfNecessary;
- (void)_updateRemoteTextEditingSession;
- (void)_restoreKeyboardIfNecessary;
- (void)_removeAccessoryViewController:(id)arg1;
- (void)notifyDelegateWithAccessoryVisibility:(_Bool)arg1;
- (void)configureRecentsVCIfNecessary;
- (_Bool)willShowRecentsList;
- (void)_dismissSystemInputViewController;
- (void)_windowWillBecomeKey:(id)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)inputModeDidChange:(id)arg1;
- (void)setupKeyboard;
- (void)setAlignmentConstraint:(id)arg1 forAxis:(long long)arg2;
- (id)constraintFromView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4;
- (void)setConstraints:(id)arg1 forEdge:(long long)arg2;
- (id)constraintsForEdge:(long long)arg1;
- (unsigned long long)_verticalLayoutTypeForEdge:(long long)arg1;
- (unsigned long long)_horizontalLayoutTypeForEdge:(long long)arg1;
- (void)_resetDelegate;
- (void)_clearCursorLocationIfNotFirstResponder;
- (void)prepareForRelease;
- (void)resetContainingResponder;
- (void)reloadInputViewsForPersistentDelegate;
- (id)accessoryViewControllerForEdge:(long long)arg1;

@end
