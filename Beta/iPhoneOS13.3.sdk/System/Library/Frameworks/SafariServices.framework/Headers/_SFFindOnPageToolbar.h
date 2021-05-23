/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIInputView.h>

@class NSArray, NSString, NSTimer, UIBarButtonItem, UILabel, UITextField, UIToolbar, _SFFindOnPageInputBar;

@protocol _SFFindOnPageToolbarDelegate;

@interface _SFFindOnPageToolbar : UIInputView

{
    UIToolbar *_toolbar;
    UIBarButtonItem *_previousButtonItem;
    UIBarButtonItem *_nextButtonItem;
    _SFFindOnPageInputBar *_inputBar;
    UIBarButtonItem *_doneBarButtonItem;
    NSArray *_toolbarItems;
    id <_SFFindOnPageToolbarDelegate> _findDelegate;
    NSTimer *_textChangedUpdateTimer;
    UILabel *_inFieldMatchLabel;
    _Bool _editing;
    _Bool _useBottomInset;
    _Bool _usesNarrowLayout;
    NSString *_searchText;
}

@property (nonatomic, readonly) UITextField *inputField;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) _Bool usesNarrowLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1;
- (void)_done;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)leftContentViewSize;
- (struct CGSize)rightContentViewSize;
- (void)safeAreaInsetsDidChange;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)updateUI;
- (void)dismiss:(id)arg1;
- (void)previous:(id)arg1;
- (void)next:(id)arg1;
- (double)_accessoryViewHeight;
- (struct CGRect)_toolbarFrame;
- (void)_initializeToolbarItems;
- (double)_toolbarVerticalInset;
- (id)_matchLabelText;
- (_Bool)_updateEditing:(_Bool)arg1;
- (void)_doUpdateSearchText;
- (_Bool)_keyboardIsSplit;

@end
