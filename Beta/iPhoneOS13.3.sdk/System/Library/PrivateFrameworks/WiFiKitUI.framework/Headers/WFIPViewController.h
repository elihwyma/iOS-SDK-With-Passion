/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UITableView;

@interface WFIPViewController : UIViewController

{
    UITableView *_tableView;
    NSArray *_addresses;
    NSArray *_prefixes;
}

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *addresses;
@property (retain, nonatomic) NSArray *prefixes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithAddresses:(id)arg1 prefixLengths:(id)arg2;

@end
