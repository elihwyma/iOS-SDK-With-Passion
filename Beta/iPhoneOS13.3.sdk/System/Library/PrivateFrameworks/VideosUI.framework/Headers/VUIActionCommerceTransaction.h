/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAction.h>

@class IKAppContext, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIActionCommerceTransaction : VUIAction

{
    NSString *_commerceActionRef;
    NSDictionary *_contextData;
    IKAppContext *_appContext;
}

@property (retain, nonatomic) NSString *commerceActionRef;
@property (copy, nonatomic) NSDictionary *contextData;
@property (weak, nonatomic) IKAppContext *appContext;

+ (_Bool)isTransactionInProgressForBuyParams:(id)arg1;
+ (id)extractSalableAdamIDFromBuyParams:(id)arg1;
+ (void)displayConfirmationNotificationWithTitle:(id)arg1 andBody:(id)arg2 forChannelName:(id)arg3;
+ (id)_skuDownloadKind:(long long)arg1;
+ (void)_addTransaction:(id)arg1 forBuyParams:(id)arg2;
+ (void)_removeTransactionForBuyParams:(id)arg1;

- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithActionRef:(id)arg1 contextData:(id)arg2 appContext:(id)arg3;
- (void)_startPurchaseFlowForOffer:(id)arg1 playWhenDone:(_Bool)arg2 appContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_startSubscribeFlowForOffer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_recordLog:(id)arg1 withBuyParams:(id)arg2;
- (void)_postPurchaseNotification:(id)arg1 error:(id)arg2;
- (void)_postTransactionDidStartNotificationWithBuyParams:(id)arg1;
- (void)_postSubscriptionNotificationWithChannelName:(id)arg1 buyParams:(id)arg2 error:(id)arg3;

@end
