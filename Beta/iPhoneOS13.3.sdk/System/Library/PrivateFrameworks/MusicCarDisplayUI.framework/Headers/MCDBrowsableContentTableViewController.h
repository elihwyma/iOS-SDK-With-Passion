/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIViewController.h>

@class CARSessionStatus, MCDNowPlayingButton, MCDPCContainer, MPWeakTimer, NSIndexPath, NSObject, NSString, UIAlertController, UITableView, UIView, _UIFilteredDataSource;

@protocol OS_dispatch_queue;

@interface MCDBrowsableContentTableViewController : UIViewController

{
    UITableView *_tableView;
    MCDNowPlayingButton *_nowPlayingButton;
    long long _count;
    NSIndexPath *_selectedNextIndexPath;
    _UIFilteredDataSource *_dataSource;
    NSIndexPath *_reselectIndexPath;
    MPWeakTimer *_loadingTimer;
    MPWeakTimer *_delayTimer;
    UIView *_MCD_tableView;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CARSessionStatus *_carSessionStatus;
    _Bool _limited;
    _Bool _hasCarScreen;
    _Bool _hasNoBrowsableContent;
    _Bool _didPushToNowPlayingAtLaunch;
    _Bool _isRootTableViewController;
    _Bool _hasTabbedBrowsing;
    _Bool _visible;
    _Bool _currentlyPlayingApp;
    _Bool _pushToNowPlaying;
    _Bool _didFinishInitialLoad;
    _Bool _didFinishInitialViewAppear;
    MCDPCContainer *_container;
    NSIndexPath *_selectedIndexPath;
    UIView *_placeholderView;
    UIAlertController *_alertController;
}

@property (nonatomic, getter=isVisible) _Bool visible;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) UIView *placeholderView;
@property (nonatomic) _Bool currentlyPlayingApp;
@property (retain, nonatomic) MPWeakTimer *loadingTimer;
@property (retain, nonatomic) UIAlertController *alertController;
@property (nonatomic) _Bool pushToNowPlaying;
@property (retain, nonatomic) MCDPCContainer *container;
@property (nonatomic) _Bool didFinishInitialLoad;
@property (nonatomic) _Bool didFinishInitialViewAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)contentScrollView;
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;
- (id)initWithContainer:(id)arg1;
- (void)_limitedUIChanged:(id)arg1;
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadTable;
- (void)_nowPlayingDidChange:(id)arg1;
- (void)_appRegisteredForContent:(id)arg1;
- (void)_clearTableViewSelectionAnimated:(_Bool)arg1;
- (void)_updateNowPlayingButtonVisibility;
- (void)_showTimeoutScreen;
- (void)_replacePlaceholderViewWithView:(id)arg1;
- (void)_showLoadingScreen;
- (void)_displayErrorAlertController:(id)arg1;
- (void)_clearLoadingActivity;
- (id)initWithContainer:(id)arg1 tabbedBrowsing:(_Bool)arg2;
- (void)_displayLoadingActivity;
- (_Bool)_shouldLimitLists;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_pushToNowPlaying:(_Bool)arg1;
- (void)container:(id)arg1 didInvalidateIndicies:(id)arg2;
- (void)containerDidChangeCount:(id)arg1;
- (void)errorViewDidTapButton:(id)arg1;

@end
