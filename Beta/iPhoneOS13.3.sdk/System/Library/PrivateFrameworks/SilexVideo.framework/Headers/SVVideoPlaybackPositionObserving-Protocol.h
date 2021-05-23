/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoPlaybackPositionObserving <Swift>

@property (nonatomic, readonly) unsigned long long position;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

@end
