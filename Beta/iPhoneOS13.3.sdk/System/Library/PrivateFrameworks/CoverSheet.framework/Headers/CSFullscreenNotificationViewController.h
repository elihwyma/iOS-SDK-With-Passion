/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSModalViewControllerBase.h>

@class NCNotificationAction, NCNotificationRequest, NSString;

@protocol CSNotificationDispatcher;

@interface CSFullscreenNotificationViewController : CSModalViewControllerBase

{
    NCNotificationRequest *_request;
    NCNotificationAction *_primaryAction;
    NCNotificationAction *_secondaryAction;
    NCNotificationAction *_silenceAction;
    NCNotificationAction *_dismissAction;
    id <CSNotificationDispatcher> _dispatcher;
}

@property (nonatomic, readonly) NCNotificationRequest *notificationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;
@property (weak, nonatomic) id <CSNotificationDispatcher> dispatcher;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)handleEvent:(id)arg1;
- (void)volumeChanged:(id)arg1;
- (long long)presentationType;
- (long long)presentationPriority;
- (void)aggregateBehavior:(id)arg1;
- (void)handlePrimaryActionForView:(id)arg1;
- (void)handleSecondaryActionForView:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (void)postNotificationRequest:(id)arg1;
- (void)updateNotificationRequest:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
- (_Bool)isPresentingNotificationInLongLook;
- (_Bool)dismissNotificationInLongLookAnimated:(_Bool)arg1;
- (void)lockButtonPressed:(id)arg1;
- (void)_handleAction:(id)arg1 withName:(id)arg2;
- (void)_dismissFromSignificantUserInteraction;
- (void)_handleSilenceAction;
- (void)_handlePrimaryAction;
- (void)_handleDismissAction;
- (void)_handleSecondaryAction;
- (id)initWithNotificationRequest:(id)arg1;

@end
