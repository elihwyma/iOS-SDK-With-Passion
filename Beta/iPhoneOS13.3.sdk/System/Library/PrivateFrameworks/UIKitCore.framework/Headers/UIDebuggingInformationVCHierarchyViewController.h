/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationVCHierarchyViewController : UIViewController <Swift>

{
    NSArray *_data;
    UITableView *_tableView;
}

@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (id)getViewControllersRecursiveWithLevel:(int)arg1 forView:(id)arg2;

@end
