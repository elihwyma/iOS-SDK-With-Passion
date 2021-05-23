/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSString, WFHomeManager;

@protocol WFAutomationTypeChooserViewControllerDelegate;

@interface WFAutomationTypeChooserViewController : UITableViewController

{
    id <WFAutomationTypeChooserViewControllerDelegate> _delegate;
    WFHomeManager *_homeManager;
}

@property (nonatomic, readonly) WFHomeManager *homeManager;
@property (weak, nonatomic) id <WFAutomationTypeChooserViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)automationTypeForHomeManager:(id)arg1;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)isModalInPresentation;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)initWithHomeManager:(id)arg1;
- (void)choosePersonalAutomation:(id)arg1;
- (void)chooseHomeAutomation:(id)arg1;

@end
