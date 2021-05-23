/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAppLoadingViewController.h>

@class NSString, SSLookupItemOffer, UIBarButtonItem, UIButton, VUIAppInstallConfirmationView, VUIAppInstallLockup;

@protocol WLKInstallable;

__attribute__((visibility("hidden")))
@interface VUIAppInstallConfirmationViewController : VUIAppLoadingViewController

{
    NSString *_updateTitle;
    NSString *_updateMessage;
    CDUnknownBlockType _cancelationHandler;
    CDUnknownBlockType _actionHandler;
    CDUnknownBlockType _appStoreHandler;
    CDUnknownBlockType _secondaryLinkHandler;
    unsigned long long _state;
    UIBarButtonItem *_barButtonItem;
    VUIAppInstallConfirmationView *_confirmationView;
    id <WLKInstallable> _installable;
    SSLookupItemOffer *_itemOffer;
}

@property (retain, nonatomic) UIBarButtonItem *barButtonItem;
@property (retain, nonatomic) VUIAppInstallConfirmationView *confirmationView;
@property (retain, nonatomic) id <WLKInstallable> installable;
@property (retain, nonatomic) SSLookupItemOffer *itemOffer;
@property (copy, nonatomic) CDUnknownBlockType cancelationHandler;
@property (copy, nonatomic) CDUnknownBlockType actionHandler;
@property (copy, nonatomic) CDUnknownBlockType appStoreHandler;
@property (copy, nonatomic) CDUnknownBlockType secondaryLinkHandler;
@property (nonatomic, readonly) UIButton *actionButton;
@property (nonatomic, readonly) VUIAppInstallLockup *lockup;
@property (nonatomic) unsigned long long state;

- (id)init;
- (void)setTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)loadView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_handleCancel;
- (id)initWithInstallable:(id)arg1;
- (void)setUpdateTitle:(id)arg1;
- (void)setUpdateMessage:(id)arg1;
- (void)setSecondaryLinkTitle:(id)arg1;
- (void)setPreInstallState;
- (void)setInstallingState;
- (void)_handleAppStore;
- (void)_handleSecondaryLink;
- (void)_handleAction;
- (void)_fetchAppInfo;
- (id)_namedRatingWithRatings:(id)arg1;
- (void)_fetchStoreInfoForAdamID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_fileSizeWithDeviceSizes:(id)arg1;

@end
