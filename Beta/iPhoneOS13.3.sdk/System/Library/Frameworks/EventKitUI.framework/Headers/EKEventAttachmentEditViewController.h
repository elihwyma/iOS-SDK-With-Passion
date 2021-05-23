/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEditItemViewController.h>

@class NSArray, NSString, UITableView;

@protocol EKEventAttachmentEditViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentEditViewController : EKEditItemViewController

{
    UITableView *_table;
    NSArray *_cellControllers;
    id <EKEventAttachmentEditViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <EKEventAttachmentEditViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 attachments:(id)arg2 sourceIsManaged:(_Bool)arg3;

@end
