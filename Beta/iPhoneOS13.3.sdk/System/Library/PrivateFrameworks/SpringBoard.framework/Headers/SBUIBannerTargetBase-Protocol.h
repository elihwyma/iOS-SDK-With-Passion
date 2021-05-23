/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBUIBannerTargetBase <Swift>

@property (nonatomic, readonly) void *bannerTargetIdentifier;
@property (nonatomic, readonly) long long bannerTargetIdiom;

- (unsigned short)registerSource: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterSource: /* Error: Ran out of types for this method. */;
- (unsigned short)modallyPresentBannerWithContext: /* Error: Ran out of types for this method. */;
- (unsigned short)isShowingModalBanner;
- (unsigned short)signalSource: /* Error: Ran out of types for this method. */;
- (unsigned short)currentBannerContextForSource: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissCurrentBannerContextForSource: /* Error: Ran out of types for this method. */;
- (unsigned short)cacheBannerForContext:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeCachedBannerForContext: /* Error: Ran out of types for this method. */;

@end
