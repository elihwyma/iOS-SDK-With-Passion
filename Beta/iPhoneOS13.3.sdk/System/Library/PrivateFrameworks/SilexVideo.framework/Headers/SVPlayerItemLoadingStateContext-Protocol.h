/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class AVPlayerItem, NSError;

@protocol SVPlayerItemLoadingStateContext <Swift>

@property (nonatomic, readonly) AVPlayerItem *item;
@property (nonatomic, readonly) NSError *error;

@end
