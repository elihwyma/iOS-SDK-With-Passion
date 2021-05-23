/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MCNewCertificateDetailsViewController : UITableViewController

{
    id _certificateTrust;
    NSArray *_keyValueSections;
    NSArray *_keyValueSectionTitles;
}

@property (retain, nonatomic) id certificateTrust;
@property (retain, nonatomic) NSArray *keyValueSections;
@property (retain, nonatomic) NSArray *keyValueSectionTitles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithCertificate:(struct __SecCertificate *)arg1;
- (id)initWithTrust:(struct __SecTrust *)arg1;
- (void)_setup;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (_Bool)canBeShownFromSuspendedState;
- (void)preferredContentSizeChanged:(id)arg1;
- (id)initWithCertificateProperties:(id)arg1;

@end
