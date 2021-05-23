/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, UIBarButtonItem;

@interface WFDNSConfigViewController : UITableViewController

{
    CDUnknownBlockType _saveHandler;
    long long _originalDNSConfig;
    long long _dnsConfig;
    NSArray *_originalServers;
    NSMutableArray *_servers;
    NSArray *_originalDomains;
    NSMutableArray *_domains;
    UIBarButtonItem *_saveButton;
}

@property (nonatomic) long long originalDNSConfig;
@property (nonatomic) long long dnsConfig;
@property (retain, nonatomic) NSArray *originalServers;
@property (retain, nonatomic) NSMutableArray *servers;
@property (retain, nonatomic) NSArray *originalDomains;
@property (retain, nonatomic) NSMutableArray *domains;
@property (retain, nonatomic) UIBarButtonItem *saveButton;
@property (copy, nonatomic) CDUnknownBlockType saveHandler;

- (void)save:(id)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)initWithConfig:(id)arg1;
- (void)_updateSaveEnabled;
- (void)_addServerAtIndexPath:(id)arg1;
- (void)_addDomainAtIndexPath:(id)arg1;

@end
