/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString, UIAlertController, _UIAlertControllerShimPresenter;

@protocol UIActionSheetDelegate;

@interface UIActionSheet : UIView

{
    UIAlertController *_alertController;
    _UIAlertControllerShimPresenter *_presenter;
    UIActionSheet *_retainedSelf;
    NSMutableArray *_actions;
    long long _cancelIndex;
    long long _firstOtherButtonIndex;
    long long _destructiveButtonIndex;
    long long _actionSheetStyle;
    _Bool _hasPreparedAlertActions;
    _Bool _isPresented;
    _Bool _alertControllerShouldDismiss;
    _Bool _handlingAlertActionShouldDismiss;
    _Bool _dismissingAlertController;
    id <UIActionSheetDelegate> _delegate;
    id _context;
}

@property (retain, nonatomic) id context;
@property (weak, nonatomic) id <UIActionSheetDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long actionSheetStyle;
@property (nonatomic, readonly) long long numberOfButtons;
@property (nonatomic) long long cancelButtonIndex;
@property (nonatomic) long long destructiveButtonIndex;
@property (nonatomic, readonly) long long firstOtherButtonIndex;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)subtitle;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_titleLabel;
- (long long)addButtonWithTitle:(id)arg1;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
- (void)showInView:(id)arg1;
- (void)_setIsPresented:(_Bool)arg1;
- (void)_didPresent;
- (void)_showFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_dismissForTappedIndex:(long long)arg1;
- (_Bool)_prepareToDismissForTappedIndex:(long long)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_prepareAlertActions;
- (id)_alertController;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)buttonTitleAtIndex:(long long)arg1;
- (void)showFromToolbar:(id)arg1;
- (void)showFromTabBar:(id)arg1;
- (void)showFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;
- (void)setBodyText:(id)arg1;
- (id)bodyText;
- (void)setTaglineText:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(long long)arg5 animated:(_Bool)arg6;
- (void)_setAttributedTitleString:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;

@end
