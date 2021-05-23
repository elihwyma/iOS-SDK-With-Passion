/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UITableViewController.h>

@class NSArray, SLFacebookPostPrivacySetting, UINavigationItem;

@protocol SLFacebookAudienceViewControllerDelegate;

@interface SLFacebookAudienceTableViewController : UITableViewController

{
    NSArray *_privacySettings;
    SLFacebookPostPrivacySetting *_selectedSetting;
    id <SLFacebookAudienceViewControllerDelegate> _selectionDelegate;
    UINavigationItem *_navigationItem;
}

- (void)loadView;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)cancelButtonTapped:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (id)_privacySettingForIndexPath:(id)arg1;
- (void)setPrivacySettings:(id)arg1;
- (void)setCurrentPrivacySetting:(id)arg1;

@end
