/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, UIColor, UIResponder, UIView, WFVariableShortcutsBar, WFVariableShortcutsTray, WFVariableSuggester;

@protocol WFInputViewMutable, WFVariableProvider, WFVariableTypingContext, WFVariableUIDelegate;

@interface WFVariableInputCoordinator : NSObject

{
    _Bool _showsDoneButton;
    _Bool _undocked;
    UIResponder<WFInputViewMutable> *_responder;
    id <WFVariableTypingContext> _variableTypingContext;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    NSSet *_allowedVariableTypes;
    NSString *_customButtonTitle;
    UIView *_inputViewWhenTrayCollapsed;
    UIColor *_tintColor;
    CDUnknownBlockType _variableBlock;
    CDUnknownBlockType _customButtonBlock;
    WFVariableShortcutsBar *_shortcutsBar;
    WFVariableShortcutsTray *_shortcutsTray;
    WFVariableSuggester *_variableSuggester;
    struct CGRect _previousFrame;
}

@property (retain, nonatomic) WFVariableShortcutsBar *shortcutsBar;
@property (retain, nonatomic) WFVariableShortcutsTray *shortcutsTray;
@property (retain, nonatomic) WFVariableSuggester *variableSuggester;
@property (nonatomic) _Bool undocked;
@property (nonatomic) struct CGRect previousFrame;
@property (weak, nonatomic) UIResponder<WFInputViewMutable> *responder;
@property (weak, nonatomic) id <WFVariableTypingContext> variableTypingContext;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic) id <WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) _Bool showsDoneButton;
@property (copy, nonatomic) NSString *customButtonTitle;
@property (weak, nonatomic) UIView *inputViewWhenTrayCollapsed;
@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) CDUnknownBlockType variableBlock;
@property (copy, nonatomic) CDUnknownBlockType customButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)availableVariablesDidChange;
- (void)variableSuggesterSuggestionsDidChange:(id)arg1;
- (_Bool)showsUserDefinedVariables;
- (id)specialVariables;
- (void)variableShortcutsTray:(id)arg1 didSelectVariable:(id)arg2;
- (void)variableShortcutsTrayDidSelectMagicVariable:(id)arg1;
- (void)shortcutsBarDidDismiss:(id)arg1;
- (void)shortcutsBarDidOpenTray:(id)arg1;
- (void)shortcutsBar:(id)arg1 didSelectVariable:(id)arg2;
- (void)shortcutsBarDidSelectMagicVariable:(id)arg1;
- (void)shortcutsBarDidSelectCustomButton:(id)arg1;
- (_Bool)showsMagicVariables;
- (void)updateInputViews;
- (void)revealTray;
- (void)collapseTrayAnimated:(_Bool)arg1;
- (void)showActionOutputPicker;
- (void)reloadCurrentVariables;

@end
