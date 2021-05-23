/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UITableViewController.h>

#import <ActionKitUI/Swift-Protocol.h>

@class NSString, WFContentItem;

__attribute__((visibility("hidden")))
@interface WFContentItemViewController : UITableViewController <Swift>

{
    WFContentItem *_contentItem;
}

@property (nonatomic, readonly) WFContentItem *contentItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)initWithContentItem:(id)arg1;

@end
