/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString, SKUIReportAConcernConfiguration, SKUIReportAConcernDetailsDataSource, SKUIReportAConcernMetadata, UITableView;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernDetailsViewController : UIViewController

{
    CDUnknownBlockType _completion;
    SKUIReportAConcernMetadata *_metadata;
    SKUIReportAConcernConfiguration *_configuration;
    SKUIReportAConcernDetailsDataSource *_dataSource;
    UITableView *_tableView;
    double _keyboardHeight;
}

@property (retain, nonatomic) SKUIReportAConcernConfiguration *configuration;
@property (retain, nonatomic) SKUIReportAConcernDetailsDataSource *dataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) double keyboardHeight;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) SKUIReportAConcernMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)submitPressed:(id)arg1;
- (id)_detailsText;
- (double)_detailsCellHeight;

@end
