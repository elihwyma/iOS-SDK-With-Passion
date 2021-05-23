/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableOrderedSet, NSOrderedSet, UIBarButtonItem;

@protocol WFContentClassesViewControllerDelegate;

@interface WFContentClassesViewController : UITableViewController

{
    id <WFContentClassesViewControllerDelegate> _delegate;
    NSOrderedSet *_contentClasses;
    NSMutableOrderedSet *_selectedClassesSet;
    UIBarButtonItem *_selectButtonItem;
}

@property (nonatomic, readonly) NSOrderedSet *contentClasses;
@property (nonatomic, readonly) NSMutableOrderedSet *selectedClassesSet;
@property (retain, nonatomic) UIBarButtonItem *selectButtonItem;
@property (weak, nonatomic) id <WFContentClassesViewControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *selectedClasses;

- (void)done;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSelectButton;
- (void)notifyChanged;
- (void)selectAction;
- (void)selectContentClasses:(id)arg1;

@end
