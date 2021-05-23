/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSMutableSet, NSSet;

@protocol WFEmailContactsTableViewControllerDelegate;

@interface WFEmailContactsTableViewController : UITableViewController

{
    id <WFEmailContactsTableViewControllerDelegate> _delegate;
    NSSet *_allContacts;
    NSMutableSet *_selectedContacts;
    unsigned long long _type;
}

@property (retain, nonatomic) NSSet *allContacts;
@property (retain, nonatomic) NSMutableSet *selectedContacts;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id <WFEmailContactsTableViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 contacts:(id)arg2;

@end
