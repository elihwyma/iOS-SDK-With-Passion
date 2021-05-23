/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCMMInvitationsDataSource, PXCMMInvitationsDataSourceManager;

@interface PXDebugCMMIncomingTableViewController : UITableViewController <Swift>

{
    PXCMMInvitationsDataSourceManager *_dataSourceManager;
    PXCMMInvitationsDataSource *_dataSource;
}

@property (retain, nonatomic) PXCMMInvitationsDataSource *dataSource;
@property (nonatomic, readonly) PXCMMInvitationsDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithDataSourceManager:(id)arg1;

@end
