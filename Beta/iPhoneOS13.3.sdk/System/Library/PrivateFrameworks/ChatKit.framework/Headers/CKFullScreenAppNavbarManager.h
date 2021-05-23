/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKAvatarPickerViewController, CKConversation, CKNavigationBarCanvasView, IMBalloonPlugin, NSMutableArray, NSString, NSTimer, UIButton, UILabel;

@protocol CKFullScreenAppNavbarManagerDelegate;

@interface CKFullScreenAppNavbarManager : NSObject

{
    long long _style;
    id <CKFullScreenAppNavbarManagerDelegate> _delegate;
    IMBalloonPlugin *_plugin;
    UIButton *_dismissButton;
    UIButton *_appIconButton;
    CKNavigationBarCanvasView *_canvasView;
    CKAvatarPickerViewController *_avatarPickerViewController;
    CKConversation *_conversation;
    NSMutableArray *_notificationViews;
    NSTimer *_notificationTimer;
    UILabel *_defaultTitleLabel;
}

@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) UIButton *appIconButton;
@property (retain, nonatomic) CKNavigationBarCanvasView *canvasView;
@property (retain, nonatomic) CKAvatarPickerViewController *avatarPickerViewController;
@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) NSMutableArray *notificationViews;
@property (retain, nonatomic) NSTimer *notificationTimer;
@property (retain, nonatomic) UILabel *defaultTitleLabel;
@property (nonatomic) long long style;
@property (weak, nonatomic) id <CKFullScreenAppNavbarManagerDelegate> delegate;
@property (retain, nonatomic) IMBalloonPlugin *plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_invalidateTimer;
- (void)_updateTitleView;
- (void)avatarNotificationCalloutViewWillFadeIn:(id)arg1;
- (void)avatarNotificationCalloutViewDidFinishFadeOut:(id)arg1;
- (void)avatarNotificationCalloutViewReceivedTouch:(id)arg1;
- (void)_handleChatItemDidChange:(id)arg1;
- (void)_handleChatDisplayNameChange:(id)arg1;
- (void)_contactPhotosEnabledChangedNotification:(id)arg1;
- (void)_configureCanvasView;
- (void)_updateDismissButton;
- (_Bool)_canShowAvatarView;
- (void)_updateTitleLabelText;
- (_Bool)_didReceiveMessageChatItem:(id)arg1 addedChatItems:(id)arg2;
- (_Bool)_shouldStartnotificationQueue;
- (void)_startNotificationQueue;
- (void)_addNotificationViewToQueue;
- (void)_removeAllNotifications;
- (void)_dequeueNotificationViews:(id)arg1;
- (long long)_viewModeForCalloutView;
- (id)initWithConversation:(id)arg1 plugin:(id)arg2;
- (void)dismissNotifications;

@end
