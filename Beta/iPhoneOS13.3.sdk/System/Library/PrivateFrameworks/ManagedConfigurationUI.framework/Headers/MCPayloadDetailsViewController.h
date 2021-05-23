/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewController.h>

@class MCPayload, MCPayloadInfo, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MCPayloadDetailsViewController : UITableViewController

{
    MCPayload *_payload;
    MCPayloadInfo *_payloadInfo;
    NSArray *_keyValueSections;
}

@property (retain, nonatomic) MCPayload *payload;
@property (retain, nonatomic) MCPayloadInfo *payloadInfo;
@property (retain, nonatomic) NSArray *keyValueSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPayload:(id)arg1;
- (void)_setup;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (_Bool)canBeShownFromSuspendedState;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)initWithPayloadInfo:(id)arg1;
- (void)setTitle:(id)arg1 keyValueSections:(id)arg2;

@end
