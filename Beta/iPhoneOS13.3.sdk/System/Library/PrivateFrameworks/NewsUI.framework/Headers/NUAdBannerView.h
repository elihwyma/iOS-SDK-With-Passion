/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <iAd/ADBannerView.h>

@class NSURL;

@interface NUAdBannerView : ADBannerView

@property (nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) unsigned long long skipThreshold;

- (id)initWithAdCreativeType:(int)arg1 layoutOptions:(id)arg2;

@end
