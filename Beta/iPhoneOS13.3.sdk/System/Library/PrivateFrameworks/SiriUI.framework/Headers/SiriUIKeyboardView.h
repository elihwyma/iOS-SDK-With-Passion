/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIInputView.h>

@class NSArray, NSString, SiriUIAudioRoutePickerButton, SiriUIContentButton, SiriUIHelpButton, UITextField;

@protocol SiriUIKeyboardViewDelegate;

@interface SiriUIKeyboardView : UIInputView

{
    SiriUIHelpButton *_helpButton;
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    SiriUIContentButton *_reportBugButton;
    double _interKeyboardAccessoryViewPadding;
    double _verticalCompensation;
    NSArray *_originalInstalledLanguageIdentifiers;
    UITextField *_textField;
    id <SiriUIKeyboardViewDelegate> _delegate;
}

@property (retain, nonatomic) UITextField *textField;
@property (weak, nonatomic) id <SiriUIKeyboardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_textFieldFont;
+ (double)_textFieldHeight;
+ (double)_keyboardAccessoryViewHeight;
+ (id)inputAccessoryViewBackgroundColor;
+ (double)_paddingBetweenKeyboardAndInputAccessoryViewWhenMinimized:(_Bool)arg1;
+ (double)heightForWidthSizeClass:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (void)setText:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)safeAreaInsetsDidChange;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 inputViewStyle:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (struct CGRect)_defaultFrame;
- (id)_createHelpButton:(struct CGRect)arg1;
- (id)_createTextFieldWithFrame:(struct CGRect)arg1;
- (void)_configureReportBugButton;
- (void)_helpButtonTapped:(id)arg1;
- (void)_helpButtonLongPressed:(id)arg1;
- (void)_audioRouteButtonTapped:(id)arg1;
- (void)_configureAudioRoutePickerForAccessibility;
- (_Bool)_showsReportBugButton;
- (void)_createReportBugButtonWithTemplateImage:(id)arg1;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reportBugButtonTapped;
- (void)_reportBugButtonLongPressed;
- (void)_configureReportButtonForAccessibility;
- (void)_undoTextFieldEdit:(id)arg1;
- (double)_visibleHeightFromNotification:(id)arg1;
- (void)setShowAudioRoutePicker:(_Bool)arg1;
- (void)setAudioRoutePickerBluetoothOn:(_Bool)arg1;

@end
