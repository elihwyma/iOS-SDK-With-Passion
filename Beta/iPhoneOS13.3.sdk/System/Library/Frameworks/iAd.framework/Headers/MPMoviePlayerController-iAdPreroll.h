/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <MPMoviePlayerController.h>

@interface MPMoviePlayerController (iAdPreroll)

+ (void)preparePrerollAds;

- (void)playPrerollAdWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelPreroll;

@end
