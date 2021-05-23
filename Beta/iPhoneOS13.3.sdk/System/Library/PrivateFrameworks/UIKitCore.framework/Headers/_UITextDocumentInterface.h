/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputViewControllerInterface.h>

@class NSString, NSUUID, TIDocumentState, TIKeyboardOutput, TITextInputTraits, UITextInputMode, UITextInputPasswordRules, _UIInputViewControllerOutput, _UIInputViewControllerState;

@protocol _UITextDocumentInterfaceDelegate;

__attribute__((visibility("hidden")))
@interface _UITextDocumentInterface : UIInputViewControllerInterface

{
    id <_UITextDocumentInterfaceDelegate> _delegate;
    _UIInputViewControllerState *_controllerState;
    _UIInputViewControllerOutput *_controllerOutput;
    TIKeyboardOutput *_keyboardOutput;
}

@property (retain, nonatomic, getter=_controllerState) _UIInputViewControllerState *controllerState;
@property (retain, nonatomic, getter=_controllerOutput) _UIInputViewControllerOutput *controllerOutput;
@property (nonatomic, readonly, getter=_documentState) TIDocumentState *documentState;
@property (nonatomic, readonly, getter=_textInputTraits) TITextInputTraits *textInputTraits;
@property (nonatomic, readonly, getter=_keyboardOutput) TIKeyboardOutput *keyboardOutput;
@property (nonatomic, getter=_delegate) id <_UITextDocumentInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) _Bool enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic, readonly) _Bool hasText;
@property (nonatomic, readonly) NSString *documentContextBeforeInput;
@property (nonatomic, readonly) NSString *documentContextAfterInput;
@property (nonatomic, readonly) NSString *selectedText;
@property (nonatomic, readonly) UITextInputMode *documentInputMode;
@property (copy, nonatomic, readonly) NSUUID *documentIdentifier;
@property (nonatomic, readonly) NSString *markedText;
@property (nonatomic, readonly) _Bool needsInputModeSwitchKey;

- (void)dealloc;
- (void)deleteBackward;
- (void)unmarkText;
- (void)insertText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setForwardingInterface:(id)arg1;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)_setPrimaryLanguage:(id)arg1;
- (void)_setShouldDismiss;
- (void)_setProceedShouldReturnIfPossibleForASP;
- (void)_setShouldAdvanceInputMode;
- (void)_setHasDictation:(_Bool)arg1;
- (void)_setInputModeList:(long long)arg1 touchBegan:(double)arg2 fromLocation:(struct CGPoint)arg3 updatePoint:(struct CGPoint)arg4;
- (void)_createControllerOutputIfNecessary;
- (void)_willPerformOutputOperation;
- (void)_didPerformOutputOperation;
- (void)adjustTextPositionByCharacterOffset:(long long)arg1;

@end
