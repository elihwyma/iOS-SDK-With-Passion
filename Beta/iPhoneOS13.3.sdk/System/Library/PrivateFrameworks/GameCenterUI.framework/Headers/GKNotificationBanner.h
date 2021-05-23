/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@interface GKNotificationBanner : NSObject

+ (id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 actionMessage:(id)arg5;
+ (id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4;
+ (void)showWelcomeBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)showBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)showBannerWithTitle:(id)arg1 message:(id)arg2 duration:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 touchHandler:(CDUnknownBlockType)arg4;
+ (void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 touchHandler:(CDUnknownBlockType)arg4;
+ (id)bannerViewWithTitle:(id)arg1 message:(id)arg2 actionMessage:(id)arg3;

@end
