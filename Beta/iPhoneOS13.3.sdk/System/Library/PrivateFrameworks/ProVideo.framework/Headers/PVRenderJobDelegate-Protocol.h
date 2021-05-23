/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/Swift-Protocol.h>

@class PVVideoCompositingContext;

@protocol PVRenderJobDelegate <Swift>

@property (readonly) unsigned int jobTypeTag;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;

+ (unsigned short)jobTypeTag;

- (unsigned short)buildGraph:renderContext:frameStats: /* Error: Ran out of types for this method. */;
- (unsigned short)setupDestinationBuffers:renderContext:frameStats: /* Error: Ran out of types for this method. */;
- (unsigned short)finishCompletedJob;
- (unsigned short)finishCancelledJob;
- (unsigned short)renderJobFinished: /* Error: Ran out of types for this method. */;

@end
