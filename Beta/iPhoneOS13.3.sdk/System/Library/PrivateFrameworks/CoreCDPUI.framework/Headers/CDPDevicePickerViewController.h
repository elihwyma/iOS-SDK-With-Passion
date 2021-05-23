/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <CoreCDPUI/CDPTableViewController.h>

@class NSArray, NSString, UIButton;

@protocol CDPDevicePickerDelegate;

@interface CDPDevicePickerViewController : CDPTableViewController

{
    NSArray *_devices;
    NSArray *_escapeOffers;
    id <CDPDevicePickerDelegate> _delegate;
    UIButton *_remoteApprovalButton;
}

@property (copy, nonatomic) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)heightForFooterInTableView:(id)arg1;
- (id)viewForFooterInTableView:(id)arg1;
- (id)initWithDevices:(id)arg1 delegate:(id)arg2;
- (id)escapeOffers;

@end
