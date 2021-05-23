/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoPeriodicTimeObserving <Swift>

@property (nonatomic, readonly) double time;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

@end
