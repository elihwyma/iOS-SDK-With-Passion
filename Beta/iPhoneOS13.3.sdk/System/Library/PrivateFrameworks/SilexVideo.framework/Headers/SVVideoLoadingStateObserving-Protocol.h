/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class NSError;

@protocol SVVideoLoadingStateObserving <Swift>

@property (nonatomic, readonly) unsigned long long state;
@property (copy, nonatomic, setter=onStart:) CDUnknownBlockType startBlock;
@property (copy, nonatomic, setter=onFinished:) CDUnknownBlockType finishedBlock;
@property (copy, nonatomic, setter=onFailed:) CDUnknownBlockType failedBlock;
@property (copy, nonatomic, readonly) NSError *error;

@end
