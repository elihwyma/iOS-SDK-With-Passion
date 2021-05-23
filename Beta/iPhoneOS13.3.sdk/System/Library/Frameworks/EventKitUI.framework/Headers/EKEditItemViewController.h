/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class EKUIRecurrenceAlertController;

@protocol EKEditItemViewControllerDelegate, EKStyleProvider;

__attribute__((visibility("hidden")))
@interface EKEditItemViewController : UIViewController

{
    struct CGRect _initialFrame;
    unsigned long long _subitem;
    _Bool _modal;
    id <EKStyleProvider> _styleProvider;
    id <EKEditItemViewControllerDelegate> _editDelegate;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    _Bool _showsDoneButton;
}

@property (nonatomic) unsigned long long subitem;
@property (nonatomic) _Bool modal;
@property (nonatomic) _Bool showsDoneButton;
@property (weak, nonatomic) id <EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) _Bool presentModally;
@property (nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) _Bool useCustomBackButton;

- (void)cancel;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (double)marginForTableView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;
- (void)popIfNonModal;
- (void)saveAndDismissWithExtremePrejudice;
- (void)setCell:(id)arg1 checked:(_Bool)arg2;
- (_Bool)fitsPopoverWhenKeyboardActive;
- (void)saveAndDismiss;
- (_Bool)validateAllowingAlert:(_Bool)arg1;
- (void)_saveAndDismissWithForce:(_Bool)arg1;

@end
