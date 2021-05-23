/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@class AKAuthorizationScopeChoices, NSString;

@interface AKAuthorizationEmailEditPaneViewController

{
    NSString *_applicationName;
}

@property (nonatomic, readonly) AKAuthorizationScopeChoices *editableScopeChoices;
@property (retain, nonatomic) NSString *applicationName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 anonymousCellForRow:(unsigned long long)arg2;
- (id)tableView:(id)arg1 emailCellForRow:(unsigned long long)arg2;

@end
