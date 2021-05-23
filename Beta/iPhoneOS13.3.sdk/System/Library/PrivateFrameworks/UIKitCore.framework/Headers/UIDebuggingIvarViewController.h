/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewController.h>

@class NSObject;

__attribute__((visibility("hidden")))
@interface UIDebuggingIvarViewController : UITableViewController

{
    NSObject *_inspectedObject;
}

@property (weak, nonatomic) NSObject *inspectedObject;

- (id)init;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)prepareForDisplayAsTopLevelDebuggingViewController;
- (id)_ivarForIndexPath:(id)arg1;
- (Class)_classForTableSection:(long long)arg1;
- (id)_ivarsForInspectedObjectInClass:(Class)arg1;
- (id)_classHierarchyForInspectedObject;

@end
