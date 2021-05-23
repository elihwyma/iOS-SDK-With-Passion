/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSDate, NSDateFormatter, NSDictionary, NSString;

@protocol WFKnownNetworksViewControllerDelegate;

@interface WFKnownNetworkDetailsViewController : UITableViewController

{
    _Bool _isHidden;
    NSString *_ssid;
    id <WFKnownNetworksViewControllerDelegate> _knownNetworksDelegate;
    NSString *_securityType;
    NSString *_password;
    NSDate *_dateAdded;
    NSDate *_dateLastJoined;
    NSDictionary *_scoreDict;
    NSArray *_geoTagsArray;
    NSDateFormatter *_dateFormatter;
}

@property (nonatomic) _Bool isHidden;
@property (retain, nonatomic) NSString *securityType;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSDate *dateAdded;
@property (retain, nonatomic) NSDate *dateLastJoined;
@property (retain, nonatomic) NSDictionary *scoreDict;
@property (retain, nonatomic) NSArray *geoTagsArray;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (copy, nonatomic) NSString *ssid;
@property (weak, nonatomic) id <WFKnownNetworksViewControllerDelegate> knownNetworksDelegate;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
