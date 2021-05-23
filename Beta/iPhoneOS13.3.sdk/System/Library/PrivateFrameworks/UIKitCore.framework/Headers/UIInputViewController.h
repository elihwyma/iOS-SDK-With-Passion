/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIInputView, UIKeyboard;

@protocol UITextDocumentProxy;

@interface UIInputViewController : UIViewController <Swift>

{
    _Bool _commitInputModeOnTouchEnd;
    _Bool _inputModeListIsShown;
    _Bool _viewConformsToRemotePlaceholder;
    double _touchBegan;
    _Bool _alignsToContentViewController;
    _Bool _autosizeToCurrentKeyboard;
    _Bool _hasDictationKey;
    id <UITextDocumentProxy> _textDocumentProxy;
    NSString *_primaryLanguage;
}

@property (nonatomic, readonly) UIKeyboard *_keyboard;
@property (nonatomic, readonly) _Bool _isPlaceholder;
@property (nonatomic) _Bool _alignsToContentViewController;
@property (nonatomic, setter=_setAutosizeToCurrentKeyboard:) _Bool _autosizeToCurrentKeyboard;
@property (retain, nonatomic) UIInputView *inputView;
@property (nonatomic, readonly) id <UITextDocumentProxy> textDocumentProxy;
@property (copy, nonatomic) NSString *primaryLanguage;
@property (nonatomic) _Bool hasDictationKey;
@property (nonatomic, readonly) _Bool hasFullAccess;
@property (nonatomic, readonly) _Bool needsInputModeSwitchKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_requiresProxyInterface;
+ (void)presentDialogForAddingKeyboard;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setView:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)textWillChange:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)_setExtensionContextUUID:(id)arg1;
- (_Bool)_canBecomeFirstResponder;
- (void)didReceiveMemoryWarning;
- (struct CGSize)_systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (_Bool)_canResignIfContainsFirstResponder;
- (id)_compatibilityController;
- (void)dismissKeyboard;
- (void)_setupInputController;
- (id)_proxyInterface;
- (id)_textDocumentInterface;
- (void)_updateConformanceCache;
- (void)advanceToNextInputMode;
- (void)_willResetDocumentState;
- (void)_didResetDocumentState;
- (void)selectionWillChange:(id)arg1;
- (void)selectionDidChange:(id)arg1;
- (void)_setTextDocumentProxy:(id)arg1;
- (void)set_autosizeToCurrentKeyboard:(_Bool)arg1;
- (id)_extensionContext;
- (_Bool)_shouldForwardSystemLayoutFittingSizeChanges;
- (void)proceedShouldReturnIfPossibleForASP;
- (void)handleInputModeListFromView:(id)arg1 withEvent:(id)arg2;
- (void)returnToPreviousInputMode;
- (void)requestSupplementaryLexiconWithCompletion:(CDUnknownBlockType)arg1;

@end
