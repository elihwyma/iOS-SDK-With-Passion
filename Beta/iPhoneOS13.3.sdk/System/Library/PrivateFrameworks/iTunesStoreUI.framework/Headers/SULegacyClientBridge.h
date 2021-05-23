/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString, SUClientInterface, SUOverlayBackgroundViewController, SUPreviewOverlayViewController, UITabBarController;

@interface SULegacyClientBridge : NSObject

{
    SUClientInterface *_clientInterface;
    SUOverlayBackgroundViewController *_overlayBackgroundViewController;
    SUPreviewOverlayViewController *_previewOverlayViewController;
    UITabBarController *_rootViewController;
}

@property (nonatomic, readonly) SUClientInterface *clientInterface;
@property (retain, nonatomic) UITabBarController *rootViewController;
@property (nonatomic, readonly) SUOverlayBackgroundViewController *overlayBackgroundViewController;
@property (nonatomic, readonly) SUPreviewOverlayViewController *previewOverlayViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_showPreviewOverlayAnimated:(_Bool)arg1;
- (id)initWithClientInterface:(id)arg1;
- (_Bool)presentOverlayBackgroundViewController:(id)arg1;
- (void)scriptOverlayBackgroundDidDismiss:(id)arg1;
- (void)dismissOverlayBackgroundViewController;
- (id)_previewOverlayViewController;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (_Bool)enterAccountFlowWithViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)composeReviewWithViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)performActionForDialog:(id)arg1 button:(id)arg2;
- (void)_removePreviewOverlayViewController;
- (void)hidePreviewOverlayAnimated:(_Bool)arg1;
- (void)showPreviewOverlayAnimated:(_Bool)arg1;

@end
