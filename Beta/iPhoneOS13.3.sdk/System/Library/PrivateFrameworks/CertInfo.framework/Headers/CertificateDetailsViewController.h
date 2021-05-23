/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UITableViewController.h>

@class NSArray;

@interface CertificateDetailsViewController : UITableViewController

{
    id _certificateTrust;
    NSArray *_keyValueSections;
    NSArray *_keyValueSectionTitles;
}

@property (retain, nonatomic) id certificateTrust;
@property (retain, nonatomic) NSArray *keyValueSections;
@property (retain, nonatomic) NSArray *keyValueSectionTitles;

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
- (void)preferredContentSizeChanged:(id)arg1;
- (void)setCertificateProperties:(id)arg1;
- (id)initWithCertificateProperties:(id)arg1;

@end
