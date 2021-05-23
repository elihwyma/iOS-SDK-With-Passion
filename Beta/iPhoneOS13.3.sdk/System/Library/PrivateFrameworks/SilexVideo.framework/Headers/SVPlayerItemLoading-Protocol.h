/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class AVPlayerItem, NSError;

@protocol SVPlayerItemLoading <Swift>

@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) AVPlayerItem *item;
@property (copy, nonatomic, readonly) NSError *error;

- (unsigned short)load;
- (unsigned short)onLoadingStateChange: /* Error: Ran out of types for this method. */;

@end
