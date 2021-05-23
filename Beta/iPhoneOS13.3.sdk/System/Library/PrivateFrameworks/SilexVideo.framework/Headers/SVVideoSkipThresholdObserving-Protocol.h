/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoSkipThreshold;

@protocol SVVideoSkipThresholdObserving <Swift>

@property (nonatomic, readonly) id <SVVideoSkipThreshold> thresholdProvider;
@property (nonatomic, readonly) _Bool loading;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType block;

@end
