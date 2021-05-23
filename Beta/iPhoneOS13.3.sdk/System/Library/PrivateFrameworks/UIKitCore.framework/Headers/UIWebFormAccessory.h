/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputView.h>

@class UIBarButtonItem, UIBarButtonItemGroup, UISegmentedControl, UIToolbar;

@protocol UIWebFormAccessoryDelegate;

@interface UIWebFormAccessory : UIInputView

{
    UIToolbar *_leftToolbar;
    UIToolbar *_rightToolbar;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_flexibleSpaceItem;
    UIBarButtonItem *_previousItem;
    UIBarButtonItem *_nextItem;
    UIBarButtonItem *_nextPreviousSpacer;
    UIBarButtonItem *_autofillSpacer;
    UIBarButtonItemGroup *_buttonGroupAutoFill;
    UIBarButtonItemGroup *_buttonGroupNavigation;
    _Bool _usesUCB;
    UISegmentedControl *_tab;
    UIBarButtonItem *_autofill;
    UIBarButtonItem *_clearButton;
    id <UIWebFormAccessoryDelegate> delegate;
}

@property (retain, nonatomic) UISegmentedControl *_tab;
@property (retain, nonatomic) UIBarButtonItem *_autofill;
@property (retain, nonatomic) UIBarButtonItem *_clearButton;
@property (nonatomic) id <UIWebFormAccessoryDelegate> delegate;
@property (nonatomic, getter=isNextEnabled) _Bool nextEnabled;
@property (nonatomic, getter=isPreviousEnabled) _Bool previousEnabled;

+ (id)toolbarWithItems:(id)arg1;

- (void)dealloc;
- (void)layoutSubviews;
- (void)_setRenderConfig:(id)arg1;
- (void)autoFill:(id)arg1;
- (void)_previousTapped:(id)arg1;
- (void)_nextTapped:(id)arg1;
- (void)initForUCB:(id)arg1;
- (void)done:(id)arg1;
- (void)_updateFrame;
- (void)_orientationDidChange:(id)arg1;
- (void)_refreshAutofillPresentation;
- (void)_applyTreatmentToAutoFillLabel;
- (id)_autoFillButton;
- (void)showAutoFillButtonWithTitle:(id)arg1;
- (void)clear:(id)arg1;
- (id)initWithInputAssistantItem:(id)arg1;
- (void)hideAutoFillButton;
- (void)showAutoFillButton;
- (void)setClearVisible:(_Bool)arg1;
- (void)setNextPreviousItemsVisible:(_Bool)arg1;

@end
