/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <AVPlayerViewController.h>

@interface AVPlayerViewController (iAdPreroll)

+ (void)preparePrerollAds;

- (void)playPrerollAdWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelPreroll;

@end
