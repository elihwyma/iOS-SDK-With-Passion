/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UINavigationController.h>

@class NSString, VUIAppInstallConfirmationViewController;

@protocol WLKInstallable;

@interface VUIAppInstallerViewController : UINavigationController

{
    CDUnknownBlockType _completionBlock;
    double _lastProgress;
    CDUnknownBlockType _progressBlock;
    VUIAppInstallConfirmationViewController *_confirmationController;
    _Bool _displayAppStoreLink;
    _Bool _displaySecondaryLink;
    id <WLKInstallable> _installable;
    NSString *_localizedContentTitle;
    NSString *_contentType;
    NSString *_confirmationTitle;
    NSString *_confirmationBody;
    NSString *_updateBody;
    NSString *_updateTitle;
    NSString *_confirmationInstallButtonTitle;
    NSString *_secondaryLinkTitle;
    CDUnknownBlockType _secondaryLinkHandler;
}

@property (nonatomic, readonly) id <WLKInstallable> installable;
@property (copy, nonatomic) NSString *localizedContentTitle;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *confirmationTitle;
@property (copy, nonatomic) NSString *confirmationBody;
@property (copy, nonatomic) NSString *updateBody;
@property (copy, nonatomic) NSString *updateTitle;
@property (copy, nonatomic) NSString *confirmationInstallButtonTitle;
@property (nonatomic) _Bool displayAppStoreLink;
@property (nonatomic) _Bool displaySecondaryLink;
@property (copy, nonatomic) NSString *secondaryLinkTitle;
@property (copy, nonatomic) CDUnknownBlockType secondaryLinkHandler;

- (id)init;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithInstallable:(id)arg1;
- (void)beginInstallingAppWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dismissAppInstallWithCompletion:(CDUnknownBlockType)arg1;
- (void)_beginInstallingApp;
- (void)_initConfirmation;
- (void)_updateWithInstallProgress:(double)arg1;
- (void)_finishInstallationWithCompletion:(CDUnknownBlockType)arg1;

@end
