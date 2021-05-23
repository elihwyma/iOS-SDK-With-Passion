/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSBaseTemplateViewController.h>

@class CPListTemplate, CPSSectionedDataSource, CPSTableView, NSIndexPath, NSString, NSTimer, UIActivityIndicatorView;

@interface CPSListTemplateViewController : CPSBaseTemplateViewController

{
    CPSSectionedDataSource *_dataSource;
    NSIndexPath *_currentSpinningIndexPath;
    NSIndexPath *_nextSpinningIndexPath;
    UIActivityIndicatorView *_spinnerView;
    unsigned long long _spinnerState;
    NSTimer *_spinnerStartTimer;
    NSTimer *_spinnerTimeoutTimer;
    CPSTableView *_tableView;
}

@property (retain, nonatomic) CPSSectionedDataSource *dataSource;
@property (copy, nonatomic) NSIndexPath *currentSpinningIndexPath;
@property (copy, nonatomic) NSIndexPath *nextSpinningIndexPath;
@property (retain, nonatomic) UIActivityIndicatorView *spinnerView;
@property (nonatomic) unsigned long long spinnerState;
@property (retain, nonatomic) NSTimer *spinnerStartTimer;
@property (retain, nonatomic) NSTimer *spinnerTimeoutTimer;
@property (nonatomic, readonly) CPListTemplate *listTemplate;
@property (retain, nonatomic) CPSTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)setButton:(id)arg1 enabled:(_Bool)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSections:(id)arg1;
- (void)_viewDidLoad;
- (id)initWithListTemplate:(id)arg1 templateDelegate:(id)arg2;
- (void)_startSpinnerTimerFired:(id)arg1 indexPath:(id)arg2;
- (void)_timeoutSpinnerFired:(id)arg1 indexPath:(id)arg2;
- (void)_addSpinnerToIndexPath:(id)arg1;
- (void)_cellSelectionCompleted:(id)arg1;
- (void)_cancelScheduledLoadingSpinnerForIndexPath:(id)arg1;
- (void)_scheduleLoadingSpinnerForIndexPath:(id)arg1;
- (void)setButton:(id)arg1 hidden:(_Bool)arg2;

@end
