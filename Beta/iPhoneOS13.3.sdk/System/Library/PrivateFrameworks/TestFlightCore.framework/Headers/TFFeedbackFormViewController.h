/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <UIKit/UIViewController.h>

@class TFFeedbackFormPresenter, TFFeedbackFormViewDataSource, UIActivityIndicatorView, UIBarButtonItem, UITableView;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormViewController : UIViewController

{
    TFFeedbackFormPresenter *_presenter;
    TFFeedbackFormViewDataSource *_viewDataSource;
    UITableView *_tableView;
    UIBarButtonItem *_submitButtonItem;
    UIBarButtonItem *_activityItem;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (nonatomic, readonly) TFFeedbackFormViewDataSource *viewDataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic, readonly) UIBarButtonItem *submitButtonItem;
@property (nonatomic, readonly) UIBarButtonItem *activityItem;
@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, readonly) TFFeedbackFormPresenter *presenter;

- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithPresenter:(id)arg1;
- (void)registerNotifications;
- (void)submitButtonPressed:(id)arg1;
- (void)showSubmitButtonForSubmissionPendingState:(_Bool)arg1;
- (void)unregisterNotifications;
- (void)adjustContentOffsetForKeyboardNotification:(id)arg1;
- (void)setNavigationItemTitle:(id)arg1;
- (void)prepareForEntryType:(unsigned long long)arg1;
- (void)reloadEntryGroupsAtIndices:(id)arg1;
- (void)reloadEntriesAtIndexPaths:(id)arg1;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2;

@end
