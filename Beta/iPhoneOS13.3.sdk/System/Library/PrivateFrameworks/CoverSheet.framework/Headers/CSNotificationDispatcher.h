/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionEndpoint, CSBehavior, NSString, SBNCAlertingController;

@protocol CSCarPlayStatusProviding, CSNotificationDestination, NCNotificationDestinationDelegate;

@interface CSNotificationDispatcher : NSObject

{
    _Bool _active;
    id <CSNotificationDestination> _modalDestination;
    id <CSNotificationDestination> _listDestination;
    CSBehavior *_activeBehavior;
    id <CSCarPlayStatusProviding> _carPlayStatusProvider;
    SBNCAlertingController *_alertingController;
    id <NCNotificationDestinationDelegate> _notificationDestinationDelegate;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (retain, nonatomic) CSBehavior *activeBehavior;
@property (weak, nonatomic) id <CSNotificationDestination> modalDestination;
@property (weak, nonatomic) id <CSNotificationDestination> listDestination;
@property (weak, nonatomic) id <CSCarPlayStatusProviding> carPlayStatusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NCNotificationDestinationDelegate> delegate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *endpoint;
@property (weak, nonatomic) SBNCAlertingController *alertingController;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;

- (void)postNotificationRequest:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
- (_Bool)isPresentingNotificationInLongLook;
- (_Bool)dismissNotificationInLongLookAnimated:(_Bool)arg1;
- (id)notificationSectionSettingsForDestination:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)destination:(id)arg1 performAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(_Bool)arg4 withParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)destination:(id)arg1 settingsForSectionIdentifier:(id)arg2;
- (void)destination:(id)arg1 clearNotificationRequestsInSections:(id)arg2;
- (void)destination:(id)arg1 clearNotificationRequests:(id)arg2;
- (void)destination:(id)arg1 clearNotificationRequestsFromIncomingSection:(id)arg2;
- (void)destination:(id)arg1 setAllowsNotifications:(_Bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 setDeliverQuietly:(_Bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forSectionIdentifier:(id)arg3;
- (void)_clearNotificationRequestsFromDashBoard:(id)arg1;
- (void)stopAllRealerts;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
- (_Bool)interceptsQueueRequest:(id)arg1;
- (void)destination:(id)arg1 clearNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (id)alertingControllerForDestination:(id)arg1;

@end
