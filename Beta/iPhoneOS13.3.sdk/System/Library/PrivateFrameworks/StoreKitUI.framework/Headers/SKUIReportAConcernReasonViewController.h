/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString, SKUIReportAConcernConfiguration, SKUIReportAConcernReasonDataSource, UITableView;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernReasonViewController : UIViewController

{
    CDUnknownBlockType _completion;
    SKUIReportAConcernConfiguration *_configuration;
    SKUIReportAConcernReasonDataSource *_dataSource;
    UITableView *_tableView;
}

@property (retain, nonatomic) SKUIReportAConcernConfiguration *configuration;
@property (retain, nonatomic) SKUIReportAConcernReasonDataSource *dataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancelPressed:(id)arg1;

@end
