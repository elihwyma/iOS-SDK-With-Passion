/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <iAd/Swift-Protocol.h>

@class ADLayoutOptions, NSString, UIView, UIViewController;

@protocol ADAdRecipient <Swift>

@property (nonatomic, readonly) int internalAdType;
@property (retain, nonatomic) ADLayoutOptions *layoutOptions;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly) UIView *adSpaceView;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (copy, nonatomic) NSString *adResponseId;
@property (nonatomic) int screenfuls;
@property (nonatomic) int slotPosition;
@property (nonatomic) _Bool displayed;
@property (nonatomic) _Bool reUsed;
@property (nonatomic) long long lastErrorCode;

- (unsigned short)privacyButtonWasTapped;
- (unsigned short)serverBannerViewWillLoad;
- (unsigned short)serverBannerViewDidLoad;
- (unsigned short)serverBannerViewDidFailToReceiveAdWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)serverStoryboardDidTransitionOut;
- (unsigned short)storyboardViewControllerDidPresent;
- (unsigned short)pauseBannerMedia;
- (unsigned short)resumeBannerMedia;
- (unsigned short)shouldTestVisibilityAtPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)adlibManagedVideoAdDidImpress;
- (unsigned short)adlibManagedVideoAdDidResumePlay;
- (unsigned short)adlibManagedVideoAdDidPausePlay;
- (unsigned short)adlibManagedVideoAdDidCompletePlay: /* Error: Ran out of types for this method. */;
- (unsigned short)adlibManagedVideoAdDidTapForMoreInfo;
- (unsigned short)adlibManagedVideoAdDidTapVideo;
- (unsigned short)adlibManagedVideoAdDidToggleToMute: /* Error: Ran out of types for this method. */;

@end
