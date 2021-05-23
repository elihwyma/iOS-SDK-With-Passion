/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIWindow.h>

@class GKNotificationBannerViewController, NSObject;

@protocol OS_dispatch_semaphore;

@interface GKNotificationBannerWindow : UIWindow

{
    NSObject<OS_dispatch_semaphore> *_bannerSemaphore;
    GKNotificationBannerViewController *_currentBannerViewController;
}

@property (retain, nonatomic) GKNotificationBannerViewController *currentBannerViewController;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *bannerSemaphore;

+ (id)queue;
+ (id)bannerWindow;
+ (void)enqueBanner:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)handlePan:(id)arg1;
- (_Bool)_canAffectStatusBarAppearance;
- (_Bool)_includeInDefaultImageSnapshot;
- (_Bool)_canBecomeKeyWindow;
- (void)handleSingleTap:(id)arg1;
- (void)_showBanner:(id)arg1;
- (void)_hideBanner:(id)arg1 quickly:(_Bool)arg2;

@end
