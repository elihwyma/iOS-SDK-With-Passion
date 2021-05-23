/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoSkipLockObserving <Swift>

@property (nonatomic, readonly) _Bool locked;
@property (copy, nonatomic, setter=onUnlock:) CDUnknownBlockType unlockBlock;
@property (nonatomic, readonly) double countdown;
@property (copy, nonatomic, setter=onCountDown:) CDUnknownBlockType countdownBlock;

@end
