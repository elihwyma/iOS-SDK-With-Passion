/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIInputViewController, UIKBRenderConfig, UIKeyboard, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : NSObject

{
    _Bool _isSplit;
    double _splitHeightDelta;
    UIResponder *_restorableResponder;
    UIKBRenderConfig *_restorableRenderConfig;
    UIResponder *_accessoryViewNextResponder;
    _Bool _restoreUsingBecomeFirstResponder;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    UIView *_inputAssistantView;
    UIInputViewController *_inputViewController;
    UIInputViewController *_accessoryViewController;
    UIInputViewController *_assistantViewController;
    _Bool _isNullInputView;
    _Bool _isCustomInputView;
    _Bool _isRemoteKeyboard;
    struct CGRect _inputAssistantViewBounds;
}

@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAssistantView;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (retain, nonatomic) UIInputViewController *inputViewController;
@property (retain, nonatomic) UIInputViewController *assistantViewController;
@property (retain, nonatomic) UIInputViewController *accessoryViewController;
@property (nonatomic, readonly) UIView *layeringView;
@property (nonatomic, readonly) _Bool visible;
@property (nonatomic, readonly) _Bool usesKeyClicks;
@property (nonatomic, readonly) UIKeyboard *keyboard;
@property (nonatomic, readonly) struct CGRect inputAccessoryViewBounds;
@property (nonatomic, readonly) struct CGRect inputAssistantViewBounds;
@property (nonatomic, readonly) struct CGRect inputViewBounds;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) _Bool supportsSplit;
@property (nonatomic, readonly) _Bool isSplit;
@property (nonatomic, readonly) _Bool inputViewKeyboardCanSplit;
@property (weak, nonatomic) UIResponder *restorableResponder;
@property (retain, nonatomic) UIKBRenderConfig *restorableRenderConfig;
@property (weak, nonatomic) UIResponder *accessoryViewNextResponder;
@property (nonatomic, readonly) _Bool isInputViewPlaceholder;
@property (nonatomic, readonly) _Bool isInputAssistantViewPlaceholder;
@property (nonatomic, readonly) _Bool isInputAccessoryViewPlaceholder;
@property (nonatomic, readonly) _Bool _inputViewIsSplit;
@property (nonatomic) double splitHeightDelta;
@property (nonatomic, readonly) UIView *splitExemptSubview;
@property (nonatomic) _Bool restoreUsingBecomeFirstResponder;
@property (nonatomic) _Bool isCustomInputView;
@property (nonatomic) _Bool isRemoteKeyboard;
@property (nonatomic, readonly) _Bool isNullInputView;

+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1 assistantView:(id)arg2;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1;
+ (id)inputSetWithOriginalInputSet:(id)arg1 duplicateInputView:(_Bool)arg2 duplicateInputAccessoryView:(_Bool)arg3 duplicateInputAssistantView:(_Bool)arg4;
+ (id)emptyInputSet;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)_inputViewSetSupportsSplit;
- (void)refreshPresentation;
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(_Bool)arg4;
- (void)_setRenderConfig:(id)arg1;
- (id)_themableInputAccessoryView;
- (_Bool)_inputViewIsVisible;
- (_Bool)_isKeyboard;
- (long long)keyboardOrientation:(id)arg1;
- (_Bool)_inputAccessoryViewSupportsSplit;
- (_Bool)_isFullscreen;
- (_Bool)_inputViewSupportsSplit;
- (_Bool)_actLikeInputAccessoryViewSupportsSplit;
- (struct CGRect)_leftInputViewSetFrame;
- (struct CGRect)_rightInputViewSetFrame;
- (id)_splittableInputAccessoryView;
- (_Bool)__isCKAccessoryView;
- (_Bool)canAnimateToInputViewSet:(id)arg1;
- (void)inheritNullState:(id)arg1;
- (void)setKeyboardAssistantBar:(id)arg1;
- (id)inputSetWithInputAccessoryViewOnly;
- (id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1;
- (id)normalizePlaceholders;
- (void)_forceRestoreUsingBecomeFirstResponder:(_Bool)arg1;
- (_Bool)containsView:(id)arg1;
- (_Bool)containsResponder:(id)arg1;
- (_Bool)isStrictSupersetOfViewSet:(id)arg1;
- (_Bool)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2;
- (_Bool)hierarchyContainsView:(id)arg1;
- (_Bool)setAccessoryViewVisible:(_Bool)arg1 delay:(double)arg2;
- (_Bool)_accessorySuppressesShadow;
- (void)_beginSplitTransitionIfNeeded;
- (void)_endSplitTransitionIfNeeded;
- (void)_setSplitProgress:(double)arg1;

@end
