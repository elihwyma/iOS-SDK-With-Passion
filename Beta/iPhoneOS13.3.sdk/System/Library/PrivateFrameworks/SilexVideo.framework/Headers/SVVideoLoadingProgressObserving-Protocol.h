/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoLoadingProgressObserving <Swift>

@property (nonatomic, readonly) double progress;
@property (copy, nonatomic, setter=onProgressChanged:) CDUnknownBlockType progressChangedBlock;

@end
