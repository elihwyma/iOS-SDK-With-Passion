/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUTableViewController.h>

@interface SUReportConcernViewController : SUTableViewController

{
    _Bool _animatingKeyboard;
    unsigned long long _itemIdentifier;
    struct UIEdgeInsets _originalTableInsets;
}

@property (nonatomic, readonly) unsigned long long itemIdentifier;

- (void)loadView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)_cancel:(id)arg1;
- (id)initWithItemIdentifier:(unsigned long long)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (_Bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (void)_submit:(id)arg1;
- (void)_hideKeyboardDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_showKeyboardDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_fetchConcerns;

@end
