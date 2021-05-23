/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUActivityLoadingView, HUDataAnalyticsModuleController, NSString;

@protocol HFMediaProfileContainer;

@interface HUDataAnalyticsLogListViewController : HUItemTableViewController

{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HUActivityLoadingView *_activityLoadingView;
    HUDataAnalyticsModuleController *_analyticsModuleController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HUActivityLoadingView *activityLoadingView;
@property (nonatomic, readonly) HUDataAnalyticsModuleController *analyticsModuleController;
@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMediaProfileContainer:(id)arg1;
- (id)hu_preloadContent;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)itemModuleControllers;
- (void)dataAnalyticsModuleController:(id)arg1 didSelectItem:(id)arg2;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (void)_watchForReload;
- (void)_kickoffReload;
- (_Bool)bypassInitialItemUpdateReload;

@end
