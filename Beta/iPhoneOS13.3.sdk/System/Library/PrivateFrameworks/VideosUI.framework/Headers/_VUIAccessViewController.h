/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSMutableArray, OBPrivacyLinkController, VUIAccessView_iOS, VUIAppSpinnerView;

__attribute__((visibility("hidden")))
@interface _VUIAccessViewController : UIViewController

{
    VUIAccessView_iOS *_accessView;
    VUIAppSpinnerView *_loadingView;
    NSArray *_channels;
    OBPrivacyLinkController *_privacyController;
    NSMutableArray *_bundleIDs;
    NSDictionary *_options;
    _Bool _hasCalledCompletion;
    NSArray *_appInfos;
    NSArray *_appChannels;
    NSMutableArray *_channelIds;
    _Bool _hasOptedIn;
    _Bool _shouldDenyOnCancel;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;

+ (_Bool)_isHostedInRemoteViewService;

- (id)init;
- (void)dealloc;
- (void)_init;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_handleMenuGesture:(id)arg1;
- (id)cappedTraitCollection;
- (id)_watchListAppIcon;
- (id)_imageForBundleID:(id)arg1;
- (void)_fetchRemoteAppInfo;
- (void)_setupAccessViews;
- (void)_toggleLoadingScreen;
- (void)_presentGenericErrorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_allow:(id)arg1;
- (void)_disallow:(id)arg1;
- (void)_handleSeeAllButton:(id)arg1;
- (void)_handleNackButton:(id)arg1;
- (id)initWithBundleIDs:(id)arg1 channels:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
