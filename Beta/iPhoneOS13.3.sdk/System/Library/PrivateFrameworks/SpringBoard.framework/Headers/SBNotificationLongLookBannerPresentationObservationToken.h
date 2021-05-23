/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBPresentationObservationToken.h>

@class NSString, SBNotificationBannerDestination;

@interface SBNotificationLongLookBannerPresentationObservationToken : SBPresentationObservationToken

{
    SBNotificationBannerDestination *_notificationBannerDestination;
}

@property (nonatomic, readonly) SBNotificationBannerDestination *notificationBannerDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)state;
- (id)initWithNotificationBannerDestination:(id)arg1;
- (void)notificationBannerDestinationWillPresentLongLook:(id)arg1;
- (void)notificationBannerDestinationDidPresentLongLook:(id)arg1;
- (void)notificationBannerDestinationWillDismissLongLook:(id)arg1;
- (void)notificationBannerDestinationDidDismissLongLook:(id)arg1;

@end
