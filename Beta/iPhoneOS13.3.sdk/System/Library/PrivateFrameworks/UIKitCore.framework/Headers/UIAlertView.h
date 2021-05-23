/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString, UIAlertController, UIViewController, _UIAlertControllerShimPresenter;

@interface UIAlertView : UIView

{
    UIAlertController *_alertController;
    _UIAlertControllerShimPresenter *_presenter;
    id _retainedSelf;
    NSMutableArray *_actions;
    long long _cancelIndex;
    long long _defaultButtonIndex;
    long long _firstOtherButtonIndex;
    NSString *_message;
    NSString *_subtitle;
    long long _alertViewStyle;
    _Bool _hasPreparedAlertActions;
    _Bool _isPresented;
    _Bool _alertControllerShouldDismiss;
    _Bool _handlingAlertActionShouldDismiss;
    _Bool _dismissingAlertController;
    id _delegate;
    id _context;
    UIViewController *_externalViewControllerForPresentation;
}

@property (retain, nonatomic) id context;
@property (nonatomic) long long defaultButtonIndex;
@property (nonatomic) long long numberOfRows;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic, getter=_externalViewControllerForPresentation, setter=_setExternalViewControllerForPresentation:) UIViewController *externalViewControllerForPresentation;
@property (retain, nonatomic) NSString *bodyText;
@property (nonatomic) _Bool groupsTextFields;
@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic, readonly) long long numberOfButtons;
@property (nonatomic) long long cancelButtonIndex;
@property (nonatomic, readonly) long long firstOtherButtonIndex;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;
@property (nonatomic) long long alertViewStyle;

+ (id)_remoteAlertViewWithBlock:(CDUnknownBlockType)arg1;
+ (id)_alertViewForSessionWithRemoteViewController:(id)arg1;
+ (id)_alertViewForWindow:(id)arg1;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)titleLabel;
- (id)window;
- (id)_titleLabel;
- (long long)addButtonWithTitle:(id)arg1;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
- (void)_setIsPresented:(_Bool)arg1;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_dismissForTappedIndex:(long long)arg1;
- (_Bool)_prepareToDismissForTappedIndex:(long long)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_prepareAlertActions;
- (id)_alertController;
- (id)buttonTitleAtIndex:(long long)arg1;
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (void)_updateMessageAndSubtitle;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (int)textFieldCount;
- (long long)_maximumNumberOfTextFieldsForCurrentStyle;
- (void)_textDidChangeInTextField:(id)arg1;
- (id)_addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (void)_updateFirstOtherButtonEnabledState;
- (id)textField;
- (void)_showAnimated:(_Bool)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void)_updateButtonTitle:(id)arg1 buttonIndex:(unsigned long long)arg2;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (int)buttonCount;
- (id)textFieldAtIndex:(long long)arg1;
- (void)show;
- (_Bool)_isAnimating;
- (struct CGSize)backgroundSize;
- (void)_setAccessoryView:(id)arg1;
- (void)dismiss;
- (id)keyboard;
- (id)tableView;
- (id)_addButtonWithTitle:(id)arg1;
- (void)setTableShouldShowMinimumContent:(_Bool)arg1;

@end
