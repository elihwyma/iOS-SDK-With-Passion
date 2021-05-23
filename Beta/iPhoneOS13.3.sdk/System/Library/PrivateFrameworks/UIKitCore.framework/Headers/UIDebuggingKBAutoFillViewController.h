/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UITableView;

__attribute__((visibility("hidden")))
@interface UIDebuggingKBAutoFillViewController : UIViewController <Swift>

{
    UITableView *_tableView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)autoFillTestGroundTruthGenerationViewController:(id)arg1 didFinishWithResult:(id)arg2;
- (id)_getTopMostViewControllerInWindow:(id)arg1;
- (id)_formTypeFileName:(long long)arg1;
- (void)_archiveTopMostViewControllerForAutoFillTest;

@end
