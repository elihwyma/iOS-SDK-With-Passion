/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSArray;

@protocol MPCPlayerPlaybackRateCommand <Swift>

@property (copy, nonatomic, readonly) NSArray *supportedPlaybackRates;
@property (nonatomic, readonly) float preferredPlaybackRate;

- (unsigned short)setPlaybackRate: /* Error: Ran out of types for this method. */;

@end
