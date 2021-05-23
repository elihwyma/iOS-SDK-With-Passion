/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoPresentationSizeObserving <Swift>

@property (nonatomic, readonly) struct CGSize presentationSize;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

@end
