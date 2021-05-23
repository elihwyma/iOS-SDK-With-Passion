/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/_UIRemoteViewController.h>

#import <SafariServices/Swift-Protocol.h>

@class NSString, UIWindowScene;

@protocol SFBrowserRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFBrowserRemoteViewController : _UIRemoteViewController <Swift>

{
    _Bool _isInFullScreen;
    id <SFBrowserRemoteViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SFBrowserRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;
@property (nonatomic, readonly, getter=isOnScreenForVolumeDisplay) _Bool onScreenForVolumeDisplay;
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic, readonly, getter=isOnScreen) _Bool onScreen;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;

- (void)willMoveToParentViewController:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)willDismissServiceViewController;
- (void)didLoadWebView;
- (void)didFinishInitialLoad:(_Bool)arg1;
- (void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
- (void)executeCustomActivityProxyID:(id)arg1;
- (void)setRemoteSwipeGestureEnabled:(_Bool)arg1;
- (void)willOpenURLInHostApplication:(id)arg1;
- (void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(_Bool)arg2;
- (void)initialLoadDidRedirectToURL:(id)arg1;
- (void)didChangeFullScreen:(_Bool)arg1;
- (void)didResolveRedirectionWithURL:(id)arg1 appLink:(id)arg2;
- (void)didDecideShouldShowLinkPreviews:(_Bool)arg1;

@end
