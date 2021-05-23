/*
 Image: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
 */

#import <UIKit/UIWindow.h>

@class CLSNotificationBannerViewController, NSObject;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CLSNotificationBannerWindow : UIWindow

{
    CLSNotificationBannerViewController *_currentBannerViewController;
    NSObject<OS_dispatch_semaphore> *_bannerSemaphore;
}

@property (retain, nonatomic) CLSNotificationBannerViewController *currentBannerViewController;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *bannerSemaphore;

+ (id)queue;
+ (id)bannerWindow;
+ (void)enqueBanner:(id)arg1;

- (id)init;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handlePan:(id)arg1;
- (_Bool)_canAffectStatusBarAppearance;
- (_Bool)_includeInDefaultImageSnapshot;
- (void)_showBanner:(id)arg1;
- (void)_hideBanner:(id)arg1 quickly:(_Bool)arg2;

@end
