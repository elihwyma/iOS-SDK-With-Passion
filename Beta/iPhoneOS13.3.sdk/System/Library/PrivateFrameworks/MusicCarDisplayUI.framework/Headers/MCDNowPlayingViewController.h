/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIViewController.h>

@class CARSessionStatus, MPWeakTimer, NSString, UIActivityIndicatorView, UIBarButtonItem, UILabel, UITableViewController, _MCDNowPlayingViewController;

@protocol MCDNowPlayingContentManagerProtocol;

@interface MCDNowPlayingViewController : UIViewController

{
    _Bool _showNavigationBar;
    _Bool _trackBuffering;
    _Bool _handledWillAppear;
    _Bool _shouldShowPlaybackQueue;
    _MCDNowPlayingViewController *_nowPlayingViewController;
    UIBarButtonItem *_backButton;
    UIActivityIndicatorView *_activityIndicator;
    UIBarButtonItem *_activityIndicatorBarButtonItem;
    NSString *_bundleID;
    NSString *_appName;
    MPWeakTimer *_activityTimer;
    UILabel *_rightTitleLabel;
    UIBarButtonItem *_rightTitleLabelBarButtonItem;
    UIBarButtonItem *_playbackQueueBarButtonItem;
    CARSessionStatus *_carSessionStatus;
    id <MCDNowPlayingContentManagerProtocol> _contentManager;
    UITableViewController *_playbackQueueViewController;
    CDUnknownBlockType _albumViewControllerProvider;
}

@property (retain, nonatomic) _MCDNowPlayingViewController *nowPlayingViewController;
@property (retain, nonatomic) UIBarButtonItem *backButton;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIBarButtonItem *activityIndicatorBarButtonItem;
@property (nonatomic) _Bool trackBuffering;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) MPWeakTimer *activityTimer;
@property (retain, nonatomic) UILabel *rightTitleLabel;
@property (retain, nonatomic) UIBarButtonItem *rightTitleLabelBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *playbackQueueBarButtonItem;
@property (nonatomic) _Bool handledWillAppear;
@property (nonatomic) _Bool shouldShowPlaybackQueue;
@property (retain, nonatomic) CARSessionStatus *carSessionStatus;
@property (retain, nonatomic) id <MCDNowPlayingContentManagerProtocol> contentManager;
@property (retain, nonatomic) UITableViewController *playbackQueueViewController;
@property (copy, nonatomic) CDUnknownBlockType albumViewControllerProvider;
@property (nonatomic) _Bool showNavigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)preferredFocusEnvironments;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)session:(id)arg1 didUpdateConfiguration:(id)arg2;
- (void)_updateBackButton;
- (id)initWithPlayableBundleID:(id)arg1 appName:(id)arg2;
- (id)initWithBundleID:(id)arg1 appName:(id)arg2;
- (void)_adjustRightTitleLabelToFit;
- (void)_setupActivityTimer;
- (void)upNextButtonTapped:(id)arg1;
- (void)setRightTitle:(id)arg1;
- (void)contentManager:(id)arg1 shouldShowPlaybackQueue:(_Bool)arg2;
- (void)albumArtistButtonTapped:(id)arg1;
- (void)_handleWillAppear;
- (void)_popViewControllerAnimated;
- (void)_invalidateActivityTimer;
- (void)contentManagerReloadData:(id)arg1;
- (void)contentManager:(id)arg1 presentViewController:(id)arg2;
- (void)contentManager:(id)arg1 bufferingItem:(_Bool)arg2;
- (void)contentManagerInitiatedPlaybackFromPlaybackQueue:(id)arg1;
- (void)contentManager:(id)arg1 displayItemIndex:(long long)arg2 totalItemCount:(long long)arg3;
- (void)contentManagerCompletedAllPlayback:(id)arg1;
- (void)contentManager:(id)arg1 sectionName:(id)arg2;

@end
