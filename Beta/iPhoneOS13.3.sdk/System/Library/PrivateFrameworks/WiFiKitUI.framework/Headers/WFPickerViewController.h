/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UITableView;

@protocol WFNetworkListDelegate, WFNetworkListRecord;

@interface WFPickerViewController : UIViewController

{
    _Bool showOtherNetwork;
    _Bool _dismissed;
    _Bool _showCurrentNetworkTop;
    float _currentNetworkScaledRSSI;
    id <WFNetworkListRecord> _currentNetwork;
    long long _currentNetworkState;
    long long _deviceCapability;
    UITableView *_tableView;
    NSArray *_sortedNetworks;
    id <WFNetworkListDelegate> _listDelegate;
}

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *sortedNetworks;
@property (weak) id <WFNetworkListDelegate> listDelegate;
@property (nonatomic) _Bool showCurrentNetworkTop;
@property (nonatomic) _Bool dismissed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool showOtherNetwork;
@property float currentNetworkScaledRSSI;
@property (retain) id <WFNetworkListRecord> currentNetwork;
@property long long currentNetworkState;
@property unsigned long long currentNetworkSignalBars;
@property (nonatomic) long long deviceCapability;
@property (copy, nonatomic) NSString *currentNetworkSubtitle;
@property (nonatomic) _Bool disabled;
@property (nonatomic) _Bool userAutoJoinEnabled;

- (id)init;
- (void)refresh;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)setNetworks:(id)arg1;
- (void)powerStateDidChange:(_Bool)arg1;
- (_Bool)shouldPromptWhenPersonalHotspotIsEnabled;
- (_Bool)shouldPromptWhenCarPlaySessionIsActive;
- (id)_cellForNetworkRecord:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;

@end
