/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface GKChallengeEventHandlerUIDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)showReceivedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)showRemotelyCompletedBannerForReceivingPlayer:(id)arg1 challenge:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)showLocallyCompletedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
