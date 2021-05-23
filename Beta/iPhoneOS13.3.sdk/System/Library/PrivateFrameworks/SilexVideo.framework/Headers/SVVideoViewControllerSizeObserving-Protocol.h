/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoViewControllerSizeObserving <Swift>

@property (nonatomic, readonly) struct CGSize size;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

@end
