/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewController.h>

@class NSLayoutConstraint, NSString, UILexicon, UIView, UIViewController;

@protocol UIRecentsInputViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIRecentsInputViewController : UITableViewController

{
    _Bool _canManageList;
    id <UIRecentsInputViewControllerDelegate> _recentInputDelegate;
    UILexicon *_recentInputs;
    long long _containingEffectStyle;
    UIView *_customHeaderView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSString *_previouslyUsedString;
    NSString *_clearAllString;
    NSString *_enterNewString;
    UIView *_headerView;
    UIView *_headerContainerView;
    UIViewController *_headerContainerViewController;
}

@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSString *previouslyUsedString;
@property (retain, nonatomic) NSString *clearAllString;
@property (retain, nonatomic) NSString *enterNewString;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *headerContainerView;
@property (retain, nonatomic) UIViewController *headerContainerViewController;
@property (weak, nonatomic) id <UIRecentsInputViewControllerDelegate> recentInputDelegate;
@property (retain, nonatomic) UILexicon *recentInputs;
@property (nonatomic) long long containingEffectStyle;
@property (nonatomic) _Bool canManageList;
@property (retain, nonatomic) UIView *customHeaderView;

- (id)preferredFocusedView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (void)ensureConstraints;
- (void)updateTableViewWidth;
- (void)_overrideTraitCollectionForHeaderViewController;
- (void)_delete:(id)arg1;
- (void)didSelectButtonAtIndexPath:(id)arg1;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (id)_uiktest_UnfocusedCellLabel;
- (id)_uiktest_FocusedCellLabel;
- (id)_uiktest_UnfocusedCellBackgroundView;

@end
