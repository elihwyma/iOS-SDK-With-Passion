/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBStarkBannerSource.h>

@class NSString;

@protocol SBStarkNotificationBannerSourceDelegate;

@interface SBStarkNotificationBannerSource : SBStarkBannerSource

{
    id <SBStarkNotificationBannerSourceDelegate> _delegate;
}

@property (weak, nonatomic) id <SBStarkNotificationBannerSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)postNotificationRequest:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (void)bannerViewWillAppear:(id)arg1;
- (void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;
- (void)executeAction:(id)arg1 forNotificationRequest:(id)arg2;

@end
