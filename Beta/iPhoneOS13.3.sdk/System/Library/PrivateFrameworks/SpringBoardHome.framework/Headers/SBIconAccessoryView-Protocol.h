/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/Swift-Protocol.h>

@class SBFParallaxSettings;

@protocol SBIconListLayout;

@protocol SBIconAccessoryView <Swift>

@property (retain, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (retain, nonatomic) id <SBIconListLayout> listLayout;

- (unsigned short)accessoryCenterForIconBounds: /* Error: Ran out of types for this method. */;
- (unsigned short)configureAnimatedForIcon:infoProvider:animator: /* Error: Ran out of types for this method. */;
- (unsigned short)displayingAccessory;
- (unsigned short)configureForIcon:infoProvider: /* Error: Ran out of types for this method. */;
- (unsigned short)setAccessoryBrightness: /* Error: Ran out of types for this method. */;

@end
