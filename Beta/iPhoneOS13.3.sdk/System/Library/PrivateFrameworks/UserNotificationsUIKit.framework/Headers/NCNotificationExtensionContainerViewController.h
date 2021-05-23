/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIViewController.h>

@class NCMediaPlayPauseButton, NCNotificationRequest, NSMutableArray, NSString, UIView, _UNNotificationExtensionHostViewController;

@protocol NCNotificationCustomContentDelegate;

@interface NCNotificationExtensionContainerViewController : UIViewController

{
    _Bool _allowManualDismiss;
    _Bool _defaultContentHidden;
    _Bool _overridesDefaultTitle;
    _Bool _userInteractionEnabled;
    _Bool _shouldPlayMediaAfterExpanded;
    id <NCNotificationCustomContentDelegate> _delegate;
    NSString *_extensionIdentifier;
    double _contentSizeRatio;
    NCNotificationRequest *_notificationRequest;
    _UNNotificationExtensionHostViewController *_extensionViewController;
    UIView *_blockingView;
    NCMediaPlayPauseButton *_mediaPlayPauseButton;
    NSMutableArray *_queuedRequests;
    NSMutableArray *_updatedActions;
}

@property (retain, nonatomic) NSString *extensionIdentifier;
@property (nonatomic) double contentSizeRatio;
@property (retain, nonatomic) NCNotificationRequest *notificationRequest;
@property (retain, nonatomic) _UNNotificationExtensionHostViewController *extensionViewController;
@property (retain, nonatomic) UIView *blockingView;
@property (retain, nonatomic) NCMediaPlayPauseButton *mediaPlayPauseButton;
@property (nonatomic) _Bool allowManualDismiss;
@property (nonatomic) _Bool defaultContentHidden;
@property (nonatomic) _Bool overridesDefaultTitle;
@property (nonatomic) _Bool userInteractionEnabled;
@property (retain, nonatomic) NSMutableArray *queuedRequests;
@property (nonatomic) _Bool shouldPlayMediaAfterExpanded;
@property (retain, nonatomic) NSMutableArray *updatedActions;
@property (weak, nonatomic) id <NCNotificationCustomContentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *contentExtensionIdentifier;

- (void)dealloc;
- (void)setTitle:(id)arg1;
- (_Bool)becomeFirstResponder;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)resignFirstResponder;
- (_Bool)_canShowWhileLocked;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canResignFirstResponder;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)remoteService;
- (_Bool)didReceiveNotificationRequest:(id)arg1;
- (void)preserveInputViews;
- (_Bool)restoreInputViews;
- (_Bool)performAction:(id)arg1 forNotification:(id)arg2;
- (unsigned long long)customContentLocation;
- (_Bool)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (void)playMedia;
- (id)cancelTouches;
- (id)initWithExtension:(id)arg1 forNotificationRequest:(id)arg2;
- (void)_teardownExtension;
- (void)_loadExtensionViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (double)_contentHeightForWidth:(double)arg1;
- (void)_flushQueuedRequests;
- (id)_responseForAction:(id)arg1 notification:(id)arg2 response:(id)arg3;
- (void)_playMediaAfterExpanded;
- (void)_setupMediaButton;
- (id)_requestActionForActionIdentifier:(id)arg1;
- (void)_mediaPlayPauseButtonTapped:(id)arg1;
- (void)_addExtensionViewFromViewController:(id)arg1;
- (void)_setupRemoteServiceInterface:(id)arg1;
- (void)_setupExtensionViewController:(id)arg1;
- (void)notificationHostExtensionDidUpdateControls:(id)arg1;
- (void)notificationHost:(id)arg1 extensionDidCompleteResponse:(id)arg2 withOption:(unsigned long long)arg3;
- (void)notificationHostExtension:(id)arg1 setTitle:(id)arg2;
- (void)notificationHostExtensionMediaPlayingDidStart:(id)arg1;
- (void)notificationHostExtensionMediaPlayingDidPause:(id)arg1;
- (void)notificationHostExtensionRequestsDefaultAction:(id)arg1;
- (void)notificationHostExtensionRequestsDismiss:(id)arg1;
- (void)notificationHostExtension:(id)arg1 setUserNotificationActions:(id)arg2;

@end
