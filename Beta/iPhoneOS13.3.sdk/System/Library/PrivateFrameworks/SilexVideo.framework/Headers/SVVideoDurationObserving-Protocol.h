/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoDurationObserving <Swift>

@property (nonatomic, readonly) double duration;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

@end
